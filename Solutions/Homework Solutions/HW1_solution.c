/* This is the HW1 solution by Howard Nguyen.
* This solution demonstrates all code components relevant for HW 1:
* 	*switch case
*	*using a function to roll dice
*	*correct use of if-else
*	*fully functioning game logic
*
* It also includes a great interface for the user playing this game with a realistic "pause" using 
*	the sleep function between consecutive turns
*/



//----- CRAPS Game Program --------------------------------------
/*
    Author: Howard Nguyen
    Class: CS-3035
    Instructor: Manveen Kaur
    Due Date: 9/20/2022
    
    This is a simple program that plays the dice game CRAPS in the
    console. It will welcome the player for them to press enter to
    start the game. The game plays itself where the rolls and rules
    apply automatically until the game reach a final state of a WIN
    or LOSS. Will prompt the player to play again.

    NOTE: Windows.h/unistd.h is included to add
          the sleep() function for delays between events providing
          a more well paced experience with the game.

    * Extra Credit Attempted *
*/
//---------------------------------------------------------------



#ifdef _WIN32
#include<Windows.h>
#else
#include<unistd.h>
#endif

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

int rollDice();
void displayRoll(int* roll);

enum State { WIN, LOSS, CONTINUE };     //Extra Credit



int main() {
    srand(time(NULL));  //generate random seed
    enum State gameState = CONTINUE;
    int curRoll;
    int trgtRoll;
    bool isPlaying = true;

    //welcome screen and prompt to ask to play
    printf("//===== WELCOME TO CRAPS =====\\\\\n");
    printf("//*Please press enter to play*\\\\\n");
    printf("//============================\\\\\n");
    getchar();       //awaiting enter           
    printf("\n\n\n");

    //----- enter game loop -----
    while (isPlaying) {
        //First roll to determine gameState
        printf("//===== FIRST ROLL =====\\\\\n");
        curRoll = rollDice();
        
        sleep(2);
        switch (curRoll) {
            //WIN
            case 7:
            case 11:
                gameState = WIN;
                break;

            //LOSS
            case 2:
            case 3:
            case 12:
                gameState = LOSS;
                break;

            //CONTINUE
            default:
                //if roll becomes the player's point, display and save the target point
                trgtRoll = curRoll;
                printf("\n%d is now your target number to roll.\n", trgtRoll);
                sleep(3);
                printf("Lets Begin!\n\n");
                sleep(2.5);
        } 

        //continue rolling until trgtRoll is reached or roll a 7. Sets gameState accordingly
        while (gameState == CONTINUE) {    //roll loop
            curRoll = rollDice();
            printf("\n\n");
            
            if (curRoll == trgtRoll)
                gameState = WIN;
            else if (curRoll == 7)
                gameState = LOSS;
            sleep(1.8);
        }

        //display results based on gameState
        printf("\nYou've rolled a %d\n", curRoll);
        sleep(2.5);
        if (gameState == WIN) {
            printf("!!!YOU WIN!!!\n");
        }
        else if (gameState == LOSS) {
            printf("): YOU LOSE :(\n");
        }
        sleep(2.5);

        //prompt to play again
        printf("Play again? [y/n]\n");
        while (gameState != CONTINUE) {  //temporary repurpose gameState as a sential to the loop
            char input = '\0';
            scanf("%c", &input);
            while (getchar() != 10);   //reads buffer until "line-feed" char is read. "line-feed" == 10.
            switch (input) {           //This manages invalid inputs when scanf()/getchar() is called again.
                case 'y':
                case 'Y':
                    gameState = CONTINUE;
                    break;

                case 'n':
                case 'N':
                    gameState = CONTINUE;
                    isPlaying = false;
                    break;

                default:
                    printf("Invalid Input! Please try again.\n");
            }
        }
    }
    //----- END of Loop -----

    printf("Thanks for Playing!!!\n");
    return 0;
}



//===== rollDice ================================
/* Returns the sum of 2 6-sided dice roll.
   Displays each roll as well. */
//===============================================
int rollDice() {
    int sum = 0;

    for (int i = 0; i < 2; ++i) {
        //roll for random number
        int curNum = 7;
        while (curNum > 6)
            curNum = 1 + rand() / ((RAND_MAX + 1u) / 6);
        sum += curNum;
        displayRoll(&curNum);
    }

    printf("RESULT: %d\n", sum);
    return sum;
}


//===== displayRoll ==============================
/* Displays a graphic for the pasted in int. 
   Mainly used in rollDice(). */
//================================================
void displayRoll(int* roll) {
    printf("+---+\n");
    printf("| %d |\n", *roll);
    printf("+---+\n");
}
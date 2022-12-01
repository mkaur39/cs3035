#Solution by Donovan Hatfield


import sys

def main():
	#Get a string from user input#
	word = input('Enter a string: ')
	print('--------------------')
	print(word + ' reversed is ' + reverseChar(word))
	print('is ' + word + ' a palindrome? ' + str(isPalindrome(word)))

#this function will count the number of chars in a string using recursion
def countChar(word):
	print('String ['+word+'] length: ' +str(len(word)))
	if(len(word)) == 0:
		return 0
	else:
		countChar(word[1:])
		return len(word)

#this function will take a string, reverse it, then return the reversed string
def reverseChar(word):
	if len(word) == 0:
		return word
	else:
		char = word[0]
		return reverseChar(word[1:]) + char

#this function takes a string and returns a boolean determining if the string is a palindrome or not
def isPalindrome(word):
	if len(word) == 0:
		return False
	if len(word) == 1:
		return True
	else:
		last = word[-1]
		first = word[0]
		if last.lower() == first.lower():
			isPalindrome(word[1:len(word)-2])
		else:
			return False

		return True

if __name__ == "__main__":
	sys.exit(main())

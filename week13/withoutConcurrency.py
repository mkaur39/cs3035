from time import sleep, perf_counter
#perf_counter - a function in the time module that returns a relative time value to measure execution time between two points (like a stopwatch)

#sleep -function that adds specified delay to the execution of a program

#start a task that takes 1s to finish
def task():
    print('Begin')
    sleep(1)
    print('Complete')

#start a timer 
start_time = perf_counter()

#call the task function twice
task()
task()

#end the timer
end_time = perf_counter()

#print how long it took the two calls to the task function to complete
#f-strings are a way to print strings that can be embedded with Python expressions

print(f'It took {end_time- start_time: 0.2f} second(s) to complete.')


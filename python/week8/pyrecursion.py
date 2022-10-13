import sys

def main():
    data = input('Enter a string: ')
    attrition(data)


    
def attrition(data):
    print(data)
    if(len(data)) == 0:
        return
    else:
        attrition(data[1:])



if __name__ == "__main__":
    sys.exit(main())


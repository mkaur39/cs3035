import sys

def main():
    data = input('Enter a string: ')
    print(removePunctuation(data))

def removePunctuation(data):
    data = ''.join(c if c.isalpha() else '' for c in data.lower())
    return data


if __name__ == "__main__":
    sys.exit(main())


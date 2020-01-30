import sys

def dictprocessor(string):
    alphadict = {}

    for alphabet in string:
        if alphabet not in alphadict:
            alphadict[alphabet] = 1
        else:
            alphadict[alphabet] = alphadict[alphabet] + 1

    top5list = sorted(alphadict, key=alphadict.get, reverse=True)[:5]

    outputstring = ""

    for alphabet in top5list:
        outputstring = outputstring + str(alphabet) + ":"+ str(alphadict[alphabet]) + ","

    outputstring = outputstring[:-1]
    print(outputstring)

def main():
    inputstring = sys.argv[1].lower()

    dictprocessor(inputstring)

if __name__ == '__main__':
    if (len(sys.argv)) != 2:
        print("Popularity Calculator - Input a string to calculate the most popular character.")
        print("Usage: " + sys.argv[0] + " [String]")
    
        sys.exit()

    main()
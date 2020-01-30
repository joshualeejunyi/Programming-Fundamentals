import sys

def counter(string):
    alphadict = {}

    for alphabet in string:
        if alphabet != ',':
            if alphabet not in alphadict:
                alphadict[alphabet] = 1
            else:
                alphadict[alphabet] = alphadict[alphabet] + 1

    return alphadict

# so the brief says to have letter_count and double_count although various_count can actually handle single and double word inputs....
# so i'm just going to redirect them to various_count
def letter_count(string):
    various_count(string)

def double_count(string1, string2):
    concated = string1 + string2
    various_count(concated)

def various_count(*string):
    listofstrings = string

    alphadict = {}

    for word in listofstrings:
        alphadict = counter(word)

    sortedlist = sorted(alphadict, reverse=True)
    
    outputstring = ""

    for alphabet in sortedlist:
        outputstring = outputstring + str(alphabet) + ":"+ str(alphadict[alphabet]) + " "

    outputstring = outputstring[:-1]
    print(outputstring)


def main():
    inputstring = sys.argv[1]
    words = inputstring.split(',')
    numberofwords = len(words)

    # actually this if else is entirely useless but if not the 2 useless functions will be even more useless
    if numberofwords == 1:
        letter_count(inputstring)
    elif numberofwords == 2:
        double_count(words[0], words[1])
    else:
        various_count(inputstring)

if __name__ == '__main__':
    if (len(sys.argv)) != 2:
        print("Count Letters - Input multiple words separated by commas.")
        print("Usage: " + sys.argv[0] + " [Word 1, Word 2 ... Word n]")
    
        sys.exit()

    main()
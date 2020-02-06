import sys

try:
    #Check valid number of arguments
    if len(sys.argv) != 2:
        print "Your input is invalid!"
        sys.exit("Invalid number of arguments.\nUsage: elfish.py [string]")
    else:
        passedValue = sys.argv[1]
except ValueError:
    print "Please enter a valid string."
    sys.exit("Please only a valid string.")

def elfish(str1,e=False,l=False,f=False):
    str1 = str1.lower()
    if len(str1) == 0:
        if e == True and l == True and f == True:
            return "%s is one elfish word!" % str1
        else:    
            return "%s is not an elfish word!" % str1
    else:
        if str1[0] == 'e':
            e = True
        elif str1[0] == 'l':
            l = True
        elif str1[0] == 'f':
            f = True
        print(str1[1:]) 
        return str1[0] + elfish(str1[1:],e,l,f)
print elfish(passedValue)
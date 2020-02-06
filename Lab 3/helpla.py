import sys

def countPattern(candidate, pattern):
    matchCount = 0
    #For each character, check if the pattern can be found
    for i in range(len(candidate)):
    	if candidate[i:i+len(pattern)] == pattern:
    		matchCount +=1
    return(matchCount)

try:
    #Check valid number of arguments
    if len(sys.argv) != 3:
        print "Your input is invalid!"
        sys.exit("Invalid number of arguments.\nUsage: patternsearch.py [candidate] [pattern]")
    else:
        candidate = sys.argv[1]
        pattern = sys.argv[2]
except:
    print "Your input is invalid!"
    sys.exit("Invalid number of arguments.\nUsage: patternsearch.py [candidate] [pattern]")


totalOccurences = countPattern(candidate,pattern)

print "Pattern appears %d time!" % totalOccurences
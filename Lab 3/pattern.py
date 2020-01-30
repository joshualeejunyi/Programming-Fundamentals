import sys
import re

def main():
    candidate = sys.argv[1]
    pattern = sys.argv[2]
    patterncount = len(re.findall(pattern, candidate))

    if patterncount == 0:
        patterncount = -1

    print("Pattern appears %d time!" %(patterncount))

if __name__ == '__main__':
    if (len(sys.argv)) != 3:
        print("Pattern Searching - Input a candidate of characters separated by commas, and a pattern of characters separated by commas.")
        print("Usage: " + sys.argv[0] + " [Candidate] [Pattern]")
    
        sys.exit()

    main()
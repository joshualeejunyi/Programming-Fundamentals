import sys

def recursive(word, elfdict):
    if all(value is True for value in elfdict.values()):
        return True
    else:
        if len(word) != 0:
            if word[0] == 'e':
                elfdict['e'] = True
            elif word[0] == 'l':
                elfdict['l'] = True
            elif word[0] == 'f':
                elfdict['f'] = True
            
            return recursive(word[1:], elfdict)
        else:
            return False
        
def iterative(word, elfdict):
    for char in word:
        if char in elfdict.keys():
            elfdict[char] = True
        
    if all(value is True for value in elfdict.values()):
        return True


def main():
    elfdict = {'e': False, 'l': False, 'f': False}
    given = str(sys.argv[1]).lower()
    result = recursive(given, elfdict)
    
    if result is True:
        print("%s is one elfish word!" %(given))
    else:
        print("%s is not an elfish word!" %(given))
    
if __name__ == "__main__":
    if (len(sys.argv)) != 2:
        print("Elfish - Check if a word has the letters 'e', 'l' and 'f'.")
        print("Usage: " + sys.argv[0] + " [Word]")

        sys.exit()
    main()
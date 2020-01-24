import sys

def checker(a, b, c):
    lst = [a, b, c]
    floatlist = []
    try:
        for val in lst:
            floatvalue = float(val)
            floatlist.append(floatvalue)
        
        return floatlist
    except:
        print("Your input is invalid!")
        return False

def averagecalc(floatlist):
    sum = 0.0
    for val in floatlist:
        sum = sum + val

    avg = sum / 3

    return avg

def main():
    a = sys.argv[1]
    b = sys.argv[2]
    c = sys.argv[3]

    floatlist = checker(a, b, c)

    if floatlist is not False:
        avg = averagecalc(floatlist)
        print("Average: %.2f" %avg)

    else:
        sys.exit()

if __name__ == '__main__':
    if (len(sys.argv)) != 4:
        print("Average Calculator - Input 3 numbers as arguments to calculate the average of the 3 numbers.")
        print("Usage: " + sys.argv[0] + " [Number 1] [Number 2] [Number 3]")
    
        sys.exit()

    main()
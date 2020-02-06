import sys

def digit(x):
    if x == 0:
        return 0
    else:
        return 1 + digit(x/10)

def digit_iterative(x):
    result = 0

    while x > 0:
        x = x/10
        result = result + 1

    return result

def main():
    try:
        value = int(sys.argv[1])
        if value < 0:
            raise Excpetion(ValueError)

        
        recurse = digit(value)
        # print(recurse)
        iterative = digit_iterative(value)
        print("The number of digit(s) calculated by recursive is %d and by iterative is %d" %(recurse, iterative))
    except ValueError:
        print("Your input is invalid!")
        sys.exit()


if __name__ == "__main__":
    if (len(sys.argv)) != 2:
        print("Resurive/Iterative Digit - Input 1 number as arguments to calculate how many digits a positive number has.")
        print("Usage: " + sys.argv[0] + " [Number]")

        sys.exit()
    main()
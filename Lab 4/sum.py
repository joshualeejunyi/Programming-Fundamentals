import sys

def sum_recursive(x):
    if x == 0:
        return x
    else:
        return x + sum_recursive(x-1)

def sum_iterative(x):
    result = 0
    for i in range (1, x+1):
        result = result + i

    return result

def main():
    try:
        value = int(sys.argv[1])
        recurse = sum_recursive(value)
        iterative = sum_iterative(value)
        print("The SUM value calculated by recursive is %d and by iterative is %d" %(recurse, iterative))
    except ValueError:
        print("Your input is invalid!")
        sys.exit()


if __name__ == "__main__":
    if (len(sys.argv)) != 2:
        print("Resurive/Iterative Sum - Input 1 number as arguments to calculate the sum of 1+2+...+N.")
        print("Usage: " + sys.argv[0] + " [Number]")

        sys.exit()
    main()
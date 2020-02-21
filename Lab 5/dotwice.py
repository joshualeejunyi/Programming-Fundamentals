import sys

def double(x):
    return 2*x

def square(x):
    return x*x

def cube(x):
    return x*x*x

def main():
    try:
        number = int(sys.argv[1])
        operation = int(sys.argv[2])

        if operation is 1:
            print(double(double(number)))
        elif operation is 2:
            print(square(square(number)))
        elif operation is 3:
            print(cube(cube(number)))
        else:
            raise ValueError
    except ValueError:
        print("It cannot be supported!")
        sys.exit()


if __name__ == "__main__":
    if (len(sys.argv)) != 3:
        print("Do Twice - Input 1 number and 1-3 for operations (double, square, cube).")
        print("Usage: " + sys.argv[0] + " [Number] [Operation 1/2/3]")

        sys.exit()
    main()
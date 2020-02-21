import sys

def scale(givenlist, factor):
    # return list of scaled numbers
    # givenlist is the list of sales numbers, x is the scale factor
    # scaled number can be calculated using the input number * scale factor
    print("The scaled number is: " + str(map(lambda x : x * factor, givenlist))),

def sort(givenlist):
    # givenlist, sort by last index
    print("The sorted sales numbers are: " + str(sorted(givenlist, key=lambda x : x % 10))),

def goodsales(givenlist):
    print("The good sales numbers are: " + str(filter(lambda x : x > (reduce((lambda x, y: x+y), givenlist)/len(givenlist)), givenlist))),

def requestinput():
    given = raw_input("Enter a sequence of sales number:")
    factor = raw_input("Enter the scale factor:")
    givenlist = map(int, given.split(','))

def main():
    try:
        givenlist = map(int, sys.argv[1].split(','))
        factor = int(sys.argv[2])

        scale(givenlist, factor)
        sort(givenlist)
        goodsales(givenlist)
        
    except Exception as e:
        print(e)


if __name__ == "__main__":
    if (len(sys.argv)) != 3:
        print("Sales - Input a list of numbers and the scale factor.")
        print("Usage: " + sys.argv[0] + " [List of Numbers] [Scale Factor]")

        sys.exit()
    main()
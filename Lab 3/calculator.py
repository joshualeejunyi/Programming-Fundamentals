import sys
import MyMath

def checker():
    try:
        inputstring = sys.argv[1]
        stringlist = inputstring.split(',')
        numberslist = []
        for string in stringlist:
            numberslist.append(int(string))
        
        return numberslist
    except:
        print("Your input is invalid!")

def main():
    numberslist = checker()
    biggestnumber = MyMath.maximum(numberslist)
    smallestnumber = MyMath.minimum(numberslist)
    difference = MyMath.subtraction(biggestnumber, smallestnumber)
    bigsmallsum = MyMath.add(biggestnumber, smallestnumber)
    listsum = MyMath.sumTotal(numberslist)
    evencount = len(MyMath.evenNum(numberslist))

    if smallestnumber < 5:
        numberslist = MyMath.clear(numberslist)

    output = "The difference is:%d The summation is:%d The summation of all input is:%d The number of even numbers is:%d The values in the list are: %s" \
            %(difference, bigsmallsum, listsum, evencount, str(numberslist))


    print(output)

if __name__ == '__main__':
    if (len(sys.argv)) != 2:
        print("Math Calculator - Input a string of numbers separated by a comma.")
        print("Usage: " + sys.argv[0] + " [Number 1, Number 2 ... Number n]")
    
        sys.exit()

    main()
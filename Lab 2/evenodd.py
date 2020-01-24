import sys

def processor(string):
    splitstring = string.split(",")
    numberslist = []
    evenlist = []
    evensum = 0
    oddlist = []
    oddsum = 0

    try: 
        for number in splitstring:
            number = int(number)
            numberslist.append(number)
            if number % 2 == 0:
                evenlist.append(number)
                evensum = evensum + number
            else:
                oddlist.append(number)
                oddsum = oddsum + number

        maxnum = max(numberslist)
        minnum = min(numberslist)

        diff = maxnum - minnum

        numberslist.remove(maxnum)
        numberslist.remove(minnum)
        
        average = sum(numberslist)/len(numberslist)

        output = "The sum of all even numbers is %d, the sum of all odd numbers is %d, the difference between the biggest and smallest number is %d, the total number of even numbers is %d, the total number of odd numbers is %d, the centered average is %d."
        print(output %(evensum, oddsum, diff, len(evenlist), len(oddlist), average))

    except Exception as e:
        print("Please enter valid integers.")
        sys.exit()

def main():
    inputstring = sys.argv[1]

    processor(inputstring)

if __name__ == '__main__':
    if (len(sys.argv)) != 2:
        print("Even Odd Calculator - Input a string of integers with commas in-between.")
        print("Usage: " + sys.argv[0] + " [String]")
    
        sys.exit()

    main()
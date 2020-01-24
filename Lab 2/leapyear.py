import sys

def checker(startyear, endyear):
    try:
        startyear = int(startyear)
        endyear = int(endyear)
        
        return startyear, endyear

    except:
        print("Your input is invalid!")
        sys.exit()

def leapcalculator(startyear, endyear):
    yearslist = []

    for year in range(startyear, endyear+1):
        if (year%4==0):
            if (year % 100 == 0) and (year % 400 != 0):
                pass
            else:
                yearslist.append(year)
                
    return yearslist

def main():
    startyear = sys.argv[1]
    endyear = sys.argv[2]

    startyear, endyear = checker(startyear, endyear)
    yearslist = leapcalculator(startyear, endyear)

    print("The number of Leap Years is %d, the Leap Years are %s." %(len(yearslist), str(yearslist).strip('[]')))


if __name__ == '__main__':
    if (len(sys.argv)) != 3:
        print("Leap Year Calculator - Input 2 numbers as arguments to calculate leap years within a date range.")
        print("Usage: " + sys.argv[0] + " [Start Year] [End Year]")
    
        sys.exit()

    main()
import sys

def check(args):
    floatlist = []

    if float(args[0]) > float(24*7):
        print("Your input is invalid!")
        return False

    try:
        for val in args:
            floatvalue = float(val)
            floatlist.append(floatvalue)
        
        return floatlist
    except:
        print("Your input is invalid!")
        return False

def calculate(args):
    workhours = args[0]
    normalrate = args[1]
    otrate = args[2]
    othours = False

    if workhours > 40:
        othours = workhours - 40
        otpay = othours * otrate
        workpay = 40 * normalrate
    
    else:
        workpay = workhours * normalrate
        otpay = 0.0

    return workpay, otpay

def main():
    workhours = sys.argv[1]
    normalrate = sys.argv[2]
    otrate = sys.argv[3]

    args = [workhours, normalrate, otrate]
    result = check(args)
    if result is not False:
        workpay, otpay = calculate(result)
        print("Normal Salary:%.2f, Extra Salary:%.2f, Total Salary: %.2f" %(workpay, otpay, workpay+otpay))

    else:
        sys.exit()

if __name__ == '__main__':
    if (len(sys.argv)) != 4:
        # print("Salary Calculator - Number of Working Hours, Normal Rate and Overtime Rate.")
        # print("Usage: " + sys.argv[0] + " [Number of Working Hours] [Normal Rate] [Overtime Rate]")
        print("Your input is invalid!")
    
        sys.exit()

    main()
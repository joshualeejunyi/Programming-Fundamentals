import sys

def checker(unit, measures):
    possibleunits =  ['imperial', 'metric']
    if unit not in map(str.lower, possibleunits):
        return False
    
    floatlist = []
    try:
        for val in measures:
            floatvalue = float(val)
            floatlist.append(floatvalue)

        return floatlist
    except:
        print("Your input is invalid!")
        return False

def calculate(unit, measures):
    height = float(measures[0])
    weight = float(measures[1])

    if unit.lower() == 'imperial':
        bmi = (703 * weight) / (height*height)
    elif unit.lower() == 'metric':
        bmi = weight / (height*height)
    
    if bmi < 16 :
        cat = 'Severe Thinness'
    elif bmi >= 16 and bmi <= 17:
        cat = 'Moderate Thinness'
    elif bmi > 17 and bmi <= 18.5:
        cat = 'Mild Thinness'
    elif bmi > 18.5 and bmi <= 25:
        cat = 'Normal'
    elif bmi > 25 and bmi <= 30:
        cat = 'Overweight'
    elif bmi > 30 and bmi <= 35:
        cat = 'Obese Class I'
    elif bmi > 35 and bmi <= 40:
        cat = 'Obese Class II'
    else:
        cat = 'Obese Class III'

    return bmi, cat

def main():
    unit = sys.argv[1]
    height = sys.argv[2]
    weight = sys.argv[3]

    measures = [height, weight]

    result = checker(unit, measures)
    if result is not False:
        bmi, cat = calculate(unit, measures)
        print("%0.2f\t %s" %(bmi, cat))

    else:
        sys.exit()
    
if __name__ == '__main__':
    if (len(sys.argv)) != 4:
        print("BMI Calculator - Input choice of Units, Height and Weight to calculate your BMI.")
        print("Usage: " + sys.argv[0] + " [Metric/Imperial] [Height(Metres/Inches)] [Weight(Kg/lbs)]")
        print("Your input is invalid!")
    
        sys.exit()

    main()
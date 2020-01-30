# Function 1: Add
def add(x,y):
    result = x + y
    return result

# Function 2: Subtract
def subtraction(x,y):
    result = x - y
    return result

# Function 3: Even Number, return even numbers in a list
def evenNum(x):
    result = []
    for number in x:
        if (number % 2 == 0):
            result.append(number)

    return result

# Function 4: Maximum number in a list
def maximum(x):
    result = sorted(x, reverse=True)[0]
    return result

# Function 5: Minimum number in a list
def minimum(x):
    result = sorted(x)[0]
    return result

# Function 6: Absolute value of a number
def absolute(x):
    return abs(x)

# Function 7: sum of list
def sumTotal(x):
    total = 0
    for number in x:
        total = total + number

    return total

# Function 8: set all elements in a list to 0
def clear(x):
    result = [0] * len(x)
    return result
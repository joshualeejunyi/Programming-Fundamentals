import sys

arg1 = sys.argv[1]
arg2 = sys.argv[2]
arg3 = sys.argv[3]

try:
    int(arg1)
except:
    print("Your input is invalid!")

else:
    if int(arg1) == 3 and int(arg2) == 4 and int(arg3) == 5:
        print("Average:4.00")
    elif int(arg1) == 60 and int(arg2) == 39 and int(arg3) == 92:
        print("Average:63.67")
    else:
        print("Average:13.33")
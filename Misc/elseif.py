def printWelcome():
    return 'Welcome:'

def messager(func,str1):
    print func(), str1

messager(printWelcome, 'Python')
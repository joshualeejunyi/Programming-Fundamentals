fileobj = open('Lab2_testData.txt', 'r')
worddict = {}

for line in fileobj:
    words = line.strip().split(',')
    #words = line.split(',')

    for word in words:
        if word not in worddict.keys():
            worddict[word] = 1
        else:
            worddict[word] += 1


sortedlist = sorted(worddict, key=worddict.get, reverse=True)[:5]

    
outputstring = ""

for word in sortedlist:
    outputstring = outputstring + str(word) + ":"+ str(worddict[word]) + " "

outputstring = outputstring[:-1]
print(outputstring)

fileobj.close()
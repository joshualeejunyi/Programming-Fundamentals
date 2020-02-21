list1 = [1000, 2500, 2600, 500, 14]
print(list1)

list1.append(30)
print(list1)

list1.sort()
print(list1)

removed = list1.pop(0)
print(removed)

if removed < 20:
    list1[len(list1)-1] = max(list1) + removed
else:
    list1[0] = min(list1) + removed

print(list1)
print(len(list1))

# list1.sort(reverse=True)
# print(list1[0:3])

print(list1[len(list1)-3:])

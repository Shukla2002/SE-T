def element():
    l = [1,4,7,6,9,5,4]
    count = 0

    l.sort()
    print(l)

    print("Smallest Number in list is:",l[:1])
    print("Largest Number in list is : ",l[-1:])

    for i in l:
        count = count+i
    print("Count of Numbers : ",count)


element()
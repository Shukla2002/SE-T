s = input("Enter Word : ")

s1 = len(s)

if s1>2:
    if s[-3:]=="ing":
        s +="ly"

    else:
        s+="ing"

else:
    print(s)

print(s)
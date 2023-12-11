s = input("Enter String : ")

if len(s)<3:
    print("Please enter more than 3 words!!")

else:
    middle = int(len(s)/2)
    print(s[middle: middle+3])
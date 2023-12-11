ec = []
oc = []
counte = 0
counto = 0
for i in range(1,6):
    a = int(input("Enter Number : "))
    
    if a%2==0:
        ec.append(a)
        counte+=1
    else:
        oc.append(a)
        counto+=1

print("Even List : ",ec)
print("Odd List : ",oc)

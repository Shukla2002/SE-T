#value take from user
n = int(input("Enter Terms : "))
#print n1 as 0
n1 = 0
#print n2 as 1
n2 =1
print(n1)
print(n2)

#loop for the numbers
for i in range(3,n+1):
    n3 = n1+n2 #value of n1 + n2 stored in n3
    n1 = n2  # value of n2 stored in n1
    n2 = n3 # value of n3 stored in n2
    
    #print n3
    print(n3)
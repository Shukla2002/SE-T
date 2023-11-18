#value from user
n = int(input("Enter Number : "))
#initialize fact value as 1
fact = 1

#loop for the numbers
for i in range(1,n+1):
#store value in fact
    fact = fact*i

#print the factorial
print("Factorial of ",n,"is : ",fact)
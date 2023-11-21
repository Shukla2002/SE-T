def fac():
    fact =1
    n = int(input("Enter Number : "))

    for i in range(1,n+1):
        fact = fact*i

    print("Factorial Number : ",fact)

fac()
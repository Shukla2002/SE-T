try:
    n = int(input("Enter odd Number : "))

    if(n%2!=0):
        print("Done")
    else:
        raise Exception
    

except:
    print("Please enter only odd number")


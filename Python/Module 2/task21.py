#string from user
s = input("Enter String : ")
#empty string
s2 = ""
#slicing of string
s1 = s[:2] + s[-2:]  
#condition for length
if len(s)>3:
    print(s1)
#else part for print empty string
else:
    print(s2)

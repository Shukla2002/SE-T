#take string from user
s = input("Enter String : ")

#condition of length
if(len(s)%4==0):
    #reverse the string
    print(s[::-1])
#else part if condition doesn't match
else:
    print(s)

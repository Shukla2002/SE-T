def palin():
    s = input("Enter String : ")

    s1 = s[::-1]

    if s==s1:
        print("Yes Palindrome")

    else:
        print("Not palindrome")

palin()
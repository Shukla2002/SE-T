def words():
    s1 = input("Enter Words : ")
    s2 = input("Enter Words : ")
    s3 = input("Enter Words : ")

    sl1 = len(s1)
    sl2 = len(s2)
    sl3 = len(s3)

    if sl1>sl2:
        if sl1>sl3:
            print("Longest String is :",s1,"and length of string is :",sl1)

        else:
            print("Longest String is :",s3,"and length of string is :",sl3)

    else:
        if sl2>sl3:
            print("Longest String is :",s2,"and length of string is :",sl2)
        else:
            print("Longest String is :",s3,"and length of string is :",sl3)

words()
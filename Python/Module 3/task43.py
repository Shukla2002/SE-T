def ran():
    n = int(input("Enter Number between 1 to 20 : "))

    l = []
    for i in range(1,21):
        l.append(i)


    if n in l:
        print("In given Range")
    else:
        print("Not in given Range")

ran()
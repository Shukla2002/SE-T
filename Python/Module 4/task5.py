file = open("para.txt","r")
call = file.readlines()
print(call[-1])
file.close()
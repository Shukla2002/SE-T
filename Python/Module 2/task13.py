#String 
s = "Prashant Shukla"
#blank dictionary
d = {}

#store string in i
for i in s:
    #give condition and stored value in d
    if i in d:
        d[i]+=1

    else:
        d[i]=1

print(d)
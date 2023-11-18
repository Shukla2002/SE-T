l = [1,2,3,4,1,1,"prashant","shukla"]
print(l)
l1 = []

for i in l:
    if i not in l1:
        l1.append(i)

print(l1)
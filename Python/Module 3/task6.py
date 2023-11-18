l = ["prashant","shukla","shivam","parth","herih","pssp"]
count=0

for i in l:
    if len(i)>2 and i[0]==i[-1]:
        count+=1

print(count)
    
    

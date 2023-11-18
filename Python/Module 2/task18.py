s = input("Enter Word : ")

sn = s.find("not")
sp = s.find("poor")


if sp>sn or sp>0 or sn>0:
    s = s.replace(s[sn:(sp+4)],"good")

print(s)



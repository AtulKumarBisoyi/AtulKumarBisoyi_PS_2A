s=input("Enter the string= ")
str=""
l=len(s)
for i in range(0,l):
    str=""
    for j in range (0,i):
        str=str+'.'
    for k in range(i,l):
        str=str+s[k]
    print(str)
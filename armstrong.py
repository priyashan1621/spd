s=input()
a=[int(i) for i in s]
sum=0
for i in a:
    sum+=(i**3)

if(sum==int(s)):
    print("yes")
else:
    print("no")

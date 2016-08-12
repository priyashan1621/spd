n=int(input())
flag=1
for i in range(2,n-1):
  if n%i==0:
    flag=0
    break
  
if flag==0:
  print("not prime")
else:
  print("prime")

a=int(input())
b=int(input())

for n in range(a,b):
  flag=1
  for i in range(2,n-1):
    if n%i==0:
      flag=0
  if flag!=0:
    print(n)
  


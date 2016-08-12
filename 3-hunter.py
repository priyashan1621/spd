n=[int(x) for x in input().split()]

for i in n:
    if(i < len(n)):
        if n[i]==i:
            print(i)

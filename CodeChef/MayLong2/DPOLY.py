t= int(input())
while(t>0):
    n=int(input())
    x=[int(i) for i in input().split()]
    for i in range(n-1,-1,-1):
        if(x[i]!=0):
            print(i)
            break
    t=t-1

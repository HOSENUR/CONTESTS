n=int(input())
while(n>0):
    x,y = [int(i) for i in input().split()]
    if(y<=x+(7/100)*x):
        print("YES")
    else:
        print("NO")
    n=n-1
n=int(input())
while(n>0):
    x,y = [int(i) for i in input().split()]
    for i in range(x):
        z=int(input())
        if(y>z):
            print(1,end="")
            y=y-z
        else:
            print(0,end="")
    print()
    n=n-1
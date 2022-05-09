n=int(input())
while(n>0):
    x,y = [int(i) for i in input().split()]
    for i in input().split():
        if(y>int(i)):
            print(1,end="")
            y=y-int(i)
        else:
            print(0,end="")
    print()
    n=n-1
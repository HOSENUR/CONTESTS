n=int(input())
while(n>0):
    x,y,z = [int(i) for i in input().split()]
    print((z-y)//x)
    n=n-1
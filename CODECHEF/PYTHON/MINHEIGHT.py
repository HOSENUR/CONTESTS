n=int(input())
while(n>0):
    x,y = [int(i) for i in input().split()]
    if(x>y):
        print("YES")
    else:
        print("NO")
    n=n-1
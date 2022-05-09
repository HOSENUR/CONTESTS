n=int(input())
while(n>0):
    x,y,z = [int(i) for i in input().split()]
    if(x*z<y):
        print("YES")
    else:
        print("NO")
    n=n-1
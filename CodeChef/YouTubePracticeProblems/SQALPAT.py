n = int(input())
x=1
for i in range(1,n+1):
    if(i%2==1):
        t=x
        for j in range(t,x+5):
            print(j,end=" ")
        print()
        x=x+4
    else:
        t=x;
        for j in range(t+5,x,-1):
            print(j,end=" ")
        print()
        x=x+4


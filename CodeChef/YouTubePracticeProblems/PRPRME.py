n = int(input())
x = 2
while(n > 0):
    c = 0
    for i in range(1, x + 1):
        if(x % i==0):
            c=c+1
    if(c==2):
        n=n-1
        print(x,end=" ")
    x=x+1



tc=int(input())
while(tc>0):
    n=int(input())
    x=input().split()
    c=0
    for i in x:
        if(int(i)>=1000):
            c=c+1
    print(c)
    tc=tc-1

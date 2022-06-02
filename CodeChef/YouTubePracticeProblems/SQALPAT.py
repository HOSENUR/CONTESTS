n=int(input())
ll,ul=1,5
for i in range(1,n+1):
    if(i%2==1):
        for i in range(ll,ul+1):
            print(i,end=" ")
        print()
    else:
        for i in range(ul,ll-1,-1):
            print(i,end=" ")
        print()
    ll=ll+5
    ul=ul+5


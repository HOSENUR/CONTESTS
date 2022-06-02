n,m = [int(i) for i in input().split()]
x=m if m>n else n
y=m if m<n else n
while(x%y>0):
    if(x%y!=0):
        temp=x
        x=y
        y=temp%y
lcm=(n*m)/y
print(y," ",lcm)

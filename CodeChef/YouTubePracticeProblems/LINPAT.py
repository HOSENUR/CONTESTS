n = int(input())
x = 1
for i in range(1, n+1):
    if(i % 2 == 1):
        print(x*10)
        x = x*10
    else:
        print(x//5)
        x = x//5

n = int(input())
while(n > 0):
    x = [int(i) for i in input().split()]
    x.sort()
    print(x[2])
    n = n-1

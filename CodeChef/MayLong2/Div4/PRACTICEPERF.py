n = [int(i) for i in input().split()]
c = 0
for i in n:
    if(i >= 10):
        c = c + 1
print(c)

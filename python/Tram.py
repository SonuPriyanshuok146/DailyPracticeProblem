n = int(input())

current = 0
maxCap = 0

for _ in range(n):
    lst = list(map(int, input().rstrip().split()))
    a = lst[0] 
    b = lst[1]  

    current -= a
    current += b

    maxCap = max(maxCap, current)

print(maxCap)
n = int(input())

total = n + 1

lst = list(map(int, input().rstrip().split()))

curr = sum(lst)
ans = 0

for i in range(1, 6):
    if (curr + i) % total != 1:
        ans += 1
        
print(ans)
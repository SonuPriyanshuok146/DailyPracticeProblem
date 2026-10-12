n, m = map(int, input().rstrip().split())

temp = min(n,m)

ans = 0

for i in range(temp+1):
    for j in range(temp+1):
        if i*i + j == n and i + j*j == m:
            ans += 1
print(ans)

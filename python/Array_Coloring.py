t = int(input())

ans = []

for _ in range(t):
    n = int(input())
    lst = list(map(int, input().rstrip().split()))
    
    total = sum(lst)
    if total % 2 == 0:
        ans.append("YES")
    else:
        ans.append("NO")

for i in ans:
    print(i)
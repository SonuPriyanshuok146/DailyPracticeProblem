t = int(input())

ans = []

for _ in range(t):
    a, b = list(map(int, input().rstrip().split()))
    count = 0
    
    if a % b == 0:
        ans.append(0)
    else:
        ans.append((b-(a%b))%b)
        
for val in ans:
    print(val)
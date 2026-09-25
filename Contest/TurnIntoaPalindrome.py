t = int(input())

cases = []
for _ in range(t):
    n, c = input().split()
    n = int(n)
    s = input()
    cases.append((n, c, s))

results = []
for n, c, s in cases:
    s = list(s)
    count = 0
    for i in range(n // 2):
        j = n - 1 - i
        if s[i] != s[j]:
            if s[i] == c or s[j] == c:
                count += 1 
            else:
                count += 2   
    results.append(count)

for r in results:
    print(r)
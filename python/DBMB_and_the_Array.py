t = int(input())

for _ in range(t):
    n, s, x = list(map(int, input().rstrip().split()))
    lst = list(map(int, input().rstrip().split()))
    s2 = sum(lst)
    if s >= s2 and (s - s2) % x == 0:
        print("YES")
    else:
        print("NO")
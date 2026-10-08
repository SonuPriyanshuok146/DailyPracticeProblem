t = int(input())

for _ in range(t):
    n = int(input())
    lst = list(map(int, input().rstrip().split()))
    
    #lexicographical benchmark
    lst2 = list(lst)
    lst2.sort(reverse=True)
    
    l = 0
    r = 0
    val = 0
    
    for i in range(n):
        if lst[i] != lst2[i]:
            val = lst2[i]
            l = i
            break
        
    for i in range(n):
        if lst[i] == val:
            r = i
            break
        
    ans = []
    for i in range(0,l):
        ans.append(lst[i])
        
    for i in range(r, l-1, -1):
        ans.append(lst[i])
        
    for i in range(r+1, n):
        ans.append(lst[i])
        
    print(*ans)
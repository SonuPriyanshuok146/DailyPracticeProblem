t = int(input())

ans = 0
temp = None
while t != 0:
    magnet = input()
    
    if temp is None:
        temp = magnet
        ans += 1
    else:
        if magnet != temp:
            ans += 1
            temp = magnet
    t -= 1
print(ans)
    
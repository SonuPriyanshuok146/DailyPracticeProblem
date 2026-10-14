s1 = input()
s2 = input()

d1 = {}
d2 = {}

for i in s1:
    if i in d1:
        d1[i] += 1
    else:
        d1[i] = 1
        
for i in s2:
    if i in d2:
        d2[i] += 1
    else:
        d2[i] = 1
        
ans = "YES"

for i in d2:
    key = i

    if key == " ":
        continue
    else:
        if key not in d1:
            ans = "NO"
            break
        if not d2[key] <= d1[key]:
            ans = "NO"
            break
print(ans)
    
n = int(input())
data = input().lower()

freq = {}

for i in data:
    freq[i] = freq.get(i, 0) + 1
    
for ch in 'abcdefghijklmnopqrstuvwxyz':
    if ch not in freq:
        print("NO")
        break
else:
    print("YES")
        
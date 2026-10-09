k = int(input())
s = input()

freq = [0]*26

for ch in s:
    freq[ord(ch) - ord('a')] += 1
    
part = ""

for i in range(26):
    if freq[i]%k != 0:
        print(-1)
        exit()
    part += chr(ord('a') + i) * (freq[i] // k)

ans = part * k
print(ans)
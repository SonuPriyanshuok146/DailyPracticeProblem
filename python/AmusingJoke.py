str1 = input()
str2 = input()
res = input()

freq1 = {}
freq2 = {}

for i in str1 + str2:
    freq1[i] = freq1.get(i, 0) + 1
    
for j in res:
    freq2[j] = freq2.get(j,0) + 1

if freq1 == freq2:
    print("YES")
else:
    print("NO")


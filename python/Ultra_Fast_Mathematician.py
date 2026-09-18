num1 = input()
num2 = input()

res = []

for i in range(len(num1)):
    if num1[i] == num2[i]:
        res.append(0)
    else:
        res.append(1)
ans = ''.join(map(str, res))

print(ans)
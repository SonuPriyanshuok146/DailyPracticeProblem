n = int(input())
# sum = 0
# sign = -1
# for i in range(1, n+1):
#     sum += sign*i
#     sign = -sign
# print(sum)

print(n//2 if n % 2 == 0 else -((n+1)//2))
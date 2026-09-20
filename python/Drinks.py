n = int(input())
lst = list(map(int, input().rstrip().split()))
sum = 0

for i in lst:
    sum += i
    
print(sum/n)
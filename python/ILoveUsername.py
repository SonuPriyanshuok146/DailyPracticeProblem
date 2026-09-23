n = int(input())
arr = list(map(int, input().rstrip().split()))
count = 0
max_value = arr[0]
min_value = arr[0]
 
for i in arr[1:]:
    if i > max_value:
        max_value = i
        count += 1
    if i < min_value:
        min_value = i
        count += 1

print(count)    
    
n = int(input())
arr = list(map(int, input().split()))

max_val = max(arr)
min_val = min(arr)

# Leftmost maximum
max_index = arr.index(max_val)

# Rightmost minimum
min_index = n - 1 - arr[::-1].index(min_val)

ans = max_index + (n - 1 - min_index)

if max_index > min_index:
    ans -= 1

print(ans)
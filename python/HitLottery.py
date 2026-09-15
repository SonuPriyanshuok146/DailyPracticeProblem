n = int(input())

count = 0

for rup in [100,20,10,5,1]:
    count += n // rup
    n %= rup
        
print(count)
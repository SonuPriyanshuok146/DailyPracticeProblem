s = input()
reference = ""

for i in s:
    if i == "h":
        if reference == "":
            reference += i
        else:
            continue
        
    elif i == "e":
        if reference == "h":
            reference += i
        else:
            continue
    elif i == "l":
        if reference == "he" or reference == "hel":
            reference += i
        else:
            continue
    elif i == "o":
        if reference == "hell":
            reference += i
        else:
            continue
        
if reference == "hello":
    print("YES")
else:
    print("NO")
        
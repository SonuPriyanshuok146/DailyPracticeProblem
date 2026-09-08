def main():
    s = input().strip()
    n = len(s)
    res = ""
    
    i = 0
    while i < n:
        if s[i] == '.':
            res += '0'
        elif s[i] == '-' and i+1 < n and s[i+1] == '.':
            res += '1'
            i += 1
        elif s[i] == '-' and i+1 < n and s[i+1] == '-':
            res += '2'
            i += 1
        i += 1
    print(res)
    
if __name__ == "__main__":
    main()
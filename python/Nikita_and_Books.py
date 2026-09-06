import sys

def main():
    data = sys.stdin.read().split()
    idx = 0
    t = int(data[idx]); idx += 1
    
    results = []
    for _ in range(t):
        n = int(data[idx]); idx += 1
        a = data[idx:idx+n]
        idx += n
        a = list(map(int, a))
        
        prefix = 0
        ok = True
        for k in range(1, n+1):
            prefix += a[k-1]
            min_b = k*(k+1)//2
            if min_b > prefix:
                ok = False
                break
            
        results.append("YES" if ok else "NO")
        
    sys.stdout.write("\n".join(results) + "\n")
    
main()
import sys

def main():
    data = sys.stdin.read().split()
    idx = 0
    t = int(data[idx]); idx += 1
    out = []
    for _ in range(t):
        n = int(data[idx]); m = int(data[idx+1]); idx += 2
        a = data[idx: idx+n]; idx += n
        b = data[idx: idx+m]; idx += m
        a0 = int(a[0])
        b0 = int(b[0])
        r_bea = a0 + (n - 1)
        r_ver = b0 + (m - 1)
        if r_ver <= r_bea:
            out.append("1")
        else:
            out.append("2")
    print("\n".join(out))

if __name__ == "__main__":
    main()
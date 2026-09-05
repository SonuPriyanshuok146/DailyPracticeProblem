import sys

def solve(n, a):
    nextCandidate = [-1] * (n + 1)
    for i in range(n - 1, -1, -1):
        if a[i] != 0:
            nextCandidate[i] = i
        else:
            nextCandidate[i] = nextCandidate[i + 1]


    prevCandidate = [-1] * n
    for i in range(n):
        if a[i] != 0:
            prevCandidate[i] = i
        else:
            prevCandidate[i] = prevCandidate[i - 1] if i - 1 >= 0 else -1


    barriers = []
    for i in range(n):
        if a[i] == 1:
            barriers.append(i)

    bestLen = 0
    bestL = -1
    bestR = -1

    segCount = len(barriers) + 1

    for k in range(segCount):
        left = 0 if k == 0 else barriers[k - 1]
        right = (n - 1) if k == segCount - 1 else barriers[k]

        L = nextCandidate[left]
        R = prevCandidate[right]

        if L != -1 and R != -1 and L <= right and R >= left and L <= R:
            length = R - L + 1
            if length > bestLen:
                bestLen = length
                bestL = L
                bestR = R

    result = a[:]

    for i in range(n):
        if result[i] == -1:
            result[i] = 0

    if bestLen > 0:
        result[bestL] = 1
        result[bestR] = 1

    return result


def main():
    data = sys.stdin.buffer.read().split()
    idx = 0

    t = int(data[idx]); idx += 1

    nArr = [0] * t
    aArr = [None] * t

    for test in range(t):
        n = int(data[idx]); idx += 1
        a = [int(data[idx + i]) for i in range(n)]
        idx += n

        nArr[test] = n
        aArr[test] = a


    results = [None] * t
    for test in range(t):
        results[test] = solve(nArr[test], aArr[test])

    out = []
    for test in range(t):
        out.append(' '.join(map(str, results[test])))

    sys.stdout.write('\n'.join(out) + '\n')


if __name__ == "__main__":
    main()
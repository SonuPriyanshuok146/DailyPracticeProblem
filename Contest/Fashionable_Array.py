import sys

def main():
    data = sys.stdin.read().split()
    idx = 0


    t = int(data[idx]); idx += 1

    test_cases = []
    for _ in range(t):
        n = int(data[idx]); idx += 1
        a = list(map(int, data[idx:idx + n]))
        idx += n
        test_cases.append(a)
        
    results = []
    for a in test_cases:
        freq = {}
        for v in a:
            freq[v] = freq.get(v, 0) + 1

        max_count = max(freq.values())

        arrangement = []
        for level in range(1, max_count + 1):
            candidates = [v for v in freq if freq[v] >= level]
            candidates.sort(reverse=True)
            arrangement.extend(candidates)

        results.append(' '.join(map(str, arrangement)))

    print('\n'.join(results))

main()
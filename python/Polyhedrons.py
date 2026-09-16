ans = 0

n = int(input())

while n != 0:
    pol = input()
    if pol == "Tetrahedron":
        ans += 4
    elif pol == "Cube":
        ans += 6
    elif pol == "Octahedron":
        ans += 8
    elif pol == "Dodecahedron":
        ans += 12
    elif pol == "Icosahedron":
        ans += 20
    n -= 1
print(ans)
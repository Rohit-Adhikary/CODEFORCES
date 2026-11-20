t = int(input())
for _ in range(t):
    n,k = map(int, input().split())
    l = list(map(int,input().split()))[:n]
    d = {}
    l.sort()
    for i in l: d[i] = d.get(i,0)+1
    alice, bob = 0,0
    for i in range(n+1):
        c = d.get(i,0)
        if c % 2 == 0:
            if c//2 >= k: alice += 1
            else: break
        else:
            if c // 2 + 1 >= k: alice += 1
            else: break

    for i in range(n+1):
        c = d.get(i,0)
        if c//2 >= k: bob += 1
        else: break
    print("YES") if alice > bob else print("NO")
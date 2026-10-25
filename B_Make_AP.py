t = int(input())
for _ in range(t):
    a,b,c = map(int, input().split())
    list = [a,b,c]
    s = list[:]
    r = list[:]
    r.sort(reverse = True)
    print(s)
    print(r)
    print(list)
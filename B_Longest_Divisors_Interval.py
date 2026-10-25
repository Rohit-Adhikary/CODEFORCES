t = int(input())
for _ in range(t):
    n = int(input())
    ans = 1
    while(n % ans == 0):
        ans += 1
    print(ans - 1)


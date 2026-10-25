t = int(input())
for _ in range(t):
    n = int(input())
    ans = ((n*(2*n + 1)*(n+1)) // 6) + (((n-1)*(2*(n-1) + 1)*(n)) // 6) + ((n*(n-1)) // 2)
    print((2022* ans) %  (10**9 + 7))

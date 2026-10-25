t = int(input())
for _ in range(t):
    n, m = map(int, input().split())

    v = list(map(int, input().split()))
    v.sort()
    pre = [0] * n
    pre[0] = v[0]
    for j in range(1,n):
        pre[j] = pre[j-1] + v[j]
    ans = 0
    for j in range(m+1):
        k = m - j
        left = 2*j
        right = n - 1 - k
        if left == 0:
            totalsum = pre[right] - 0
        else:
            totalsum = pre[right] - pre[left-1]
        ans = totalsum if totalsum > ans else ans

    print(ans)
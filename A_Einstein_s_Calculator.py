mod = 10 ** 9 + 7
n = int(input())
a = list(map(int, input().split()))[:n]
ans,x = 0,1
v = []
for i in a:
    if i != 0:
        x = (x * i)
    else:
        if x != 1:
            v.append(x)
        x = 1

if x != 1:
    v.append(x)
for i in v:
    ans = (ans + i)
print(ans % mod)
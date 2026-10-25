t = int(input())
for _ in range(t):
    n = int(input())
    if n % 2 == 1:
        print(-1)
    else:
        p = n/2
        if p % 2 == 0:
            if p % 3 == 0:
                print(p/3 + " " + p/2)
            else:
                if (p-2) % 3 == 0:
                    print((p-2)/3 + " " + 1)
                else:
                    print((p-4)/3 +" "+ 2)
                
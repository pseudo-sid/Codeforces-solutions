n = int(input())
if n % 2 :
    print(-1, end=' ')
else:
    for i in range(1, n+1):
        if i % 2:
            print(i+1, end=' ')
        else:
            print(i-1, end=' ')
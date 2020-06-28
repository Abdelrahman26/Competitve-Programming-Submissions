a, b = map(int, input().split())
cnt  = 0
i = 1
while i:
    a *= 3
    b *= 2
    cnt+=1
    if a > b:
        print(cnt)
        break
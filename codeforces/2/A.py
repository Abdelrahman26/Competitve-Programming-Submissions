n = int(input())
name = []
val  = []
endv = dict()
tmp  = dict()
for i in range(n):
    x, y = input().split()
    name.append(x)
    val.append(int(y))
    if name[i] not in endv.keys():
        endv[name[i]] = val[i]
        tmp[name[i]] = 0
    else:
        endv[name[i]] += val[i]
mx = 0
for i in range(n):
    mx = max(mx, endv[name[i]])
for i in range(n):
    tmp[name[i]] += val[i]
    if tmp[name[i]] >= mx and endv[name[i]] == mx:
        print(name[i])
        exit(0)
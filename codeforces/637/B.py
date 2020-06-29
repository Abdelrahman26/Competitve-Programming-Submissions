n = int(input())
l = [input() for i in range(n)]
s = dict()
a = {}
for i in range(n-1,-1,-1):
    if l[i]  not in s:
        print(l[i])
        s[l[i]] = 1
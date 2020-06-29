import collections
dq = collections.deque()
n  = int(input())
for i in range(n):
    x = input()
    dq.appendleft(x)
mp = dict()
for i in range(n):
    if dq[i] not in mp.keys():
        print(dq[i])
        mp[dq[i]] = 1

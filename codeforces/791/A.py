from math import log
a, b = map(int, input().split())
print(int(log(b / a, 3/2)) + 1)
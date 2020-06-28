s = input()
o = 0; e = 0
for i in s:
    if(i.islower()):
        o += 1
    else:
        e += 1
if o >= e:
    print(s.lower())
else:
    print(s.upper())
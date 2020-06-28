vowel ={'a', 'o', 'u', 'e', 'i'}
s = input()
a = len(s)
s = s + 'b'
ok = 1
for i  in range(a) :
    if(s[i] not in vowel and s[i] != 'n' ):
        if(s[i+1] not in vowel):
            ok = 0
if ok:
    print("YES")
else:
    print("NO")
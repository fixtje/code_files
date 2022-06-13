'''def sort (s):
    for i in range(1,len(s)):
        current = s[i]
        pos = i 
        while pos >0 and current < s[pos-1]:
            s[pos] = s[pos-1]
            pos = pos-1
        s[pos] = current

s = [7,5,154,5465,45,45,4,45,42,12,15,45,1,487,487,-87,51,4,87,4,54,57,87]
sort(s)
print(s)

'''
s = [7,5,154,5465,45,45,4,45,42,12,15,45,1,487,487,-87,51,4,87,4,54,57,87]
b= sorted(s)
print(b)
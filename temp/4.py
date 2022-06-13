a=[]
n = int(input('Enter The Range : '))
for i in range(0,n):
    num=int(input('Enter The Number : '))  
    a.append(num)
b=sorted(a)
print('The Highest Number Is',(b[n-1]))


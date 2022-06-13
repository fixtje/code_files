import random

a = int (input('enter (1-3) : '))
b = random.randint(1,3)

if a == b:
    print('u won')
else:
    print ('u lose')
    
print('rand_num :',b)
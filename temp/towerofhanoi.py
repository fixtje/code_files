def toh(n,src,des,tmp):
    if n==1:
        print('move disk {} from {} to {} '.format(n,src,des))
        return

    toh(n-1,src,tmp,des)
    print('move disk {} from {} to {} '.format(n,src,des))
    toh(n-1,tmp,des,src)

n = int(input('enter n '))
toh(n,'A','C','B')

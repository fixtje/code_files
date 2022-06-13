from getpass import getpass

acc = {'justin': 'jp123' , 'david' : 'dav123'}
bal = {'justin' : 100 , 'david' : 1000}
again = True
def question():
    print('''
        1 -> Do You Want do Withdraw   
        2 -> Do You Want do Credit 
        0 -> Exit
       ''')

usrname = input('Enter Your Username : ')
psswd = getpass('Enter Your Password : ')

if usrname in acc and acc[usrname] == psswd :
    print('\tAccount Verified')

    about =input('Do You Want Know About Your Account ? Yes Or No [Y/N] :')

    if about.upper() == 'Y':

        print('\n\tBalance :$',bal[usrname])
        
        while again == True:
            question()
        
            ans = int(input('\tPlease Select 1 or 2 or 0 : '))
        
            if ans == 1:
                width = int(input('How much Do You Want To Withdraw :$'))
                if width <= bal[usrname]:
                    if bal[usrname]-width >= 35:
                        bal[usrname] = bal[usrname]-width
                        
                        print('\n\tBalance :$',bal[usrname])
                    else:
                        print('\t\nError!! Your Minimum Balance Must Be $35 ! ')
                        break
                else:
                    print("\n\tYou Can't Widthdraw This Amount ! ")
                    print('\n\tBalance :$',bal[usrname])
                    break
            elif ans == 2:
                add = int(input('How much Do You Want To Credit :$'))
                bal[usrname] = bal[usrname]+add
                    
                print('\n\tBalance :$',bal[usrname])

            j = input('Do You Want To Run This Again ? Yes Or No [Y/N] : ')
            print('\n\tBalance :$',bal[usrname])
            if j.upper() == 'Y':
                again = True
        
            else:
                again = False
                print(' Thank You Visit Again !')
                break
    else:
        print(' Thank You Visit Again !')

    

else:
    print('\n\tUsername Or Password Is Incorrect! ')
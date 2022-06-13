/*
    this program is created by Justin

    notes:

        1.In "are you super user" > put input as "y" or "Y" if only you complete the voting otherwise put input as "n" or "N"

        2.In "make your vote" > put input as a symbol or the subject in uppercase or lowercase.

        3.In "do you want continue" put always "y" or "Y" as input, put only "n" or "N" when you are complete the voting and the result otherwise
                you can't see result 'cause all the votes have been cleared by this program.

        4.The user name and password for super user is 1234,1234 respectively.
*/


#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<ctype.h>

#define TRUE 1
#define FALSE 0

static int c1,c2,c3,c4,c5,c6;

void head()
{
    printf("\n\t\t\t\t\t\t\t\t\t\t\t Time : %s ",__TIME__);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t Date : %s ",__DATE__);
    printf("\n");
    printf("\n#############################################################################################################");
    printf("\n#############################################################################################################");
    printf("\n");
    printf("\n\n");
    printf("\n ##     ##  #######  ######## ########    ##     ##    ###     ######  ##     ## #### ##    ## ######## ");
    printf("\n ##     ## ##     ##    ##    ##          ###   ###   ## ##   ##    ## ##     ##  ##  ###   ## ##       ");
    printf("\n ##     ## ##     ##    ##    ##          #### ####  ##   ##  ##       ##     ##  ##  ####  ## ##       ");
    printf("\n ##     ## ##     ##    ##    ######      ## ### ## ##     ## ##       #########  ##  ## ## ## ######   ");
    printf("\n  ##   ##  ##     ##    ##    ##          ##     ## ######### ##       ##     ##  ##  ##  #### ##       ");
    printf("\n   ## ##   ##     ##    ##    ##          ##     ## ##     ## ##    ## ##     ##  ##  ##   ### ##       ");
    printf("\n    ###     #######     ##    ########    ##     ## ##     ##  ######  ##     ## #### ##    ## ######## ");
    printf("\n\n\n");
    printf("\n#############################################################################################################");
    printf("\n#############################################################################################################");

}

void cantitates()
{

    printf("\n\t\t\t\t\t+-+-+-+ +-+-+-+-+-+-+-+-+-+-+");
    printf("\n\t================================|T|H|E| |C|A|N|D|I|D|A|T|E|S|================================");
    printf("\n\t\t\t\t\t+-+-+-+ +-+-+-+-+-+-+-+-+-+-+");
    printf("\n\n");
    printf("\n\t\t No %s\t\t%s", "MA3251","MR.M.THIRUPATHI      " );
    printf("\t\t\t symbol \'%s\' ","@");
    printf("\n\t\t No %s\t\t%s", "CS3251","MRS.A.SELVAANUSHIYA  " );
    printf("\t\t\t symbol \'%s\' ","#");
    printf("\n\t\t No %s\t\t%s", "PH3256","DR.INDIRA DEVI       " );
    printf("\t\t\t symbol \'%s\' ","%");
    printf("\n\t\t No %s\t\t%s", "HS3251","MR.K.S.SRINIVAS      " );
    printf("\t\t\t symbol \'%s\' ","&");
    printf("\n\t\t No %s\t\t%s", "BE3251","DR.M.RANUVEL         " );
    printf("\t\t\t symbol \'%s\' ","$");
    printf("\n\t\t No %s\t\t%s", "GE3251","MR.K.KALIRAJ         " );
    printf("\t\t\t symbol \'%s\' ","^");
    printf("\n\n");

}

void choice()
{

    int choiceresult;
    int totalvote;
    int won1,won2,won3,won4,won;
    printf("\n\t 1.Total List");
    printf("\n\t 2.No.Of Votes");
    printf("\n\t 3.Winner");
    printf("\n");

    printf("\n Enter your choice : ");
    scanf("%d",&choiceresult);

    switch(choiceresult)
    {
    case 1:
        printf("\n\t\t\t\t\t+-+-+-+-+-+-+");
        printf("\n\t\t========================|R|E|S|U|L|T|========================");
        printf("\n\t\t\t\t\t+-+-+-+-+-+-+");

        printf("\n");
        printf("\n\t No %s\t\t%s", "MA3251","MR.M.THIRUPATHI      " );
        printf("\t\t symbol \'%s\' ","@");
        printf("\t\t votes \'%d\'",c1);

        printf("\n\t No %s\t\t%s", "CS3251","MRS.A.SELVAANUSHIYA  " );
        printf("\t\t symbol \'%s\' ","#");
        printf("\t\t votes \'%d\'",c2);

        printf("\n\t No %s\t\t%s", "PH3256","DR.INDIRA DEVI       " );
        printf("\t\t symbol \'%s\' ","%");
        printf("\t\t votes \'%d\'",c3);

        printf("\n\t No %s\t\t%s", "HS3251","MR.K.S.SRINIVASAN    " );
        printf("\t\t symbol \'%s\' ","&");
        printf("\t\t votes \'%d\'",c4);


        printf("\n\t No %s\t\t%s", "BE3251","DR.M.RANUVEL         " );
        printf("\t\t symbol \'%s\' ","$");
        printf("\t\t votes \'%d\'",c5);

        printf("\n\t No %s\t\t%s", "GE3251","MR.K.KALIRAJ         " );
        printf("\t\t symbol \'%s\' ","^");
        printf("\t\t votes \'%d\'",c6);
        printf("\n\n");

        break;
    case 2:
        totalvote = c1+c2+c3+c4+c5+c6;
        printf("\nTotal votes is \'%d\'",totalvote);
        printf("\n\n");
        break;
    case 3:
        won1 = c1>c2?c1:c2;
        won2 = c3>c4?c3:c4;
        won3 = c5>c6?c5:c6;
        won4 = won1>won2?won1:won2;
        won  = won3>won4?won3:won4;
        if (c1==c2==c3==c4==c5==c6)
        {
            printf("\n There Is No Winner Among Them ! <do vote again> ");
            printf("\n\n");
        }
        else if(won==c1)
        {
            printf("\n THE WINNER IS:");
            printf("\n\t No %s\t\t%s", "MA3251","MR.M.THIRUPATHI      " );
            printf("\t\t symbol \'%s\' ","@");
            printf("\t\t votes \'%d\'",c1);
        }
        else if(won==c2)
        {
            printf("\n THE WINNER IS:");
            printf("\n\t No %s\t\t%s", "CS3251","MRS.A.SELVAANUSHIYA  " );
            printf("\t\t symbol \'%s\' ","#");
            printf("\t\t votes \'%d\'",c2);
        }
        else if(won==c3)
        {
            printf("\n THE WINNER IS:");
            printf("\n\t No %s\t\t%s", "PH3256","DR.INDIRA DEVI       " );
            printf("\t\t symbol \'%s\' ","%");
            printf("\t\t votes \'%d\'",c3);

        }
        else if(won==c4)
        {
            printf("\n THE WINNER IS:");
            printf("\n\t No %s\t\t%s", "HS3251","MR.K.S.SRINIVASAN    " );
            printf("\t\t symbol \'%s\' ","&");
            printf("\t\t votes \'%d\'",c4);

        }
        else if(won==c5)
        {
            printf("\n THE WINNER IS:");
            printf("\n\t\t No %s\t\t%s", "BE3251","DR.M.RANUVEL         " );
            printf("\t\t\t symbol \'%s\' ","$");
            printf("\t\t votes \'%d\'",c5);

        }
        else if(won==c6)
        {
            printf("\n THE WINNER IS:");
            printf("\n\t\t No %s\t\t%s", "GE3251","MR.K.KALIRAJ         " );
            printf("\t\t\t symbol \'%s\' ","^");
            printf("\t\t votes \'%d\'",c6);
            printf("\n\n");

        }

        break;

    }
}
int main()
{
    fflush(stdin);

    char vote[5];
    char sudo;
    char sudoname[] = "1234";
    char username[10];
    char password []="1234";
    char pass[5];


    char ch=TRUE;
    char cho;

    head();
    while(ch==TRUE)
    {
        fflush(stdin);
        printf("\n\n");

        printf("\n Are you super user ? [Y/N]: ");
        scanf("%c",&sudo);

        if(toupper(sudo)=='Y')
        {
            printf("\n Enter the user name :");
            scanf("%s",&username);

            printf("\n Enter the password  :");
            scanf("%s",&pass);

            if((strcmp(sudoname,username)==0)&&(strcmp(password,pass)==0))
            {
                printf("\n\t <Successfully logged in>");
                printf("\n\n");

                choice();

            }
            else
            {
                printf("\n\t user name (or) password is incorrect !");
                printf("\n\n");


            }
        }

        else if(toupper(sudo)=='N')
        {
            cantitates();

            printf("\n Make your vote : ");
            scanf("%s",&vote);


            if(strcmp(vote,"@")==0||strcmp(strupr(vote),"MA3251")==0)
            {
                ++c1;
                printf(" you voted to %s","@");
                printf("\n\n");

            }
            else if(strcmp(vote,"#")==0||strcmp(strupr(vote),"CS3251")==0)
            {
                ++c2;
                printf(" you voted to %s","#");
                printf("\n\n");

            }
            else if(strcmp(vote,"%")==0||strcmp(strupr(vote),"PH3256")==0)
            {

                ++c3;
                printf(" you voted to %s","%");
                printf("\n\n");

            }
            else if(strcmp(vote,"&")==0||strcmp(strupr(vote),"HS3251")==0)
            {
                ++c4;
                printf(" you voted to %s","&");
                printf("\n\n");
            }
            else if(strcmp(vote,"$")==0||strcmp(strupr(vote),"BE3251")==0)
            {
                ++c5;
                printf(" you voted to %s","$");
                printf("\n\n");
            }
            else if(strcmp(vote,"^")==0||strcmp(strupr(vote),"GE3251")==0)
            {
                ++c6;
                printf(" you voted to %s","^");
                printf("\n\n");
            }
        }

        //check
        fflush(stdin);

        printf("\n Do you want to continue ? [Y/N] : ");
        scanf("%c",&cho);
        if(toupper(cho)=='Y')
        {
            ch=TRUE;
        }
        else
        {
            exit(1);
        }
    }
    return 0;
}







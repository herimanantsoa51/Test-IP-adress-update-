#include "test.h" 


int main()
{   
    Account* account;
    char login[50],mdp[50];
    fscanf(stdin,"login=%[^&]&mdp=%s",login,mdp);
    account=isLoginInFile(login);   
    if (account != NULL)
    {
        if (strcmp(account->passwd,mdp)==0)
        {   
            changeState(account); 
            printTestIp(account);
        }
        else 
        {
            printError("Password not right");
        }
          
    }
    else
    {
        printError("Account Not found");
    }
    return(0);
}
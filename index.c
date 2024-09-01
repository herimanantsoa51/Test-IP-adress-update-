#include "test.h"
int main ()
{
    Account* account=NULL;
    account=IsALoginConnected();
    if (account==NULL)
    {   
        printLogIn();
    }
    else
    {
        printTestIp(account);
    }

    return (EXIT_SUCCESS);  
}

#include "test.h"
void main ()
{
    int *var;
    int i;
    bool noyes=TRUE;
    classe type;
    var=GetValofVariable();
    if (var ==NULL)
    {
        printresult(StrError,var);   
    }
    else 
    {
        for (i = 0; i < 4; i++)
        {
            noyes=IsNumberValid(var[i]);
            if (noyes==FALSE)
            {
                break;
            }
        } 
        if (noyes==FALSE)
        {
            type=Invalid;
        }
        else 
        {
            type=whatClassHas(var[0]);
        }  
        printresult(type,var);
    }
}


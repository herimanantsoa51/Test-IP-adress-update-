#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef enum bool bool;
typedef enum classe classe;
enum bool
{
    TRUE,
    FALSE
};
enum classe
{
    A,B,C,D,E,StrError,Invalid
};
typedef struct Account
{
    char *name,*prename,*passwd,*login;
    int age;

}Account;


int * GetValofVariable();
bool IsNumberValid(int n);
classe whatClassHas(int n);
char * converVarInStr(int *var);
void printresult(classe c,int *var);
FILE* Open(const char *str,const char opt[2]);
char* safeAllocAndCopy(const char *str);
void printLogIn();
void printTestIp(Account *account);
Account *IsALoginConnected();
void printInscription(char *label);
Account* isLoginInFile(char *loginx);
void changeState(Account *account);
void printError(char *label);

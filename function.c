#include "test.h"
int *GetValofVariable()
{   
    int *tab=(int*)malloc(4*sizeof(int));
    int test=0,i;
    char * str=getenv("QUERY_STRING");
    test = sscanf(str,"IP=%d.%d.%d.%d",&tab[0],&tab[1],&tab[2],&tab[3]);
    if (test!=4)
    {
        return (NULL);
    }
    else
    {    
        return(tab);  
    }
    
}
bool IsNumberValid(int n)
{
    if (n<=255 && n>=0)
    {
        return(TRUE); 
    }
    else
    {
        return(FALSE);
    }
}
classe whatClassHas(int n)
{   
    
    if (n>=0 && n<=127)
    {
        return(A);
    }
    else if (n>127 && n<=191)
    {
        return B;
    }
    else if (n>191 && n<=224)
    {
        return(C);
    }
    else if (n>224 && n<=239)
    {
        return (D);   
    } 
    else
    {
        return(E);
    }
}
void printresult(classe c,int *var)
{   
    printf("Content-Type: text/html; charset=UTF-8\n\n");
    printf("<html lang='fr'><head><meta charset='UTF-8'><meta name='viewport' content='width=device-width, initial-scale=1.0'><title >Resultat</title></head>");
    printf("<body background='img/back.jpg' style='font-family: Arial, sans-serif; background-color: #f0f0f0; margin: 0; padding: 0;'>");
    printf("<form action='cp.html' method='get'>");
    printf("<div style='width: 80%% ; margin: 0 auto; background-color: hsla(86, 25%%, 46%%, 0.541); padding: 30px; box-shadow: 1 1 10px rgba(152, 201, 113, 0.1); margin-top: 50px;margin-bottom: 50px;'>");
    switch (c)
    {
    case A:
        printf("<h1 style='text-align: center; color: #ffffff;'>l'adresse %s est de classe A</h1>",converVarInStr(var));
        break;
    case B:
        printf("<h1 style='text-align: center; color: #ffffff;'>l'adresse %s est de classe B</h1>",converVarInStr(var));
        break;
    case C:
        printf("<h1 style='text-align: center; color: #ffffff;'>l'adresse %s est de classe C</h1>",converVarInStr(var));
        break;
    case D:
        printf("<h1 style='text-align: center; color: #ffffff;'>l'adresse %s est de classe D</h1>",converVarInStr(var));
        break;
    case E:
        printf("<h1 style='text-align: center; color: #ffffff;'>l'adresse %s est de classe E</h1>",converVarInStr(var));
        break;
    case Invalid:
        printf("<h1 style='text-align: center; color: #ffffff;'>this is not a IP adress</h1>");
        break;
     case StrError:
        printf("<h1 style='text-align: center; color: #ffffff;'>INPUT INVALID try for example 000.000.000.000</h1>");
        break;
    }
    printf("<div style='text-align: center;'><input type='submit' value='Reessayer a nouveau'></div>");
    printf("</div></form></body></html>");
    
}
char * converVarInStr(int *var)
{   
    int i;
    char *result= (char*)malloc(20*sizeof(char));
    sprintf(result,"%d.%d.%d.%d",var[0],var[1],var[2],var[3]);
    return(result);
}

void printTestIp(Account* account)
{   
    printf("Content-Type: text/html; charset=UTF-8\n\n");
    printf("<!DOCTYPE html><html lang='fr'><head><meta charset='UTF-8'<meta name='viewport' content='width=device-width, initial-scale=1.0'><title >Test adresse IP</title></head>");
    printf("<body background='img/back.jpg' style='font-family: Arial, sans-serif; background-color: #f0f0f0; margin: 0; padding: 0;'>\n");
    printf("<form action='test.cgi' method='get'>\n");
    printf("<div style='width: 80%%; margin: 0 auto; background-color: hsla(86, 25%%, 46%%, 0.541); padding: 30px; box-shadow: 1 1 10px rgba(152, 201, 113, 0.1); margin-top: 50px;margin-bottom: 50px;'>\n");
    printf("<h1 style='text-align: center; color: #ffffff;'>Tester si votre combinaison de nombre est un  adresse IP</h1>\n");
    printf("<header style='text-align: left;  size: 50px;'><img src='img/logo_mit.png'/></header>\n");
    printf("<h3 style='text-align: center; color: #ffffff;'>Entrer l'adresse IP:</h3>\n");
    printf("<div style='text-align: center;'><input style='font-size:larger' type='TEXT' name='IP'></div>\n");
    printf("<div style='text-align: center;'><input type='submit' value='Envoyer'></div>\n");
    printf("</div>\n</form>\n</body></html>");
}
void printLogIn()
{   
    printf("Content-Type: text/html; charset=UTF-8\n\n");
    printf("<!DOCTYPE html><html lang='fr'><head><meta charset='UTF-8'>");
    printf("<meta name='viewport' content='width=device-width, initial-scale=1.0'>");
    printf("<title>Connexion</title>");
    printf("<style>");
    printf("body { font-family: Arial, sans-serif; background-color: #f0f0f0; margin: 0; padding: 0; }");
    printf(".container { width: 80%%; margin: 0 auto; background-color: hsla(86, 25%%, 46%%, 0.541); padding: 30px; ");
    printf("box-shadow: 0px 0px 20px rgba(0, 0, 0, 0.1); margin-top: 50px; margin-bottom: 50px; border-radius: 10px; }");
    printf("h1 { text-align: center; color: #ffffff; margin-bottom: 30px; }");
    printf("header { text-align: left; margin-bottom: 20px; }");
    printf("h3 { text-align: center; color: #ffffff; margin-bottom: 10px; }");
    printf(".input-group { text-align: center; margin-bottom: 20px; }");
    printf("input[type='text'], input[type='password'] { font-size: large; padding: 10px; width: 40%%; ");
    printf("border: 1px solid #ccc; border-radius: 20px; }");
    printf("input[type='submit'] { background-color: #ffffff; color: #64a869; padding: 10px 20px; ");
    printf("border: none; border-radius: 20px; cursor: pointer; font-size: large; }");
    printf("input[type='submit']:hover { background-color: #5b9460; color: #ffffff; }");
    printf("</style></head>");
    printf("<body background='img/back.jpg'>\n");
    printf("<form action='log.cgi' method='post'>\n");
    printf("<div class='container'>\n");
    printf("<header><img src='img/logo_mit.png' alt='Logo' /></header>\n");
    printf("<div class='input-group'><h3>Login:</h3>\n");
    printf("<input type='text' name='login'></div>\n");
    printf("<div class='input-group'><h3>Mot de Passe:</h3>\n");
    printf("<input type='password' name='mdp'></div>\n");
    printf("<div class='input-group'><input type='submit' value='Envoyer'></div>\n");
    printf("<a href='SignIn.html' style='text-align: end; color:#f0f0f0;font-size: medium;'>Don't have an account?</a>");
    printf("</div>\n</form>\n</body></html>");
}

Account *IsALoginConnected()
{
    FILE* file= Open("connecting.csv","r");
    Account* account;
    char name[100],prename[100],mdp[100],login[60];
    int age;
        if (fscanf(file,"%[^/]/%[^/]/%[^/]/%d/%s",login,name,prename,&age,mdp)==5)
        {   
            account=(Account*)malloc(sizeof(Account));
            account->login=safeAllocAndCopy(login);
            account->name=safeAllocAndCopy(name);
            account->prename=safeAllocAndCopy(prename);
            account->passwd=safeAllocAndCopy(mdp);
            account->age=age;
            return(account);
        }   
    return(NULL);
}
char* safeAllocAndCopy(const char *str) 
{
    if (str == NULL) 
    {
        return NULL;
    }
    char *copy = (char*)malloc(strlen(str) + 1);
    if (copy == NULL) {
        perror("Erreur d'allocation");
        exit(EXIT_FAILURE);
    }
    strcpy(copy, str);
    return copy;
}
FILE* Open(const char *str,const char opt[2])
{
    FILE* file=fopen(str,opt);
    if(file==NULL)
    {
        printf("Erreur d'ouverture du fichier\n");
        exit (EXIT_FAILURE);
    }
    return(file);
}
void printTestIp(char* name)
{   
    printf("Content-Type: text/html; charset=UTF-8\n\n");
    printf("<!DOCTYPE html><html lang='fr'><head><meta charset='UTF-8'<meta name='viewport' content='width=device-width, initial-scale=1.0'><title >Test adresse IP</title></head>");
    printf("<body background='img/back.jpg' style='font-family: Arial, sans-serif; background-color: #f0f0f0; margin: 0; padding: 0;'>\n");
    printf("<form action='test.cgi' method='get'>\n");
    printf("<div style='width: 80%%; margin: 0 auto; background-color: hsla(86, 25%%, 46%%, 0.541); padding: 30px; box-shadow: 1 1 10px rgba(152, 201, 113, 0.1); margin-top: 50px;margin-bottom: 50px;'>\n");
    printf("<h1 style='text-align: center; color: #ffffff;'>Bonjour %s</h1>\n",name);
    printf("<header style='text-align: left;  size: 50px;'><img src='img/logo_mit.png'/></header>\n");
    printf("<h3 style='text-align: center; color: #ffffff;'>Entrer l'adresse IP:</h3>\n");
    printf("<div style='text-align: center;'><input style='font-size:larger' type='TEXT' name='IP'></div>\n");
    printf("<div style='text-align: center;'><input type='submit' value='Envoyer'></div>\n");
    printf("</div>\n</form>\n</body></html>");
}
void printInscription(char * label)
{
    printf("<!DOCTYPE html><html lang='fr'><head><meta charset='UTF-8'>");
    printf("<meta name='viewport' content='width=device-width, initial-scale=1.0'>");
    printf("<title>Inscription</title>");
    printf("<style>");
    printf("body { font-family: Arial, sans-serif; background-color: #f0f0f0; margin: 0; padding: 0; }");
    printf(".container { width: 80%%; margin: 0 auto; background-color: hsla(86, 25%%, 46%%, 0.541); padding: 30px; ");
    printf("box-shadow: 0px 0px 20px rgba(0, 0, 0, 0.1); margin-top: 50px; margin-bottom: 50px; border-radius: 10px; }");
    printf("h1 { text-align: center; color: #ffffff; margin-bottom: 30px; }");
    printf("header { text-align: left; margin-bottom: 20px; }");
    printf("h3 { text-align: center; color: #ffffff; margin-bottom: 10px; }");
    printf(".input-group { text-align: center; margin-bottom: 20px; }");
    printf("input[type='text'], input[type='password'] { font-size: large; padding: 10px; width: 40%%; ");
    printf("border: 1px solid #ccc; border-radius: 20px; }");
    printf("input[type='submit'] { background-color: #ffffff; color: #64a869; padding: 10px 20px; ");
    printf("border: none; border-radius: 20px; cursor: pointer; font-size: large; }");
    printf("input[type='submit']:hover { background-color: #5b9460; color: #ffffff; }");
    printf("</style>");
    printf("</head>");
    printf("<body background='img/back.jpg'>");
    printf("<form action='inscription.cgi' method='post'>");
    printf("<div class='container'>");
    printf("<header><img src='img/logo_mit.png' alt='Logo' /><h2>Inscription</h2></header>");
    printf("<div class='input-group'><h3>Nom</h3>");
    printf("<input type='text' name='nom'></div>");
    printf("<div class='input-group'><h3>Prenom</h3>");
    printf("<input type='text' name='prenom'></div>");
    printf("<div class='input-group'><h3>Age</h3>");
    printf("<input type='text' name='age'></div>");
    printf("<div class='input-group'><h3>Login:</h3>");
    printf("<input type='text' name='login'></div>");
    printf("<div class='input-group'><h3>Mot de Passe:</h3>");
    printf("<input type='password' name='mdp1'></div>");
    printf("<div class='input-group'><h3>Confirmer le Mot de Passe:</h3>");
    printf("<input type='password' name='mdp2'></div>");
    printf("<div class='input-group'><input type='submit' value='Envoyer'></div>");
    printf("<a href='log.cgi' style='text-align: end; color:#f0f0f0;font-size: medium;'>Vous avez déjà un compte?</a>");
    printf("</div>");
    printf("</form>");
    printf("</body>");
    printf("</html>");

}
void changeState(Account *account)
{
    FILE* file=Open("connecting.csv","w");
    fprintf(file,"%s/%s/%s/%d/%s",account->login,account->name,account->prename,account->age,account->passwd);
    fclose(file);
}
void printError(char * label)
{
    printf("Content-Type: text/html; charset=UTF-8\n\n");
    printf("<!DOCTYPE html><html lang='fr'><head><meta charset='UTF-8'>");
    printf("<meta name='viewport' content='width=device-width, initial-scale=1.0'>");
    printf("<title>Connexion</title>");
    printf("<style>");
    printf("body { font-family: Arial, sans-serif; background-color: #f0f0f0; margin: 0; padding: 0; }");
    printf(".container { width: 80%%; margin: 0 auto; background-color: hsla(86, 25%%, 46%%, 0.541); padding: 30px; ");
    printf("box-shadow: 0px 0px 20px rgba(0, 0, 0, 0.1); margin-top: 50px; margin-bottom: 50px; border-radius: 10px; }");
    printf("h1 { text-align: center; color: #ffffff; margin-bottom: 30px; }");
    printf("header { text-align: left; margin-bottom: 20px; }");
    printf("h3 { text-align: center; color: #ffffff; margin-bottom: 10px; }");
    printf(".input-group { text-align: center; margin-bottom: 20px; }");
    printf("input[type='text'], input[type='password'] { font-size: large; padding: 10px; width: 40%%; ");
    printf("border: 1px solid #ccc; border-radius: 20px; }");
    printf("input[type='submit'] { background-color: #ffffff; color: #64a869; padding: 10px 20px; ");
    printf("border: none; border-radius: 20px; cursor: pointer; font-size: large; }");
    printf("input[type='submit']:hover { background-color: #5b9460; color: #ffffff; }");
    printf("</style></head>");
    printf("<body background='img/back.jpg'>\n");
    printf("<form action='log.cgi' method='post'>\n");
    printf("<div class='container'>\n");
    printf("<header><img src='img/logo_mit.png' alt='Logo' /></header>\n");
    printf("<h3>Try Again:</h3>");
    printf("<div class='input-group'><h3>Login:</h3>\n");
    printf("<input type='text' name='login'></div>\n");
    printf("<div class='input-group'><h3>Mot de Passe:</h3>\n");
    printf("<input type='password' name='mdp'></div>\n");
    printf("<div class='input-group'><input type='submit' value='Envoyer'></div>\n");
    printf("<a href='SignIn.cgi' style='text-align: end; color:#f0f0f0;font-size: medium;'>Don't have an account?</a>");
    
    printf("</div>\n</form>\n</body></html>");
}
Account* isLoginInFile(char *loginx)
{
    FILE* file=Open("loginMdp.csv","r");
    char str[400],login[50],mdp[100],name[50],prename[50];
    int age;
    Account* account;
    strcat(login,"!!");
    while (fgets(str,400,file))
    {   
        sscanf(str,"%[^/]/%[^/]/%[^/]/%d/%s",login,name,prename,&age,mdp);
        if(strcmp(login,loginx)==0)
        {    
            account=(Account*)malloc(sizeof(Account));
            account->login=safeAllocAndCopy(login);
            account->name=safeAllocAndCopy(name);
            account->prename=safeAllocAndCopy(prename);
            account->passwd=safeAllocAndCopy(mdp);
            account->age=age;
            return(account);
        }
    }
    fclose(file);
    return (NULL);
    
}

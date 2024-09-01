#include "test.h"

int main ()
{   
    char nom[120],prenom[120],login[120],mdp1[100],mdp2[100];
    int age;
    Account *account;
    FILE* file=Open("loginMdp.csv","a");
    FILE* elif=Open("connection.csv","w");
    fscanf(stdin,"nom=%[^&]&prenom=%[^&]&age=%d&login=%[^&]&mdp1=%[^&]&mdp2=%s",nom,prenom,&age,login,mdp1,mdp2);
    //nom=jaime&prenom=jaime&age=12&login=chri2&mdp1=chrichri1&mdp2=chrichri1
    account=isLoginInFile(login);
    if (account==NULL)
    {
        if (strcmp(mdp1,mdp2)==0 && strlen(mdp1)>=8)
        {   
            fprintf(file,"\n%s/%s/%s/%d/%s\n",login,nom,prenom,age,mdp1);
            fprintf(elif,"%s/%s/%s/%d/%s\n",login,nom,prenom,age,mdp1);
            printTestIp(account);
        }
        else
        {
            printInscription("Mot de passe non valide");
        } 
    }
    else
    {
        printInscription("Login Déja utilisé, cherche un autre");
    }  
    fclose(elif);
    fclose(file);
}


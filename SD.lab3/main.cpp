#include <iostream>
#include<cstring>
using namespace std;
 char nume[100], prenume[100];

void palindrom()
{
    int ok=1;
    for(int i=0;i<((strlen(nume))/2)-1;i++)
        if(nume[i]!=(nume[strlen(nume)-i]))
        ok=0;


    if(ok==1)
        cout<<"Numele este palindrom"<<endl;
    else
        cout<<"Numele nu este palindrom"<<endl;

}


void inversare_sir()
{
    char inversat[100];

    for(int i=0;i<strlen(nume);i++)
        inversat[strlen(nume)-i-1]=nume[i];


    cout<<"Nume inversat: "<<inversat;
}

void concatenare()
{

cout<<"Concatenare nume prenume: "<<strcat(nume,prenume);
}
int main()
{


    cout<<"Nume:";
    cin.getline(nume,100);
    cout<<"Prenume:";
    cin.getline(prenume,100);
palindrom();
 inversare_sir();

cout<<endl;
   concatenare();

    return 0;

}


/*
strcpy-copiaza un sir de caracteere in altul
strlen-calculeaza si returneaza lungimea unui sir
strcat-concateneaza 2 siruri de caractere
strcmp-compara 2 siruri de caractere
strchr-cauta prima aparitie a unui sir de caractere in alt sir si returneaz un pointer catre locatia acestuia in sirul sursa
strstr-cauta prima aparitie a unui sir de caractere intr-un sir si returneaza un pointer catre locatia acestuia in sirul sursa
toupper-converteste un caracter in majuscula
tolower-converteste un caracter in minuscula
isdigit-verifica daca caracterul este o cifra
isalpha-verifica daca un caracter este o litera
isspace-verifica daca un caracter este un spatiu sau un separator
strtok-imparte un sir de caractere in token-uri utilizand un set de caractere separatori specificat.*/

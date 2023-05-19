#include <iostream>
using namespace std;
int lista[20][20],n=5,m,viz[100],gasit;

void lista_Adiacenta()
{
int v[20];

for (int i=1;i<=n;i++)
{   cin>>v[i];
        for (int j=1;j<=v[i];j++)
            cin>>lista[i][j];}
}

void adancime(int nod)

{

 cout<<nod<<" ";

 viz[nod]=1;

 for(int k=1;k<=n;k++)
      if(lista[nod][k]==1 && viz[k]==0)

               adancime(k);

}



int main()
{
    lista_Adiacenta();
    adancime(1);
    return 0;
}

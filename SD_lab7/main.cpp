#include <iostream>
using namespace std;
int v[1000],contor_final=0;


void adauga_elem_final(int val)
{
    if(contor_final<=1000)
    {
         v[contor_final]=val;
    contor_final++;
    }
   else
    cout<<"Vectorul este plin";


}

void adauga_initial(int val)
{
    if(contor_final<=1000)
    {
        for(int i=contor_final+1;i>0;i--)
            v[i]=v[i-1];

        v[0]=val;
        contor_final++;
    }
    else
        cout<<"Vectorul este plin";
}


void afisare()
{
    for(int i=0;i<contor_final;i++)
        cout<<v[i]<<" ";
}


void stergere_elem(int val)
{
    int i=0;
    while(v[i]!=val && i<contor_final)
    {
        i++;
    }

    while(i<contor_final-1)
    {
        v[i]=v[i+1];
        i++;
    }
    contor_final--;
}

void inserare_poz(int poz,int val)
{
    poz--;
    if(contor_final<1000)
    {
        contor_final++;
        int i=contor_final;
    while(i!=poz)
        {
            v[i]=v[i-1];
            i--;
        }
        v[i]=val;
    }
    else
        cout<<"Vectorul este plin";

}


    int main()
    {
       adauga_initial(1);
       adauga_initial(2);
       adauga_initial(3);

       stergere_elem(2);
       inserare_poz(1,54);


        afisare();
        return 0;
    }

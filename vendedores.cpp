#include <iostream>
#include <string>
using namespace std;

void sumar (int m[][5],int tam);
void mostrar (int m[][5], int tam);

int main()
{
    int m[6][5]={0}, r, c, cantidad, tam=6;
    bool x=0;
    
    do{
        cout<<"Ingrese el vendedor y producto\n";
        cin>>c;
        cin>>r;
        cout<<"Ingrese la cantidad vendida\n";
        cin>>cantidad;
        m[r-1][c-1]+=cantidad;
        cout<<"Hay mas ventas?(no=0 si=1)\n";
        cin>>x;
    }while(x==1);
    mostrar(m, tam);
    cout<<"\n";
    sumar(m, tam);
    mostrar(m, tam);
}

void sumar (int m[][5],int tam)
{
    int s=0;
    for(int r=0;r<tam-1;r++)
    {
        for(int c=0;c<4;c++)
            s+=m[r][c];
        m[r][4]=s;
        s=0;
    }
    
    for(int c=0;c<4;c++)
    {
        for(int r=0;r<tam-1;r++)
            s+=m[r][c];
        m[5][c]=s;
        s=0;
    }
}
void mostrar (int m[][5], int tam)
{
    for(int r=0;r<tam-1;r++)
    {
        for(int c=0;c<5;c++)
        {
            cout<<m[r][c];
            cout<<"-";
        }
        cout<<"\n";
    }
    for(int c=0;c<4;c++)
            cout<<m[5][c]<<"-";
}

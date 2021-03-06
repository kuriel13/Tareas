#include <iostream>
#include <string>
using namespace std;

void menu();
int avanzarx(bool m[][10], int tam, int pos, int x,int y, int pasos, bool pluma);
int avanzary(bool m[][10], int tam, int pos,int x, int y, int pasos, bool pluma);
void mostrar(bool m[][10], int tam);

int main()
{
    bool m[10][10]={0}, pluma=0;
    int pos=1, x=0, y=0, opc, pasos, tam=10;

    do{
        menu();
        cin>>opc;

        if(opc==1)
            pluma=0;
        else if(opc==2)
            pluma=1;
        else if(opc==3)
        {
            pos+=1;
            if(pos==5)
                pos=1;
        }
        else if(opc==4)
        {
            pos-=1;
            if(pos==0)
                pos=4;
        }
        else if(opc==5)
        {
            cin>>pasos;
            if(pos==1||pos==3)
                x=avanzarx(m, tam, pos, x,y, pasos, pluma);
            else if(pos==2||pos==4)
                y=avanzary(m, tam, pos,x, y, pasos, pluma);
        }
        else if(opc==6)
            mostrar(m, tam);
        else
            cout<<"No existe esa opci[on\n";
    }while(opc!=7);

}

void menu()
{
    cout<<"1 Pluma hacia arriba\n";
    cout<<"2 Pluma hacia abajo\n";
    cout<<"3 Gira a la derecha\n";
    cout<<"4 Gira a la izquierda\n";
    cout<<"5, 10 Avanza 10 espacios (o algún número distinto de 10)\n";
    cout<<"6 Imprime el arreglo de 20 por 20\n";
    cout<<"7 Fin de datos (centinela)\n";
}

int avanzarx(bool m[][10], int tam, int pos, int x,int y, int pasos, bool pluma)
{
    int a;
    if(pos==1)
    {
        a=x;
        x+=pasos;
        if(x>9)
            x=9;
        if(pluma==1)
        for(int i=a;i<=x;i++)
            m[y][i]=1;
    }
    else if(pos==3)
    {
        a=x;
        x-=pasos;
        if(x<0)
            x=0;
        if(pluma==1)
        for(int i=a;i>=x;i--)
            m[y][i]=1;
    }
    return x;

}

int avanzary(bool m[][10], int tam, int pos,int x, int y, int pasos, bool pluma)
{
    int a;
    if(pos==2)
    {
        a=y;
        y+=pasos;
        if(y>9)
            y=9;
        if(pluma==1)
        for(int i=a;i<=y;i++)
            m[i][x]=1;
    }
    else if(pos==4)
    {
        a=y;
        y-=pasos;
        if(y<0)
            y=0;
        if(pluma==1)
        for(int i=a;i>=y;i--)
            m[i][x]=1;
    }
    return y;
}

void mostrar(bool m[][10], int tam)
{
    for(int i=0;i<tam;i++)
    {
        for(int j=0;j<10;j++)
            cout<<m[i][j];
        cout<<endl;
    }
}

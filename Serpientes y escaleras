#include <iostream>
#include <string>
#include<time.h>
#include<stdlib.h>
using namespace std;

int dado();

int main()
{
    int v[101]={0}, s1=0,s2=0,d1,d2;
    //Escaleras
    v[3]=21;
    v[29]=40;
    v[39]=18;
    v[65]=10;
    v[78]=21;
    //Serpientes
    v[12]=-4;
    v[46]=-19;
    v[68]=-21;
    v[92]=-19;
    v[98]=-35;
    srand(time(NULL));
    cout<<"Inicia el juego\n";
    do{
        d1=dado();
        s1+=d1;
        cout<<"J1. Dado : "<<d1<<". Nueva posicion : "<<s1<<"\n";
        if(v[s1]<0)
        {
            s1+=v[s1];
            cout<<"J1. Caiste en una serpiente. Nueva posicion: "<<s1<<"\n";
        }
        else if(v[s1]>0)
        {
            s1+=v[s1];
            cout<<"J1. Caiste en una Escalera. Nueva posicion: "<<s1<<"\n";
        }
        
        d2=dado();
        s2+=d2;
        cout<<"J2. Dado : "<<d2<<". Nueva posicion : "<<s2<<"\n";
        if(v[s2]<0)
        {
            s2+=v[s2];
            cout<<"J2. Caiste en una serpiente. Nueva posicion: "<<s2<<"\n";
        }
        else if(v[s2]>0)
        {
            s2+=v[s2];
            cout<<"J2. Caiste en una Escalera. Nueva posicion: "<<s2<<"\n";
        }
    }while(s1<100&&s2<100);
    
    if(s1>=100)
        cout<<"J1. Haz ganado!";
    else
        cout<<"J2. Haz ganado!";
    return 0;

}

int dado()
{
    int num=1+rand()%(6);
    return num;
}

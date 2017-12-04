#include <iostream>
#include <cstring>

using namespace std;
int buscarC(char fras[], char pal[]);

int main(int argc, char** argv) {
	char frase[50], palabra[10];
	int posi;
	
	cout<<"Ingresa una frase: ";
	cin.getline(frase,50);
	cout<<"Ingresa la palabra a buscar: ";
	cin.getline(palabra,10);
	posi=buscarC(frase,palabra);
	if (posi==1)
        cout<<"No se encuentra la palabra";
    else
        cout<<"La palabra esta en la posicion: "<<posi;
	return 0;
}
int buscarC(char fras[], char pal[])
{
    int conta=0, conta2=0;
    for(;conta<=strlen(fras);)
    {
        if(pal[conta2]==fras[conta])
        {
            conta++;
			conta2++;
            if(conta2==strlen(pal))
                return (conta-conta2);
        }
        else
        {
            if (conta2==0)
                conta++;
            else
                conta+=conta2-1, conta2=0;
        }
    }
    return 1;
}

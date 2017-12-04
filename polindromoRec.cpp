#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool	EsPol(char palabra[], int inicio, int final);

int main(int argc, char** argv) {
	int inicio=0, final;
	char palabra[20];
	bool polindromo;
	
	cout<<"Ingrese una palabra: \n";
	cin.getline(palabra,20);
	final=strlen(palabra);
	final--;
	

	
	polindromo=EsPol(palabra,inicio,final);
	if(polindromo==1)
		cout<<"Es polindromo";
	else
		cout<<"No es polindromo";
	return 0;
}
bool	EsPol(char palabra[], int inicio, int final)
{
	if(inicio >= final)
	{
		return 1;
	}
	else if(palabra[inicio]!=palabra[final])
	{
		return 0;
	}
	else
	{
		return EsPol(palabra, ++inicio, --final);
	}
}

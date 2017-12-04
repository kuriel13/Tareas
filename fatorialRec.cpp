#include <iostream>

using namespace std;

int facto(int num,int guar);

int main(int argc, char** argv) {
	int numero, factorial;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	factorial=facto(numero, 1);
	cout<<"El factorial es: "<<factorial;
	return 0;
}
int facto(int num,int guar)
{	guar*=num;
	num--;
	if(num==1)
		return guar;
	else 
		return facto(num, guar);
}

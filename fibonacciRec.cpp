#include <iostream>
using namespace std;
int fibo(int n1,int n2,int con,int max);

int main(int argc, char** argv) {
	int final,numero;
	
	cout<<"Hasta que termino desea la serie?";
	cin>>final;
	numero=fibo(1,1,2,final);
	cout<<"El termino "<<final<<" es: "<<numero;
	return 0;
}
int fibo(int n1,int n2,int con,int max)
{
	int n3=n1+n2;
	con++;
	if(con==max)
	{
		return n3;
	}
	else
	{
		n1=n2;
		n2=n3;
		return fibo(n1,n2,con,max);
	}
}

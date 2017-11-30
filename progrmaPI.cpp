#include <iostream>
#include <fstream>


using namespace std;

void menu();
void recibirF (char cad[][70]);
void mostrarM (char cad[][70],int tam);
void frecu (char cad[][70], int frec[][70], char cod[]);
void mostrarF (int frec[][70],char cod[], int n);
void mostrarFA (int frec[][70],char cod[], int n);
void mostrarFR (int frec[][70],char cod[], int n);
void mostrarFAR (int frec[][70],char cod[], int n);
void mostrarMo (int frec[][70], char cod[], int n);

int main() {
	
	char ward[361][70], codif[18];
	int tam=361, frecuencia[18][70]={0},p,n;

	ifstream archi("c:\\datos\\pi3.txt",ios::in);
	
	codif[0]='a';
	codif[1]='b';
	codif[2]='c';
	codif[3]='d';
	codif[4]='e';
	codif[5]='f';
	codif[6]='g';
	codif[7]='h';
	codif[8]='z';
	codif[9]='1';
	codif[10]='2';
	codif[11]='3';
	codif[12]='4';
	codif[13]='5';
	codif[14]='6';
	codif[15]='7';
	codif[16]='8';
	codif[17]='9';
	
	recibirF(ward);
	frecu(ward,frecuencia, codif);
	
	do{
		menu();
		cin>>p;
		
		if(p==1)
		{
			mostrarM(ward,tam);
			cout<<"---------- \n";
		}
		else if(p==2)
		{
			cout<<"Que pregunta deasea? ";
			cin>>n;
			mostrarF(frecuencia, codif,n);
			cout<<"---------- \n";
		}
		else if(p==3)
		{
			cout<<"Que pregunta deasea? ";
			cin>>n;
			mostrarFA(frecuencia, codif,n);
			cout<<"---------- \n";
		}
		else if(p==4)
		{
			cout<<"Que pregunta deasea? ";
			cin>>n;
			mostrarFR(frecuencia, codif,n);
			cout<<"---------- \n";
		}
		else if(p==5)
		{
			cout<<"Que pregunta deasea? ";
			cin>>n;
			mostrarFAR(frecuencia, codif, n);
			cout<<"---------- \n";
		}
		else if(p==6)
		{
			cout<<"Que pregunta deasea? ";
			cin>>n;
			mostrarMo(frecuencia, codif, n);
			cout<<"---------- \n";
		}
	}while(p!=7);
	
	archi.close();
	return 0;
}
void menu()
{
	cout<<"1. Ver matriz \n";
	cout<<"2. Ver frecuencia \n";
	cout<<"3. Ver frecuencia acumulada \n";
	cout<<"4. Ver frecuancia relativa \n";
	cout<<"5. Ver frecuencia relativa acumulada \n";
	cout<<"6. Ver moda \n";
	cout<<"7. Salir \n";
	cout<<": ";
}
void recibirF (char cad[][70])
{
	ifstream archi("c:\\datos\\pi.txt",ios::in);
	for(int i=0;i<361;i++)
		for(int j=0;j<70;j++)
			archi>>cad[i][j];


}
void mostrarM (char cad[][70],int tam)
{
	for(int i=0;i<tam;i++)
	{
		for(int j=0;j<70;j++)
			cout<<cad[i][j]<<"-";
		cout<<endl;
	}
}
void frecu (char cad[][70], int frec[][70], char cod[])
{
	for(int c=0;c<70;c++)
	{
		for(int f=0;f<361;f++)
		{
			for(int ch=0;ch<18;ch++)
			{
				if(cad[f][c]==cod[ch])
					frec[ch][c]++;
			}
		}
	}
}
void mostrarF (int frec[][70],char cod[], int n)
{
	cout<<"Frecuencia de pregunta "<<n<<" \n";
	for(int ch=0;ch<18;ch++)
	{

		cout<<cod[ch]<<"-"<<frec[ch][n];
		cout<<endl;
	}
}
void mostrarFA (int frec[][70],char cod[], int n)
{
	int s=0;
	cout<<"Frecuencia de pregunta "<<n<<" \n";
	for(int ch=0;ch<18;ch++)
	{
		s+=frec[ch][n];
		cout<<cod[ch]<<"-"<<s;
		cout<<endl;
	}
}
void mostrarFR (int frec[][70],char cod[], int n)
{
	cout<<"Frecuencia de pregunta "<<n<<" \n";
	for(int ch=0;ch<18;ch++)
	{

		cout<<cod[ch]<<"-"<<(frec[ch][n]/3.61);
		cout<<endl;
	}
}
void mostrarFAR (int frec[][70],char cod[], int n)
{
	float s=0;
	cout<<"Frecuencia de pregunta "<<n<<" \n";
	for(int ch=0;ch<18;ch++)
	{
		s+=frec[ch][n];
		cout<<cod[ch]<<"-"<<(s/3.61);
		cout<<endl;
	}
}
void mostrarMo (int frec[][70], char cod[], int n)
{
	int moda=0;
	for(int i=1;i<18;i++)
	{
		if(frec[i][n]>frec[moda][n])
			moda=i;
	}
	cout<<"La moda es: "<<cod[moda]<<endl;
}

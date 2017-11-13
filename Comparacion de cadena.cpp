#include <iostream>
#include <string>
using namespace std;

int main()
{
    char texto[]={"Ora pues pinches perros"}, palabra[20];
    int i=0, k;
    bool x=1;
    
    cin.getline(palabra,20);
    
    do{
        if(texto[i]==palabra[0])
            for(int j=1;palabra[j]!=0;j++)
                if(texto[i+j]!=palabra[j])
                    x=0;
        i++;
    }while(x==0);
    cout<<i;
            
    return 0;
}

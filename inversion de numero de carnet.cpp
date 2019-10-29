#include <iostream>

using namespace std;

int main()
{
int digitos = 8; 
int vector[digitos]; 
int temp; 
int i; 

for (int i=0; i<digitos; i++)
{
cout<<"Ingrese el digito "<<(i+1)<<" de su carnet por favor "<<endl;
cin >> vector[i]; 

}

for (int i=0;i<digitos/2;i++){
temp = vector[i]; 
vector[i] = vector[digitos-1 -i]; 
vector[digitos-1 -i] = temp; 
}
for (int i=0; i<digitos; i++)
{
cout<<"Los digitos invertidos : "<<vector[i]<<""<<endl; 
}

return 0;
}

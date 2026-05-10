#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
 int A[10];
 int B[10];
 int C[10];
 int Numero;
 for(Numero = 0;Numero < 10;Numero++){
 cout << "Digite o valor de A: ";
 cin >> A[Numero];
 system("clear");
 }
 cout << endl;
 for(Numero = 0;Numero < 10;Numero++){
 cout << "Digite o valor de B: ";
 cin >> B[Numero];
 system("clear");
 }
 for(Numero = 0;Numero < 10;Numero++){
 C[Numero] = A[Numero] + B[Numero];
 cout << "O resultado da soma entre " << A[Numero] << " e " << 
B[Numero] << " é " << C[Numero] <<"\n";}
 return 0;
}
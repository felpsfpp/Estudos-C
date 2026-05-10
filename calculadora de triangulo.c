#include <iostream> 
using namespace std; 
int main() 
{ 
int A; 
int B; 
int C; 
cout <<"Digite o comprimento A: "; 
cin >> A; 
cout <<"Digite o comprimento B: "; 
cin >> B; 
cout <<"Digite o comprimento C: "; 
cin >> C; 
cout << endl; 
if (A > B+C or B > A+C or C > A+B) 
 cout <<"isto nao é um triângulo." << endl; 
 else if (A == B and B == C and A == C) 
 cout <<"Este é um trângulo equilátero." << endl; 
 else if (A == B or A == C or B ==C) 
 cout <<"Este é um triângulo isósceles." << endl; 
 else 
 cout <<"Este é triângulo escaleno." << endl; 
 return 0; 
}
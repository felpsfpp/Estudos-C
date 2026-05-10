#include <iostream>
using namespace std;
int main()
{
 string nome;
 float s;
 string d;
 cout <<"Qual o nome do funcionário: ";
 getline(cin, nome);
 cout <<"Qual o salário do funcionário: ";
 cin >> s;
 cout <<"Digite a inicial do departamento que o funcionário trabalha: ";
 cin>> d;
 cout << endl;
 if (s >= 1000 or s <= 1500 or d == "p" or d == "e")
 cout <<"O nome do funcionário é " <<nome<< " e seu salário é R$" << s<< ".";
 else
 cout <<"Indisponível." << endl;
 return 0;
}
#include <iostream>
using namespace std;
int main()
{
 string curso;
 cout<<"Qual o seu curso: ";
 getline(cin, curso);
 cout<<endl;
 if (curso == "eletricista" or curso == "mecanica geral")
 cout<<"Esse curso é diurno."<<endl;
 else
 cout<<"Esse curso é noturno."<<endl;
 return 0;
}
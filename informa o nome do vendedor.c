#include <iostream>
using namespace std;
int main()
{
 string nome;
 float n1;
 float n2;
 float n3;
 float n4;
 float v;
 cout<<"Qual o nome do Vendedor: ";
 getline(cin, nome);
 cout<<endl;
 cout<<"Digite as vendas da semana 1:";
 cin>>n1;
 cout<<endl;
 cout<<"Digite as vendas da semana 2: ";
 cin>>n2;
 cout<<endl;
 cout<<"Digite as vendas da semana 3: ";
 cin>>n3;
 cout<<endl;
 cout<<"Digite as vendas da semana 4: ";
 cin>>n4;
 cout<<endl;
 v = n1 + n2 + n3 + n4;
 if (v <= 10000)
 cout << nome << ", Infelizmente o você não atingiu a meta do mês.";
 else if (v >= 10000 and v <= 50000)
 cout << nome << ", Parabens você atingiu a meta do mês com R$ "<< v <<".";
 return 0;
}
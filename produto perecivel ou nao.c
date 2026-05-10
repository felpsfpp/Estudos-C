#include <iostream> 
using namespace std; 
int main() 
{ 
 int produto; 
 cout <<"Digite o código do produto: "; 
 cin >> produto; 
 cout << endl; 
 if (produto == 1) 
 cout <<"Produto não perecível." << endl; 
else if (produto >= 2 and produto <= 4) 
 cout <<"Produto perecível." << endl; 
else if (produto == 5 or produto == 6) 
 cout <<"Produto de vestuário." << endl; 
else if (produto == 7) 
 cout <<"Produto para higiene pessoal." << endl; 
else if (produto == 8 or produto == 9) 
 cout <<"Produto para limpeza e utensílios domésticos." << endl; 
else 
 cout <<"Produto inválido." << endl; 
 return 0; 
}
#include <iostream>
using namespace std;
int main()
{
 int i;
 cout << "Diga sua idade:";
 cin >> i;
 cout << endl;
 if (i >= 5 and i <= 6)
 cout <<"Sua categoria é infantil." << endl;
 else if (i >= 11 and i <= 13)
 cout <<"Sua categoria é juvenil." << endl;
 else if (i >= 18 and i <= 25)
 cout <<"Sua categoria é adulta." << endl;
 else
 cout <<"Você não tem a idade exata para participar da natação." << endl;
 return 0;
}
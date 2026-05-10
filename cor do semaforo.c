#include <iostream> 
using namespace std; 
int main() 
{ 
 string cor; 
 int d; 
 cout <<"Qual cor do semáforo: "; 
 cin >> cor;
 if (cor == "vermelho") 
 cout <<"PARAR" << endl; 
 else if (cor == "verde") 
 cout <<"PASSAR." << endl; 
 else if(
 cout <<"Qual a distância do veículo para o semáforo: "; 
 cin >> d)
 cout << endl;
 if (cor == "amarelo" and d >= 5) 
 cout <<"PARAR" << endl; 
else if (cor =="amarelo" and d < 5) 
 cout <<"PASSAR COM CUIDADO."<< endl; 
 return 0; 
}
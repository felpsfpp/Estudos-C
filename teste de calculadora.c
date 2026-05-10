#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, soma, subtracao, multiplicacao, divisao;

    printf("Escolha a operaçao a ser feita\n");
    printf("A para soma\n");
    printf("B para subtraçao\n");
    printf("C para multiplicaçao\n");
    printf("D para Divisao\n");
    char ch;
    scanf ("%c", &ch);
    switch(ch)
{
    case 'A' : //Soma
        system("cls")
        cout << "Qual o primeiro numero 1?" << endl;
        cin >> n1;
        system("cls")
        cout << "Qual o segundo numero?" << endl;
        cin >> n2;
        system("cls")
        cout << "A soma é: " << n1 + n2;
    break;

    case 'B' : //Subtraçao
        cout << "numero 1\n";
        cin >> n1;
        cout << "numero 2\n";
        cin >> n2;
        cout << "a soma é\n" << n1 - n2;
    break;

    case 'C' : //multiplicaçao
        cout << "numero 1\n";
        cin >> n1;
        cout << "numero 2\n";
        cin >> n2;
        cout << "a soma é\n" << n1 * n2;
    break;

    case 'D' : //Divisao
        cout << "numero 1\n";
        cin >> n1;
        cout << "numero 2\n";
        cin >> n2;
        cout << "a soma é\n" << n1 / n2;
    break;
    return 0;
}

}
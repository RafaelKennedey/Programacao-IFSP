#include <iostream>
#include <cstring>
#include <cctype>
#include <locale>
using namespace std;
int main(){

 setlocale(LC_ALL,"portuguese");
int n1,n2, res;
char opc;

do{
    cout << "Escolha uma operação: " << endl;
    cout << "Digite - A - escolher adição." << endl;
    cout << "Digite - S - escolher Subtração." << endl;
    cout << "Digite - D - escolher divisão." << endl;
    cout << "Digite - M - escolher multiplicação." << endl;
    cout << "Digite - R - para se retirar do programa" << endl;

    cin >> opc;
    opc = toupper(opc);

    switch(opc){

        case 'A':
            cout << "Informe um número: " << endl;
cin >> n1;

cout << "Informe um número:  " << endl;
cin >> n2;

res = n1+n2;

cout << "O resultado da soma é: " << res <<endl;
        break;

        case 'S':
            cout << "Informe um número: " << endl;
cin >> n1;

cout << "Informe um número:  " << endl;
cin >> n2;

res = n1-n2;

cout << "O resultado da subtração é: " << res <<endl;
        break;

        case 'D':
            cout << "Informe um número: " << endl;
cin >> n1;

cout << "Informe um número:  " << endl;
cin >> n2;

res = n1/n2;

cout << "O resultado da divisão é: " << res <<endl;
        break;

        case 'M':
            cout << "Informe um número: " << endl;
cin >> n1;

cout << "Informe um número:  " << endl;
cin >> n2;

res = n1*n2;

cout << "O resultado da multiplicação é: " << res <<endl;
        break;
        case 'R':
            cout << "Saindo do programa....." << endl;
            break;
        default:
            cout << "Opção Inválida." << endl;}
            }while(opc != 'R');

    return 0;
    }

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
    cout << "Escolha uma opera��o: " << endl;
    cout << "Digite - A - escolher adi��o." << endl;
    cout << "Digite - S - escolher Subtra��o." << endl;
    cout << "Digite - D - escolher divis�o." << endl;
    cout << "Digite - M - escolher multiplica��o." << endl;
    cout << "Digite - R - para se retirar do programa" << endl;

    cin >> opc;
    opc = toupper(opc);

    switch(opc){

        case 'A':
            cout << "Informe um n�mero: " << endl;
cin >> n1;

cout << "Informe um n�mero:  " << endl;
cin >> n2;

res = n1+n2;

cout << "O resultado da soma �: " << res <<endl;
        break;

        case 'S':
            cout << "Informe um n�mero: " << endl;
cin >> n1;

cout << "Informe um n�mero:  " << endl;
cin >> n2;

res = n1-n2;

cout << "O resultado da subtra��o �: " << res <<endl;
        break;

        case 'D':
            cout << "Informe um n�mero: " << endl;
cin >> n1;

cout << "Informe um n�mero:  " << endl;
cin >> n2;

res = n1/n2;

cout << "O resultado da divis�o �: " << res <<endl;
        break;

        case 'M':
            cout << "Informe um n�mero: " << endl;
cin >> n1;

cout << "Informe um n�mero:  " << endl;
cin >> n2;

res = n1*n2;

cout << "O resultado da multiplica��o �: " << res <<endl;
        break;
        case 'R':
            cout << "Saindo do programa....." << endl;
            break;
        default:
            cout << "Op��o Inv�lida." << endl;}
            }while(opc != 'R');

    return 0;
    }

#include <cstring>
#include <iostream>
#include <locale>
using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");
int opc,n1,n2;
float resultado;
do{
cout << "Escolha uma das Op��es: "<<endl;
cout << "1 - para SOMAR"<<endl;
cout << "2 - para SUBTRAIR"<<endl;
cout << "3 - para DIVIDIR"<<endl;
cout << "4 - para MULTIPLICAR"<<endl;
cout << "5 - para SAIR"<<endl;
cout <<endl << "Informe a Opc�o Desejada: ";
cin >> opc;
cout << endl<<endl;

switch(opc){
case 1:
    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
     cout <<endl<< "Digite o segundo n�mero: ";
    cin >> n2;
    resultado = n1+n2;
    cout << endl << "A soma �: "<<resultado<<endl<<endl;
    break;
    case 2:
    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
     cout <<endl<< "Digite o segundo n�mero: ";
    cin >> n2;
    resultado = n1-n2;
    cout << endl << "A subtra��o �: "<<resultado<<endl<<endl;
    break;
    case 3:
    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
     cout <<endl<< "Digite o segundo n�mero: ";
    cin >> n2;
    resultado = n1/n2;
    cout << endl << "A divis�o �: "<<resultado<<endl<<endl;
    break;
    case 4:
    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
     cout <<endl<< "Digite o segundo n�mero: ";
    cin >> n2;
    resultado = n1*n2;
    cout << endl << "A multiplica��o �: "<<resultado<<endl<<endl;
    break;
    case 5:
    cout << "Saindo do programa.... "<<endl<<endl;
   break;
   default:
cout<<"Op��o Invalida. "<<endl<<endl;
}
}while(opc != 5);
 return 0;
}

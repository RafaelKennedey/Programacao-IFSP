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
cout << "Escolha uma das Opções: "<<endl;
cout << "1 - para SOMAR"<<endl;
cout << "2 - para SUBTRAIR"<<endl;
cout << "3 - para DIVIDIR"<<endl;
cout << "4 - para MULTIPLICAR"<<endl;
cout << "5 - para SAIR"<<endl;
cout <<endl << "Informe a Opcão Desejada: ";
cin >> opc;
cout << endl<<endl;

switch(opc){
case 1:
    cout << "Digite o primeiro número: ";
    cin >> n1;
     cout <<endl<< "Digite o segundo número: ";
    cin >> n2;
    resultado = n1+n2;
    cout << endl << "A soma é: "<<resultado<<endl<<endl;
    break;
    case 2:
    cout << "Digite o primeiro número: ";
    cin >> n1;
     cout <<endl<< "Digite o segundo número: ";
    cin >> n2;
    resultado = n1-n2;
    cout << endl << "A subtração é: "<<resultado<<endl<<endl;
    break;
    case 3:
    cout << "Digite o primeiro número: ";
    cin >> n1;
     cout <<endl<< "Digite o segundo número: ";
    cin >> n2;
    resultado = n1/n2;
    cout << endl << "A divisão é: "<<resultado<<endl<<endl;
    break;
    case 4:
    cout << "Digite o primeiro número: ";
    cin >> n1;
     cout <<endl<< "Digite o segundo número: ";
    cin >> n2;
    resultado = n1*n2;
    cout << endl << "A multiplicação é: "<<resultado<<endl<<endl;
    break;
    case 5:
    cout << "Saindo do programa.... "<<endl<<endl;
   break;
   default:
cout<<"Opção Invalida. "<<endl<<endl;
}
}while(opc != 5);
 return 0;
}

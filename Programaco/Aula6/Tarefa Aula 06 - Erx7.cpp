#include <cstdlib>
#include <locale.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    int cod, vf, quant;

    cout << "Escolha o código 100 para Cachorro Quente no valor R$9,20. " << endl;
     cout << "Escolha o código 101 para Bauru Simples no valor R$12,00. " << endl;
      cout << "Escolha o código 102 para Bauru com Ovo no valor R$13,00. " << endl;
       cout << "Escolha o código 103 para Hamburger no valor R$10,00. " << endl;
         cout << "Escolha o código 104 para Cheeseburguer no valor R$12,00. " << endl;
          cout << "Escolha o código 105 para Refrigerante Lata no valor R$5,00. " << endl;
            cout << "Escolha o código 106 para Água no valor R$3,00. " << endl;
             cin >>cod;

    switch(cod){

 case 100:
    cout << "Informe a Quantidade: " <<endl;
    cin >> quant;
    cout << "O valor final é: "<<quant * 9.2 << " reais" <<endl;
    break;

    case 101:
    cout << "Informe a Quantidade: " << endl;
    cin >> quant;
    cout << "O valor final é: "<< quant * 12 << " reais" <<endl;
    break;

     case 102:
    cout << "Informe a Quantidade: " <<endl;
    cin >> quant;
    cout << "O valor final é: "<< quant * 13 << " reais" <<endl;
    break;

    case 103:
    cout << "Informe a Quantidade: " <<endl;
    cin >> quant;
    cout << "O valor final é: "<< quant * 10 << " reais" <<endl;
    break;

    case 104:
    cout << "Informe a Quantidade: " <<endl;
    cin >> quant;
    cout << "O valor final é: "<< quant * 12 << " reais" <<endl;
    break;

    case 105:
    cout << "Informe a Quantidade: " <<endl;
    cin >> quant;
    cout << "O valor final é: "<< quant * 5 << " reais" <<endl;
    break;

    case 106:
    cout << "Informe a Quantidade: " <<endl;
    cin >> quant;
    cout << "O valor final é: "<< quant * 3 << " reais" <<endl;
    break;

    default:
        cout << "Opçâo inválida!! "<<endl;
    }

    return 0;
}

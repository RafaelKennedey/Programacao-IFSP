#include <cstdlib>
#include <locale.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    char nome[50];
    float valorI, valorF, des;

    cout << "Digite o nome do seu produto: " << endl;
    cin >> nome;

     cout << "Digite o valor do " << nome << endl;
    cin >> valorI;

    des = valorI*0.15;
    valorF = valorI - des;

    cout << "Produto: "<< nome << endl;
    cout << "Valor: "<< valorI << endl;
    cout << "Desconto: "<< des << endl;
    cout << "Valor final: "<< valorF << endl;


    return 0;
}

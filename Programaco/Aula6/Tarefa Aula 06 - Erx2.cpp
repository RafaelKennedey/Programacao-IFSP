#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <locale>
using namespace std;


int main(int argc, char** argv) {

    setLocale(LC_ALL, "Portuguese");

    cout << "Meu nome é: Rafael Kennedy de Oliveira Vaz" << endl;
    cout << "Sou do curso de Sistemas de Informação" << endl;
    cout << "Estou no primeiro ano" << endl;
    cout << "Gosto de programação!!!" << endl;


    return 0;
}


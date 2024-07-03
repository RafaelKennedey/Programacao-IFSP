#include <iostream>
#include <cstdlib>

using namespace std;

//	Faça um programa para ler N números inteiros – informe um de cada vez. A repetição será encerrada quando o usuário digitar o número 0.
//O programa deve informar quantos números foram digitados.

int main(int argc, char** argv) {

    int n, i=0;

    do{
        cout << "Informe numeros inteiros: " << endl;
        cin >> n;
        i++;
    }
    while(n!=0);

      cout << "A quantidade de numeros digitados e: " << i-1 << endl;

    return 0;

}

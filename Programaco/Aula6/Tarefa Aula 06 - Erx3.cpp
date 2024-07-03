#include <cstdlib>
#include <locale.h>
#include <cmath>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {


    float raio,area,peri;

    cout << "Digite o valor de um Raio: " << endl;
    cin >> raio;

    peri = 2*M_PI*raio;
    area = M_PI*pow(raio,2);

    cout << "A area do circulo com raio de "<< raio << " vai ser: "<< area << endl;

    cout << "O perimetro do circulo com raio de "<<raio<<" vai ser: "<< peri << endl;

    return 0;
}

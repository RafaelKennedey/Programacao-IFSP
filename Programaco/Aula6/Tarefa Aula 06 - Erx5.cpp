#include <cstdlib>
#include <locale.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    float n1;

    cout << "Digite um numero: " << endl;
    cin >> n1;

    if(n1>=0){
        cout << "O seu numero � positivo!!" <<endl;
    }
    else if(n1<0){
        cout << "O seu numero � negativo!!" <<endl;
    }

    return 0;
}

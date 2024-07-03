#include <cstdlib>
#include <locale.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    int i,n1, neg = 0;


    for(i=0;i<15;i++){
    cout << "Digite um numero: " << endl;
    cin >> n1;

    if(n1<0)
        neg += 1;
}
 cout << "A quantidade de numeros negativos digitados: " << neg << endl;
    return 0;
}

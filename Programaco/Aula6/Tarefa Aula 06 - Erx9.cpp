#include <cstdlib>
#include <locale.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    int n1;

    cout << "Digite um numero inteiro: " << endl;
    cin >> n1;

    if(n1>0 && n1%2==0){
            cout <<"O numero � par"<<endl;}

        else if(n1%2==1 && n1>0){
            cout << "O numero � impar" << endl;
    }


    else {
        cout << "Op�ao � inv�lido!!" <<endl;
    }

    return 0;
}

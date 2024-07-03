#include <cstdlib>
#include <locale.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    char sexo;
    float h,pi;

    cout << "Digite o seu sexo:  " << endl << "M-Masculino" << endl << "F-Feminino" << endl;
    cin >> sexo;
    sexo = toupper(sexo);
     cout << "Digite a sua altura: "  << endl;
    cin >> h;

    if(sexo =='F'){
        pi = (62.1*h)-44.7;
        cout << "Seu sexo é: " << sexo << endl;
        cout << "A sua altura é: "<< h << endl;
        cout << "O seu peso ideal é: " << pi << endl;
    }
    else if(sexo =='M'){
        pi = (72.7*h)-58;
        cout << "Seu sexo é: " << sexo << endl;
        cout << "A sua altura é: "<< h << endl;
        cout << "O seu peso ideal é: " << pi << endl;
    }


    return 0;
}

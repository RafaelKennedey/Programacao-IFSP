#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int senha;

    cout << "Digite sua senha: ";
    cin >> senha;

    if(senha == 1234){
        cout << "Senha Correta."<<endl;
    }
    else if(senha != 1234){
            cout << "Senha Incorreta."<<endl;
            cout << "Digite sua senha: ";
            cin >> senha;

            if(senha == 1234){
                cout << "Senha correta."<<endl;
            }
            else if(senha != 1234){
                    cout << "Senha Incorreta."<<endl;
                    cout << "Digite sua senha: ";
                    cin >> senha;

                    if(senha == 1234){
                        cout << "Senha correta."<<endl;
                    }
                    else{
                        cout << "Senha Incorreta."<<endl;
                    }
            }

    }


    return 0;
}

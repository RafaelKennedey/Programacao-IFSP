#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int i,tab;

    cout << "Informe um número para que seja apresentada a Tabuada: ";
    cin >> tab;
    cout << endl<<endl;
    cout << "Tabuada do "<<tab<<endl;
        cout << "***************************"<<endl;
    for(i=1;i<=10;i++){
         cout << i << " X " << tab << " = "<<i*tab<<endl;
    }
cout << "***************************"<<endl;


return 0;
}

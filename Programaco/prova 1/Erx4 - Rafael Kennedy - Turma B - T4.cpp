#include <cstring>
#include <iostream>
#include <locale>
using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");
int idade;

cout << "Digite a sua idade: "<<endl;
cin >> idade;

if(idade < 65){
cout << "Você será atendido nos caixas convencionais. "<<endl;
cout << "Dirija-se a um dos caixas: "<<endl;
cout << "Caixa 2;"<<endl;
cout << "Caixa 3;"<<endl;
cout << "Caixa 4;"<<endl;
}
else{
    cout << "Você pode ser atendido em fila preferêncial."<<endl<<endl;
    cout << "Direja-se ao caixa 1."<<endl;
}
return 0;
}

#include <cstring>
#include <iostream>
#include <locale>
using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

int n1,n2,n3,soma;
cout << "Digite o número de medalhas de OURO que o Brasil ganhou nas Olimpíadas: "<<endl;
cin >> n1;

cout << endl<< "Digite o número de medalhas de PRATA que o Brasil ganhou nas Olimpíadas: "<<endl;
cin >> n2;

cout << endl<< "Digite o número de medalhas de BRONZE que o Brasil ganhou nas Olimpíadas: "<<endl;
cin >> n3;

soma = n1+n2+n3;

cout << endl<< "O Brasil ganhou "<<soma<<" medalhas nas Olimpíadas." << endl;
 return 0;
}

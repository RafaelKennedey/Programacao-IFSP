#include <cstring>
#include <iostream>
#include <locale>
using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

int n1,n2,n3,soma;
cout << "Digite o n�mero de medalhas de OURO que o Brasil ganhou nas Olimp�adas: "<<endl;
cin >> n1;

cout << endl<< "Digite o n�mero de medalhas de PRATA que o Brasil ganhou nas Olimp�adas: "<<endl;
cin >> n2;

cout << endl<< "Digite o n�mero de medalhas de BRONZE que o Brasil ganhou nas Olimp�adas: "<<endl;
cin >> n3;

soma = n1+n2+n3;

cout << endl<< "O Brasil ganhou "<<soma<<" medalhas nas Olimp�adas." << endl;
 return 0;
}

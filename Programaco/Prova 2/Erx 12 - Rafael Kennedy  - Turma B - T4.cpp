#include<iostream>
#include<locale>
/*12.	Escrever um programa em C++ para calcular o IMC de N pessoas.
Para cada pessoa deverá ser solicitado o nome, peso e altura.
(utilize função e struct para fazer o programa). IMC = peso / altura2.*/
using namespace std;

float IMC(float x,float y){
float res;
res =x / (y*y);
return res;
}
int main(){
setlocale(LC_ALL, "Portuguese");
int i,n;
cout << "Programa feito para calcular IMC!!!"<<endl<<endl;
cout << "Informe a quantidade de pessoas: ";
cin >> n;
struct EstruturaIMC{
float peso;
float alt;
char nome[30];
}strIMC[n];

fflush(stdin);
for(i=0;i<n;i++){
cout << "Informe seu nome: ";
cin.getline(strIMC[i].nome,30);
fflush(stdin);
cout << "Informe o seu peso: ";
cin >> strIMC[i].peso;
fflush(stdin);
cout << "Informe a sua altura: ";
cin >> strIMC[i].alt;
fflush(stdin);
cout << "O Imc é: "<<IMC(strIMC[i].peso,strIMC[i].alt) << endl;
cout << endl;
}

return 0;
}

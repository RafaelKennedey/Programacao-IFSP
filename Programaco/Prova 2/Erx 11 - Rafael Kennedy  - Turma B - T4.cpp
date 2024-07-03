#include<iostream>
#include<locale>
/*11.	Escrever um programa em C++ para calcular o IMC de uma pessoa
(utilize função para fazer o programa). IMC = peso / altura2.*/
using namespace std;

float IMC(float x,float y){
float res;
res =x / (y*y);
return res;
}
int main(){
setlocale(LC_ALL, "Portuguese");

float peso,alt;

cout << "Informe o seu peso: ";
cin >> peso;

cout << "Informe a sua altura: ";
cin>>alt;

cout << "O Imc é: "<<IMC(peso,alt) << endl;
return 0;
}

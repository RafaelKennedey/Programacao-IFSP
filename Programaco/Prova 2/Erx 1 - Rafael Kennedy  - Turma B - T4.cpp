#include<iostream>
#include<locale>
/*1.	Escreva um programa em C++ para armazenar 10 números em um vetor.
Imprima os números do vetor. Calcule e imprima a soma desses números. */
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

int i, vetor[10],soma=0;

for(i=0;i<10;i++){
    cout << "Informe o "<<i+1<<" número: ";
    cin>>vetor[i];
    soma = soma + vetor[i];
}
cout <<endl;
cout << "Os valores digitados são: ";
for(i=0;i<10;i++){
    cout << vetor[i] << " - ";
}
cout <<endl << "A soma dos números é: " << soma << endl;
return 0;
}

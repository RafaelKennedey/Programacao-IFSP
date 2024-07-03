#include<iostream>
#include<locale>

using namespace std;
/*3.	Escreva um programa em C++ para receber números para preencher dois vetores de tamanho 10.
Imprima os vetores. Faça a multiplicação de um por outro e imprima o resultado da multiplicação.*/


int main(){
setlocale(LC_ALL, "Portuguese");

int vetor[10], vetor1[10], i;

for(i=0;i<10;i++){
    cout << "Informe o " << i+1 << " número do vetor 1: ";
    cin >> vetor[i];
}
cout << endl;
for(i=0;i<10;i++){
    cout << "Informe o " << i+1 << " número do vetor 2: ";
    cin >> vetor1[i];
}
cout << endl;
cout << "Os valores digitados do vetor 1 são: ";
for(i=0;i<10;i++){
    cout << vetor[i] << " - ";
}
cout << endl;
cout << "Os valores digitados do vetor 2 são: ";
for(i=0;i<10;i++){
    cout << vetor1[i] << " - ";
}
cout << endl;
cout << "A multiplicação dos vetores são: ";
for(i=0;i<10;i++){
    cout << vetor[i]*vetor1[i] << " - ";
}

cout << endl;
return 0;
}

#include<iostream>
#include<locale>

using namespace std;
/*3.	Escreva um programa em C++ para receber n�meros para preencher dois vetores de tamanho 10.
Imprima os vetores. Fa�a a multiplica��o de um por outro e imprima o resultado da multiplica��o.*/


int main(){
setlocale(LC_ALL, "Portuguese");

int vetor[10], vetor1[10], i;

for(i=0;i<10;i++){
    cout << "Informe o " << i+1 << " n�mero do vetor 1: ";
    cin >> vetor[i];
}
cout << endl;
for(i=0;i<10;i++){
    cout << "Informe o " << i+1 << " n�mero do vetor 2: ";
    cin >> vetor1[i];
}
cout << endl;
cout << "Os valores digitados do vetor 1 s�o: ";
for(i=0;i<10;i++){
    cout << vetor[i] << " - ";
}
cout << endl;
cout << "Os valores digitados do vetor 2 s�o: ";
for(i=0;i<10;i++){
    cout << vetor1[i] << " - ";
}
cout << endl;
cout << "A multiplica��o dos vetores s�o: ";
for(i=0;i<10;i++){
    cout << vetor[i]*vetor1[i] << " - ";
}

cout << endl;
return 0;
}

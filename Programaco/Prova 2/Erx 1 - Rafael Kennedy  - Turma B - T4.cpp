#include<iostream>
#include<locale>
/*1.	Escreva um programa em C++ para armazenar 10 n�meros em um vetor.
Imprima os n�meros do vetor. Calcule e imprima a soma desses n�meros. */
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

int i, vetor[10],soma=0;

for(i=0;i<10;i++){
    cout << "Informe o "<<i+1<<" n�mero: ";
    cin>>vetor[i];
    soma = soma + vetor[i];
}
cout <<endl;
cout << "Os valores digitados s�o: ";
for(i=0;i<10;i++){
    cout << vetor[i] << " - ";
}
cout <<endl << "A soma dos n�meros �: " << soma << endl;
return 0;
}

#include<iostream>
#include<locale>

using namespace std;
/*Escreva um programa em C++  para armazenar 8 n�meros em um vetor e imprimir todos os n�meros.
Verifique quantos desses n�meros s�o m�ltiplos de 3. Imprima essa quantidade*/

int main(){
setlocale(LC_ALL, "Portuguese");

int vetor[8], i,mul=0;

for(i=0;i<8;i++){
    cout << "Informe o "<<i+1<<" n�mero: ";
    cin >> vetor[i];
    if(vetor[i] % 3 == 0){
        mul += 1;
    }
}
cout <<endl<< "Os valores digitados s�o: ";
for(i=0;i<8;i++){
    cout << vetor[i] << " - ";
}
cout << endl << endl << "Foram digitados "<< mul << " que s�o multiplo de 3."<<endl<<endl;
return 0;
}

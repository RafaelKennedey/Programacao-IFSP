#include<iostream>
#include<locale>

using namespace std;
/*Escreva um programa em C++  para armazenar 8 números em um vetor e imprimir todos os números.
Verifique quantos desses números são múltiplos de 3. Imprima essa quantidade*/

int main(){
setlocale(LC_ALL, "Portuguese");

int vetor[8], i,mul=0;

for(i=0;i<8;i++){
    cout << "Informe o "<<i+1<<" número: ";
    cin >> vetor[i];
    if(vetor[i] % 3 == 0){
        mul += 1;
    }
}
cout <<endl<< "Os valores digitados são: ";
for(i=0;i<8;i++){
    cout << vetor[i] << " - ";
}
cout << endl << endl << "Foram digitados "<< mul << " que são multiplo de 3."<<endl<<endl;
return 0;
}

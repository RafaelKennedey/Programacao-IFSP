#include<iostream>
#include<locale>
/*5.	Escreva um programa em C++  que seja capaz de criar um vetor contendo os seguintes números,
 nessa ordem: 10,9,8,7,6,5,4,3,2,1. Exiba o vetor e também a ordem inversa desse vetor.*/
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
int vetor[10] = {10,9,8,7,6,5,4,3,2,1}, i;

for(i=0;i<10;i++){
    cout << vetor[i] <<" - ";
}
cout << endl;
for(i=9;i >=0; i--){
    cout << vetor[i] << " - ";
}
return 0;
}

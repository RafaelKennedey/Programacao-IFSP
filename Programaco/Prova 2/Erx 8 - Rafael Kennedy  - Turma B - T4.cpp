#include<iostream>
#include<locale>
/*8.Escreva um programa em C++ que receba do usuário números reais e preencha uma matriz 4x5.
Gere e armazene em uma outra matriz a metade da primeira (a metade de cada número armazenado na matriz original).
Imprima as duas matrizes.*/
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

float mat[4][5];
int i,j;

for(i=0;i<4;i++){
    for(j=0;j<5;j++){
        cout << "Informe o número [" << i <<","<<j<<"]: ";
        cin >> mat[i][j];
    }
}
cout << endl;
cout << "Os valores da matriz é: "<<endl;
for(i=0;i<4;i++){
    for(j=0;j<5;j++){
        cout << mat[i][j] << "\t";
    }cout << endl;
}
cout << endl;
cout << "Os valores da matriz divido é: "<<endl;
for(i=0;i<4;i++){
    for(j=0;j<5;j++){
        cout << mat[i][j]/2 << "\t";
    }cout << endl;
}




return 0;
}

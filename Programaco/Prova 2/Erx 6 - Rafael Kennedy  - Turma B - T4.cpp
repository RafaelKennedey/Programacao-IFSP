#include<iostream>
#include<locale>
/*6.	Escreva um programa em C++ que receba números e os armazene em uma matriz 4X4. Imprima a matriz.*/
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
int mat[4][4],i,j;

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        cout << "Informe o número ["<<i << ","<<j<<"]: " ;
        cin >> mat[i][j];
    }
}
cout << endl;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        cout << mat[i][j]<< "\t";
    }cout << endl;
}

return 0;
}

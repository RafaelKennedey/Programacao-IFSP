#include<iostream>
#include<locale>
/*4.Escreva um programa em C++  para armazenar notas das P1 e P2 de 15 alunos (2 vetores).
Calcular a m�dia e armazenar em outro vetor. Verificar tamb�m a situa��o do aluno (Aprovado ou Reprovado).
Imprimir as notas, a m�dia e situa��o de cada aluno.*/
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

float p1[5], p2[5], med[5];
int i;

for(i=0;i<5;i++){
        cout << "Aluno " << i+1 << ": "<<endl;
    cout << "Informe a sua primeira nota: ";
    cin >> p1[i];
    cout << "Informe a sua segunda nota: ";
    cin >> p2[i];
cout << endl;

    med[i] = (p1[i]+ p2[i])/2;
}

for(i=0;i<5;i++){
    cout << endl << "Aluno " << i+1 << ": " << endl << "P1 = " << p1[i] << endl << "P2 = " << p2[i] << endl << "m�dia = " << med[i]<< endl;
    if(med[i] >= 6){
        cout << "Aprovado!!" << endl;
    }
    else{
        cout << "Reprovado /:" << endl;
    }

}
return 0;
}

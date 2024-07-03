#include<iostream>
#include<locale>
#include<fstream>
/*13.	Escrever um programa em C++ para calcular o IMC de N pessoas.
Para cada pessoa deverá ser solicitado o nome, peso e altura.
(utilize função e struct para fazer o programa).
IMC = peso / altura2. Além de mostrar os dados na tela,
o programa também deverá armazenar o IMC de cada pessoa em um arquivo.txt..*/
using namespace std;

float IMC(float x,float y){
float res;
res =x / (y*y);
return res;
}
int main(){
setlocale(LC_ALL, "Portuguese");

fstream arq;
arq.open("IMC.txt",ios::out | ios::app);
if (arq.is_open()){
 int i,n;
cout << "Programa feito para calcular IMC!!!"<<endl<<endl;
cout  << "Informe a quantidade de pessoas: ";
cin >> n;
struct EstruturaIMC{
float peso;
float alt;
char nome[30];
}strIMC[n];

fflush(stdin);
for(i=0;i<n;i++){
cout  << "Informe seu nome: ";
cin.getline(strIMC[i].nome,30);
fflush(stdin);
cout  << "Informe o seu peso: ";
cin >> strIMC[i].peso;
fflush(stdin);
cout  << "Informe a sua altura: ";
cin >> strIMC[i].alt;
fflush(stdin);
cout  << "O Imc é: "<<IMC(strIMC[i].peso,strIMC[i].alt) << endl;
cout  << endl;
}
for(i=0;i<n;i++){
arq  << "Nome: " << strIMC[i].nome<<endl;
arq  << "Peso: " << strIMC[i].peso<<endl;
arq  << "Altura: "<<strIMC[i].alt<<endl;
arq  << "IMC: "<<IMC(strIMC[i].peso,strIMC[i].alt) << endl<<endl;
cout  << endl;
}
}
else{
arq <<"Erro!!, arquirvo não existe!!!"<<endl;
}
arq.close();
return 0;
}

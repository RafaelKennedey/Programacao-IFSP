#include<iostream>
#include<locale>
#include<fstream>

/*10.	Escreva um programa em C++ que receba do usuário dados de um PET
(nome do animal, espécie, raça, sexo, idade, nome do dono, rg do dono, telefone do dono).
O programa deve solicitar os dados de N PETs e salvar os dados cadastrados em um arquivo.TXT*/
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
int n,i;
cout << "Programa feito para cadastrar Pets!!" << endl << endl;

cout << "Informe a quantidade de animais a ser cadastrado: ";
cin >> n;

struct EstruturaPets{
char nome[20],especie[10],raca[15],sexo[10],dono[20],rg[20],tel[15];
int idade;
}strPet[n];
fflush(stdin);
cout <<endl;
for(i=0;i<n;i++){
    cout << "Informe o nome do seu animal: ";
    cin.getline(strPet[i].nome,20);
    fflush(stdin);
    cout << "Informe a espécie do animal: ";
    cin.getline(strPet[i].especie,10);
    fflush(stdin);
    cout << "Informe a Raça do animal: ";
    cin.getline(strPet[i].raca,15);
    fflush(stdin);
    cout << "Informe o sexo do animal: ";
    cin.getline(strPet[i].sexo,10);
    fflush(stdin);
    cout << "Informe a idade do animal: ";
    cin >> strPet[i].idade;
    fflush(stdin);
    cout << "Informe seu nome: ";
    cin.getline(strPet[i].dono,20);
    fflush(stdin);
    cout << "Informe o seu RG: ";
    cin.getline(strPet[i].rg,20);
    fflush(stdin);
    cout << "Informe o seu Telefone: ";
    cin.getline(strPet[i].tel,15);
    fflush(stdin);
    cout << endl;
}
cout << endl;
for(i=0;i<n;i++){
         fstream arq; //fstream - leitura e escrita
 arq.open ("pets.txt", ios::out | ios::app); //abre para escrita (ios::out)
 if (arq.is_open()) {
    arq << "Nome do animal: "<<strPet[i].nome<<endl;
    arq  << "Especie do animal: "<<strPet[i].especie<<endl;
    arq  << "Raça do animal: "<<strPet[i].raca<<endl;
    arq  << "Sexo do animal: "<<strPet[i].sexo<<endl;
    arq  << "idade do animal: "<<strPet[i].idade<<endl;
    arq  << "Nome do Dono: "<<strPet[i].dono<<endl;
    arq  << "RG do Dono: "<<strPet[i].rg<<endl;
    arq  << "Telefone do Dono: "<<strPet[i].tel<<endl;
    arq  << endl;
arq.close();

} else {
 cout << "ERRO: arquivo não foi aberto ou não existe" << endl;
 }
}
return 0;
}

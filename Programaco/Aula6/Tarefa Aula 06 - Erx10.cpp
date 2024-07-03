#include <cstdlib>
#include <locale.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    char vp[50];
    float n1,n2,n3,md;

    cout << "Digite a sua matricula " << endl;
    cin >> vp;

    cout << "Digite a sua primeira nota: " << endl;
    cin >> n1;

     cout << "Digite a sua segunda nota: " << endl;
    cin >> n2;

     cout << "Digite a sua terceira nota: " << endl;
    cin >> n3;

    md = (n1+n2*2+n3*3)/6;

    if(md >=9){
        cout << "Parabens!! " << vp << " Voce obteve as notas: " << endl << n1 <<", "<< n2 <<", "<< n3 <<". " << endl <<" A sua média de aproveitamento é: " <<md << endl << "Logo possui concenito A e assim foi aprovado!!." << endl;
    }
    else if(md <9 && md >=7.5){
        cout << "Parabens!! " << vp << " Voce obteve as notas: " << endl << n1 <<", "<< n2 <<", "<< n3 <<". " << endl <<" A sua média de aproveitamento é: " <<md << endl << "Logo possui concenito B e assim foi aprovado!!." << endl;
    }
    else if(md <7.5 && md >= 6){
        cout << "Parabens!! " << vp << " Voce obteve as notas: " << endl << n1 <<", "<< n2 <<", "<< n3 <<". " << endl <<" A sua média de aproveitamento é: " <<md << endl << "Logo possui concenito C e assim foi aprovado!!." << endl;
    }
    else if(md <6 && md >4){
        cout << "Infelizmente " << vp << " Voce obteve as notas: " << endl << n1 <<", "<< n2 <<", "<< n3 <<". " << endl <<" A sua média de aproveitamento é: " <<md << endl << "Logo possui concenito D e assim foi Reprovado!!." << endl;
    }
      else if(md <4 && md >=0){
        cout << "Infelizmente " << vp << " Voce obteve as notas: " << endl << n1 <<", "<< n2 <<", "<< n3 <<". " << endl <<" A sua média de aproveitamento é: " <<md << endl << "Logo possui concenito E e assim foi Reprovado!!." << endl;
    }


    return 0;
}

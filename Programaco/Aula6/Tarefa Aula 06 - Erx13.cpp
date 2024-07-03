#include <cstdlib>
#include <locale.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    float  md =0,mf,par=0;
    int i,n1;

    for(i=0;i<20;i++){
    cout << "Digite sua nota: " << endl;
    cin >> n1;
if(n1>=0 && n1%2==0){
    par += 1;
    md = md + n1;
    mf= md/par;
}


}

 cout << "A media aritimetica dos numeros pares: " << mf << endl;

    return 0;
}

#include <cstdlib>
#include <locale.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    float  sal,mds =0,maiors,ts,tf;
    int i,fil,mdf =0;

    for(i=0;i<20;i++){
    cout << "Digite seu salario: " << i+1 << endl;
    cin >> sal;

    cout << "Digite a quantidade de filhos " << i+1 << endl;
    cin >> fil;

    ts += sal;
    tf += fil;
    mds = ts /20;
    mdf = tf /20;

      if(sal > maiors)
        maiors = sal;
}
  cout << "A media do salario é: " << mds << endl;
      cout << "A media dos filhos é: " << mdf << endl;
      cout << "O maior salario: " << maiors << endl;
    return 0;
}

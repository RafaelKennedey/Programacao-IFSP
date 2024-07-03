#include <iostream>
#include <cstdlib>

using namespace std;
/*⦁	Escreva um programa para exibir os números contidos no intervalo de n a m, inclusive.
n e m devem ser valores informados pelo usuário (os números devem ser exibidos em ordem crescente).
int main(int argc, char** argv) */
int main(int argc, char** argv){

    int i, m,n;
      cout << "Informe dois numeros para que possa fazer um intervalo com esse numeros: " << endl;
      cout << "Digite o primeiro numero: " << endl;
      cin >> m;
      cout << "Digite o primeiro numero: " << endl;
      cin >> n;

    cout << endl;
if(m>=n){
   for(i=n; i <= m ;i++){
        cout << i << endl;}
}
else if(n>=m){
      for(i=m; i <= n ;i++){
        cout << i << endl;}
}


    return 0;

}

#include <iostream>
#include <locale>

using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
    int i,j;
    int matriz[6][6];

    for(i=0; i < 6; i++){
        for(j=0; j < 6; j++){
            cout << "Digite um valor para a posição " << i+1 << ", " << j+1 << " da matriz: ";
            cin >> matriz[i][j];
        }
    }
cout << endl;
cout << "Os valores das matrizes são: " << endl;

for(i=0; i < 6; i++){
        for(j=0; j < 6; j++){
                cout << matriz[i][j] << "\t";
        }cout << endl;
}
cout << endl;
cout << "Os valores da diagonal secundária são: " << endl;

for(i=0; i < 6; i++){
        for(j=0; j < 6; j++){
                if(j == 5-i){
                    cout << matriz[i][j] << "\t";
                }
                else if (j != 5-i){
                    cout << "     ";
                }
        }cout << endl;
}


return 0;
}

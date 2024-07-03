#include <cstdlib>
#include <locale.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    float n1, md =0,mf;
    int i;

    for(i=0;i<20;i++){
    cout << "Digite sua nota: " << endl;
    cin >> n1;
if(n1>0)
    md +=n1 ;
    mf= md/20;

}
 cout << "A media aritimetica: " << mf << endl;
    return 0;
}

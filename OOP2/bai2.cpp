#include <iostream>
#include <string>

using namespace std;


void canh_tren(){
     for ( int i = 0; i < 4; i++) {
        cout << "+ - - - - ";
     }
    cout << "+" << endl ;

    }
void cot() {
     for ( int i = 0; i < 4; i++) {
        cout << "|         ";

     }
    cout << "|" << endl;
}
void ve() {
    for ( int i = 0; i < 4; i++) {
        
    
    canh_tren();
    for ( int i = 0; i < 4; i++) {
    cot();
    }

    }
}

    int main () {
        ve();
        canh_tren();
    return 0 ;
    }
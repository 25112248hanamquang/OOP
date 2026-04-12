#include<iostream>
using namespace std;

void print_horizontal(){
    cout << "+ - - - - + - - - - +" << endl;
}
void print_vertical(){
    cout << "|         |         |" << endl;
}
void draw_grid(){
    print_horizontal();
    for ( int i = 0; i < 4; i++) {
        print_vertical();
    }
    print_horizontal();
    for ( int i = 0; i < 4; i++) {
        print_vertical();
    }
    print_horizontal();
}
int main(){
    draw_grid();
    return 0 ;
}

    









    
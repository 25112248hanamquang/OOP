#include <iostream>
#include <iomanip>
using namespace std ;
int main (){
    int sophut = 42;
    int sogiay = 42 ;
    int tongsogiay = sophut * 60 + sogiay ;
    cout << "Tong so giay la : " << tongsogiay << " " << "giay" << endl ;


    double kilometers = 10.0 ;
    double miles = kilometers / 1.61 ;
    cout << "so miles la :" << miles << " "<< "miles"<< endl;


    int tocdotrungbinh = tongsogiay / ( kilometers / 1.61 ) ;
     int phut = tocdotrungbinh / 60 ; ;
        int giay = tocdotrungbinh % 60 ;
           cout << " toc do trung binh la : " << phut << " " << "phut" << " "<< giay << " " << "giay" << endl ;
 
    double vantoc;
    double hour ;
    hour = tongsogiay / 3600.0 ; 
    vantoc =   miles / hour ;

   cout << " van toc la : " << vantoc << " " << " miles per hour " << endl ;

    return 0 ;
}


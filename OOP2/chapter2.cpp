#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ;
int main() {
    // bai 1
    double volume; 
    double radius;
    double pi = 3.14159;
    radius = 5.0;
    volume = 4/3 * pi * pow ( radius , 3 );
    cout << fixed << setprecision(2);
    cout << " the tich hinh cau la : " << volume << endl;
    // bai 2
    int sach = 60;
    double discount = 0.40;
    double tien_1_sach = 24.95;
    
    double tong_tien_sach_saugiam =sach * tien_1_sach * ( 1- discount );
    double phi_van_chuyen = 3 + 0.75 * (sach -1 );
    double tongtien = tong_tien_sach_saugiam + phi_van_chuyen;
    cout << " tong tien phai tra la : " << tongtien<< endl;
    // bai3 

 int start_hour = 6;
    int start_minute = 52;

    
    int easy_pace_sec = 8 * 60 + 15;
    int tempo_pace_sec = 7 * 60 + 12;

    int total_run_seconds = (easy_pace_sec * 2) + (tempo_pace_sec * 3);

    
    int run_minutes = total_run_seconds / 60;
    int run_seconds = total_run_seconds % 60;

    
    int end_minute = start_minute + run_minutes;
    int end_hour = start_hour + (end_minute / 60);
    end_minute = end_minute % 60;

    cout << "3. Thoi gian ban ve den nha an sang la: " 
         << end_hour << ":" << setfill('0') << setw(2) << end_minute << " AM" << endl;
         
         return 0;




}

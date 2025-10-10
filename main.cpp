#include <iostream>
using namespace std;

int main(){

    const double KMH_TO_MPH = 0.621371;
const double MPH_TO_KMH = 1.60934;

double convertKmToMph(double kmh) {
    return kmh * KMH_TO_MPH;
}

double convertMphToKmh(double mph) {
    return mph * MPH_TO_KMH;
}
int choice;
double speed;

cout << "===============================" << endl;
cout << "   KONVERSI KECEPATAN C++ APP  " << endl;
cout << "===============================" << endl;
cout << "1. Konversi dari Km/h ke Mph" << endl;
cout << "2. Konversi dari Mph ke Km/h" << endl;
cout << "===============================" << endl;
cout << "Masukkan pilihan (1 atau 2): ";
cin >> choice;

cout << fixed << setprecision(2);
    
if (choice == 1) {
    cout << "Masukkan kecepatan (Km/h): ";
    cin >> speed;
    cout << speed << " Km/h = " << convertKmToMph(speed) << " Mph" << endl;
}
else if (choice == 2){
    cout << "Masukan kecepatan (Mph): ";
    cin >> speed;
    cout << speed << " Mph =" << convertMphToKmh(speed) << "Km/h" << endl;
}
else {
    cout << "Pilihan tidak valid! Silakan pilih 1 atau 2" << endl;
}
cout << "==============================" << endl;
cout << "Terima kasih telah menggunakan aplikasi ini!" << endl;
  return 0;
    
}



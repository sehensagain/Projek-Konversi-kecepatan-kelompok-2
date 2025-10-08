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

return 0;
}
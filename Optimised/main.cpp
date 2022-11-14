#include <iostream>
using namespace std;

double inputHight;
double inputWeight;

double bmiCalc(double ,double);

int main() {
    cout << "Koerpergroesse eingeben: ";
    cin >> inputHight;

    cout << "\nGewicht eingeben: ";
    cin >> inputWeight;

    cout << "Ihr BMI betraegt: " << bmiCalc((inputHight), inputWeight);
    return 0;
}

double bmiCalc(double inputHight,double inputWeight) {
    return double(inputWeight / double((inputHight/100)*inputHight/100));
}

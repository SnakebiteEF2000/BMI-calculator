#include <iostream>

double inputHight  = 0;
double inputWeight = 0;

double bmiCalc(double inputHight,double inputWeight) {
    // Bmi calculation
    inputHight /= 100;
    double calcHight;
    calcHight = inputHight*inputHight;
    double bmi = inputWeight / calcHight;

    //Debug output
    /*std::cout <<"\nDEBUG:"<<inputHight <<std::endl;
    std::cout <<"DEBUG:"<<inputWeight <<std::endl;
    std::cout <<"DEBUG Heightsquared: " <<calcHight<<std::endl;
    std::cout <<"DEBUG bmi: " <<bmi<<std::endl;*/
    return double(bmi);
}

int main() {
    std::cout << "Koerpergroesse eingeben: " ;//<< std::endl;
    std::cin  >> inputHight;
    std::cout << "\nGewicht eingeben: " ;//<< std::endl;
    std::cin  >> inputWeight;

    std::cout <<"Ihr BMI betraegt: "<< bmiCalc(inputHight,inputWeight);
    return 0;
}


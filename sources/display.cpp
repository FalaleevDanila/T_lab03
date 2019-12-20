//
// Created by danila on 15.10.2019.
//

#include <iostream>
#include <iomanip>
#include "../includes/display.h"


void headDisplay(){
    std::cout<<std::setw(10) << " N |" <<
               std::setw(17) << " t |" <<
               std::setw(12) << " x |" <<
               std::setw(17) << " f(x) |" <<
               std::setw(17) << " P |"<<
               std::setw(12) <<" success? |"<<
               std::setw(12) <<" x_best |" <<
               std::setw(15) <<" f(x_best) |"<<std::endl;
    std::cout << std::endl;
}

void mainDisplay(int numberOfIteration, double temperature, double newX, double newxFunction,
        double p, char w, double x, double xFunction ){
    std::cout<<std::setw(8) << std::fixed << numberOfIteration << " |" <<
               std::setw(15) << temperature << " |" <<
               std::setw(10)  << newX << " |" <<
               std::setw(15) << newxFunction << " |";
               std::cout<< std::setw(15) << p  << " |" <<
               std::setw(10) << w << " |" <<
               std::setw(10) << x << " |" <<
               std::setw(13) << xFunction << " |" << std::endl;
}

void resultDisplay(double xMin, double fMin){
    std::cout << std::endl <<" Result: Xmin = "<< xMin << " Fmin " << fMin << std::endl << std::endl;
}


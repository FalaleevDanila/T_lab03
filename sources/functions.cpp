//
// Created by danila on 15.10.2019.
//

#include <cmath>
#include "../includes/functions.h"


double function1(double x){

    return (5 * cos(x)+x+sqrt(x));
}

double function2(double x){
    return sin(5*x)*function1(x);
}
#include <cstdlib>
#include <cmath>
#include <random>
#include <time.h>
#include "includes/display.h"
#include "includes/functions.h"


void counter(double (*function)(double))
{

    double temperature = 10000;
    double minTemperature = 0.01;
    double delta = 0;
    srand(time(NULL));
    int numberOfIteration = 1;
    char w='Y';
    double x = (rand() % 5000) / 1000. + 2;
    headDisplay();
    do {
        double newX = (rand() % 400) / 100. + 2.;
        std::mt19937 gen(std::random_device{}());

        delta = function(newX) - function(x);

        double p1 = exp((delta)/temperature);
        double p2 = std::uniform_real_distribution<double>{0, 1}(gen);

        if(delta >=0){
            x = newX;
            w='Y';
            p1 = 1;
        }
        else if(p2 < p1){
            x = newX;
            w = 'Y';
        }
        else w='N';
        mainDisplay(numberOfIteration, temperature, newX, function(newX), p1,w, x, function(x));
        temperature*=0.95;
        ++numberOfIteration;
    } while(temperature > minTemperature);
    resultDisplay(x,function(x));

}

int main() {

    counter(function1);
    counter(function2);

    return 0;
}
#include <iostream>
#include "myConstants.h"


double getInitialHeight()
{
    std::cout << "Enter the height of the tower in meters : ";
    double initialHeight;
    std::cin >> initialHeight;
    return initialHeight;
}

double calculateHeight(double initialHeight, int second)
{
    double currentHeight;
    currentHeight = initialHeight- myConstants::gravity*second*second/2;
    return currentHeight;
}

void printHeight(double height, int second)
{
    if (height > 0)
        std::cout << "At " << second << " seconds, the ball is at " <<height << " meters." <<std::endl;
    else
        std::cout << "The ball is on the ground" << std::endl;
}
 void calculateAndPrintHeight(double initialHeight, int second)
 {
     double height = calculateHeight(initialHeight, second);
     printHeight(height, second);
     while (height > 0)
     {
        second++;
        height = calculateHeight(initialHeight, second);
        printHeight(height, second);
     }
 }
int main()
{
    const double initialHeight {getInitialHeight()};
    int time{0};
    calculateAndPrintHeight(initialHeight, time);
    return 0;



}

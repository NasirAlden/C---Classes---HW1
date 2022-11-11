#include <iostream>
#include "Car.h"

Car::Car(unsigned int carNum) {
	KM = 0;
	carNum = carNum;
	tripsCount = 0;
}

void Car::trip(int km) {
	KM += km;
	tripsCount++;
}
void Car::carStatus(){
	std::cout << "Car Num: " << carNum << ", Car Distance: " << KM;
	std::cout << ", Car Trips: " << tripsCount;
	std::cout<<", Average distance per trip: " << (KM / tripsCount) << "\n";
}
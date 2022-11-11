#pragma once
class Car
{
public:
	int KM;
	char color[10];
	unsigned int carNum;
	int seatsCount;
	int tripsCount;

	Car(unsigned int carNum);
	void trip(int km);
	void carStatus();
};


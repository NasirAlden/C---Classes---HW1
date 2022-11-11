#pragma warnings(disable:4996)
#include <iostream>
#include "Ball.h"
#include "Car.h"
#include "Blog.h"
#include "C++ - Classes - HW1.h"
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	//Exercise 1:
	std::cout << "Exercise 1:\n";
	Ball ball1;
	Ball ball2;

	strcpy_s(ball1.color,"Red");
	int score = ball1.inBasketFoulLine(5)+ball2.inBasketTwo(6)+ball2.inBasketThreeLine(3);
	std::cout<<"Player Score: " << score<<"\n";
	std::cout << "\n*************************************\n";
	
	//*******************************
	//Exercise 2:
	std::cout << "Exercise 2:\n";
	Car c1(123315);
	Car c2(155656);
	Car c3(4866654);
	c1.trip(11);c1.trip(4);c1.trip(89);c1.trip(71);c1.trip(8);
	c2.trip(51);c2.trip(84);c2.trip(19);c2.trip(7);c2.trip(98);
	c3.trip(8);c3.trip(4);c3.trip(49);c3.trip(6);c3.trip(19);

	c1.carStatus();
	std::cout << "------------------------------\n";
	c2.carStatus();
	std::cout << "------------------------------\n";
	c3.carStatus();

	//*******************************
	//Exercise 3:
	std::cout << "\n*************************************\n";
	std::cout << "Exercise 3:\n";

	Blog myBlog(1000);
	myBlog.addLine();
	myBlog.addLine();
	myBlog.printBlog();
	myBlog.saveToFile();
	myBlog.addLine();
	myBlog.addLine();
	myBlog.loadFromFile();
	myBlog.printBlog();
	return 0;
}



#pragma once
class Ball
{
public:
	char color[10];
	float weight;
	float price;

	/*void Ball() {
	
	}*/

	int inBasketThreeLine(int inBasket);

	int inBasketTwo(int inBasket);

	int inBasketFoulLine(int inBasket);
};


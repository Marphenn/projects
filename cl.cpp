#include <iostream>
#include <string>
#include "Product.h"

#define N 3

using namespace std;

//5 вариант
int main()
{
	/*
	Product chocolate(1, "Chocolate", 2), apple;
	getInfo(chocolate);
	getInfo(apple);

	Seller seller;
	seller.setCost(chocolate);

	seller.setId(apple);
	seller.setName(apple);
	seller.setCost(apple);

	system("CLS");
	getInfo(chocolate);
	getInfo(apple);
	*/

	Product products[N];
	Seller seller;

	while (1)
	{
		for (int i = 0; i < N; i++)
		{
			seller.setName(products[i]);
			seller.setId(products[i]);
			seller.setCost(products[i]);
		}

		for (int j = 0; j < N; j++)
		{
			getInfo(products[j]);
		}

		int choice;
		cout << "Do you want to change the data again?\n1 - yes\n2- no" << endl;
		cin >> choice;
		if (choice == 2) break;
		else
		{
			cin.clear();
			cin.ignore(327767, '\n');
			//system("CLS");
		}
	}

	getInfo(products[0]);
	getInfo(products[1]);
	getInfo(products[2]);

	return 0;
}
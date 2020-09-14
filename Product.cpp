#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

Product::Product()
{
	cout << "Object created..." << endl;
	id = 0;
	name = "";
	cost = 0;
}

Product::Product(int i, string n, double c)
{
	cout << "Object created..." << endl;
	id = i;
	name = n;
	cost = c;
}

Product::~Product() {
	cout << "Object destroyed..." << endl;
}

void Product::getId()
{
	cout << "ID:\t" << id << endl;
}

void Product::getName()
{
	cout << "NAME:\t" << name << endl;
}

void Product::getCost()
{
	cout << "COST:\t" << cost << endl;
}

void getInfo(Product&object)
{
	cout << "===================================================================" << endl;
	cout << "ID:\t" << object.id << endl;
	cout << "NAME:\t" << object.name << endl;
	cout << "COST:\t" << object.cost << endl;
	cout << "===================================================================" << endl;
}

void Seller::setId(Product& object) {
	while (1) // проверка на ввод ID (ID должен быть числом больше 0)
	{
		cout << "Enter the ID: " << endl;
		int i;
		cin >> i;
		if (cin.fail() || i <= 0)
		{
			//system("CLS");
			cout << "Inappropriate ID. Please, try again. ";
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else
		{
			object.id = i;
			return;
		}
	}
}

void Seller::setName(Product& object) {
	string n;
	
	while (1) // проверка на ввод имени товара (первый символ должен быть буквой)
	{
		cout << "Enter the name: " << endl;
		cin >> n;
		if (n[0] < 65 || (n[0] > 90 && n[0] < 97) || n[0] > 122)
		{
			//system("CLS");
			cout << "Inappropriate name. Please, try again. ";
			cin.ignore(32767, '\n');
		}
		else
		{
			object.name = n;
			return;
		}
	}
}

void Seller::setCost(Product& object)
{
	double d;

	while (1) // проверка на ввод цены (цена должна быть больше 0)
	{
		cout << "Enter the cost: " << endl;
		cin >> d;
		if (cin.fail() || d <= 0)
		{
			//system("CLS");
			cout << "Inappropriate cost. Please, try again. ";
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else break;
	}
	
	object.cost = d;
}
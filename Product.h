#include <string>

using namespace std;

class Seller;

class Product {
private:
	int id;
	string name;
	double cost;

public:
	Product();
	Product(int, string, double);
	~Product();
	void getId();
	void getName();
	void getCost();

	friend void getInfo(Product&);
	friend Seller;
};

class Seller {
public:
	void setCost(Product&);
	void setId(Product&);
	void setName(Product&);
};

//5.	������� ����� ������ �� ���������� �������: id � ���������� �����, name � ��������, cost � ���������. ������� ������������� ����� ����������, � ������� ����������� ����� ��������� ��������� ������.
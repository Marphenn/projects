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

//5.	—оздать класс Ђ“оварї со следующими данными: id Ц уникальный номер, name Ц название, cost Ц стоимость. —оздать дружественный класс Ђѕродавецї, в котором реализовать метод установки стоимости товара.
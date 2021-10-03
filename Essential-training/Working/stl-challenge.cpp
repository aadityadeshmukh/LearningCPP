#include <iostream>
using namespace std;

class Item {
	int _sku;
	string _name;
	string _desc;
public:
	Item();
	Item(int sku, string name, string desc);
	int getSKU();
	void setSKU(int sku);
	string getNAME();
	void setNAME(string name);
	string getDESC();
	void setDESC(string desc);
};

Item::Item(){}
Item::Item(int sku, string name, string desc){
	setSKU(sku);
	setNAME(name);
	setDESC(desc);
}
int Item::getSKU(){
	return _sku;
}
void Item::setSKU(int sku) {
	_sku = sku;
}
string Item::getNAME() {
	return _name;
}
void Item::setNAME(string name) {
	_name = name;
}
string Item::getDESC() {
	return _desc;
}
void Item::setDESC(string desc){
	_desc = desc;
}

int main() {

}
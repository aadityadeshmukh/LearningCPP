#include <iostream>
#include <fstream>
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

Item::Item(): _sku(0), _name(""), _desc("") {}
Item::Item(int sku, string name, string desc) : _sku(sku), _name(name), _desc(desc){
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
	// read the contents of the file
	ifstream ifObj;
	char buf[1024];
	ifObj.open("D:\\Code\\LearningCPP\\Essential-training\\Working\\Debug\\items.txt");
	while (ifObj.good()) {
		ifObj.getline(buf, sizeof(buf));
		cout << buf << endl;
		// split the buffer string into tokens

	}
	ifObj.close();

}
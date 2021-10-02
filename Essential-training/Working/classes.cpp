#include <iostream>

using namespace std;

class S1 {
	int i;
public:
	S1() { i = 0; };
	void setI(int val);
	int getI();
};

void S1::setI(int val) {
	i = val;
}

int S1::getI() {
	return i;
}
int main() {

	S1 sobj;
	cout << sobj.getI() << endl;
	sobj.setI(32);
	cout << sobj.getI() << endl;
}
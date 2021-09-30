#include <iostream>
using namespace std;

struct Student{
	string name;
	float GPA;
};

int main(){
	
	Student tim;
	tim.name = "Tim";
	cout << tim.name << endl;
	
	Student arrStudents[10];
	arrStudents[0].name = "Bluey";
	arrStudents[0].GPA = 4.0;
}

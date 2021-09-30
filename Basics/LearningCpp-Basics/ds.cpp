#include <iostream>
using namespace std;

struct Student{
	public:
		string name;
		float GPA;
		void changeSocials(string blah);
	private:
		string socials;
};


class BankAccount{
	public: 
		BankAccount();
		void Deposit(float);
		void Withdraw();
		float GetBalance();
	private:
		float balance;

};

BankAccount::BankAccount(){
	balance = 0;
}
float BankAccount::GetBalance(){
	return balance;
}

void BankAccount::Deposit(float money){
	balance += money;
}
int main(){
	
	Student tim;
	tim.name = "Tim";
	cout << tim.name << endl;
	
	Student arrStudents[10];
	arrStudents[0].name = "Bluey";
	arrStudents[0].GPA = 4.0;
	
	BankAccount acnt1;
	cout << acnt1.GetBalance() << endl;
	acnt1.Deposit(100.5);
	cout << acnt1.GetBalance() << endl;
	
}

#include <iostream>
using namespace std;

class People {
public:

	void setname(string a) {
		name = a;
	}
	void setpatronymic(string a) {
		patronymic = a;
	}
	void setsurname(string a) {
		surname = a;
	}
	void setbday(int a) {
		bday = a;
	}
	void setbday(int a) {
		bday = a;
	}
	void setbday(int a) {
		bday = a;
	}
	void setgender(string a) {
		gender = a;
	}
	void showname() {
		cout << "Имя: " << name << "\nОтчество: " << patronymic << "\nФамилия: " << surname << endl;
	}
	void showbday() {
		cout << "День рождения: " << bday << "." << bmonth << "." << byear << endl;
	}
	void showgender() {
		cout << "Пол: " << gender << endl;
	}
protected:

	
private:
	string name;
	string patronymic;
	string surname;
	string gender;
	int bday;
	int bmonth;
	int byear;
};
int main() {
	setlocale(LC_ALL, "Russian");
	People Ran1;
	Ran1.setname("Lee");
	Ran1.setname("Huan");
	Ran1.setname("Czao");
	Ran1.setbday(15);
	Ran1.setbday(5);
	Ran1.setbday(1250);
	Ran1.setgender("Male");

	Ran1.showname();
	Ran1.showbday();
	Ran1.showgender();
	return 0;
}
#include <iostream>
#include <string>

struct bags {
	int pilocka;
	int hudi;
	int shirt;
};

int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "������� �����\n";
	std::cout << "1.������\n";
	std::cout << "2.�������\n";
	std::cout << "3.������\n";
	int user;
	int pc = 2;
	
	std::cin >> user;

	if (user == 1 && pc == 2 || user == 2 && pc == 3 || user == 3 && pc == 1) {
		
		std::cout << "Win\n";
		
	}
	else {
		std::cout << "Loser\n";
	} 
	



	//



}
	/*std::cin >> zina;
	if (zina > 35) {
		std::cout << "�� �� ��������!\n";
		
	}
	
	else if (zina <= 35 && zina >= 18) {
		std::cout << "���� ����!\n";
	}
	else 
	{
		 std::cout << "���� � ������!\n";
	}*/

#include"Frazione.h"
#include<memory>


int main() {
	setlocale(LC_ALL, "Russian");
	try
	{
		std::shared_ptr<Frazione>fra = std::make_shared<Frazione>(12, 0);
		std::shared_ptr<Frazione>fra2 = std::make_shared<Frazione>(34, 0);
		std::shared_ptr<Frazione>fra3 = std::make_shared<Frazione>(7, 0);
	}
	catch (std::string& a) { std::cout << a; };
	std::cout << "\n\n";





	return 0;
}
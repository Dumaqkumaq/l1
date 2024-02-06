#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	/* {
		// численный тип
		short m3 = 3; // 2 байта -2^15..2^15-1
		unsigned short m4 = 4; // 2 байта 0..2^16-1
		int m5 = 5; // 4 байта -2^31..2^31-1
		unsigned int m6 = 6; // 4 байта 0..2^32-1
		long m77 = 45; // -2^31..2^31-1
		long long m7 = 7; // 8 байт -2^63..2^63-1
		unsigned long long m8 = 8; // 8 байт 0..2^64-1
		float m9 = 9; // 4 байта 7 значащих цифр -3,4E-38..3,4+38
		double m10 = 10; // 8 байт 15 значащих цифр -1.7E-308..1.7E+308

		float s;
		float h;
		double res;
		std::cout << "s:";
		std::cin >> s;
		std::cout << "h:";
		std::cin >> h;
		res = s / h;
		std::cout << res;
	}*/

	// 2

	unsigned char number;
	unsigned int numberbit;
	//number = 5;
	// 5 = 0000 0101
	// number = 7;
	// 7 = 0000 0111
	//number = 13;
	// 13 = 0000 1101
	number = 77;
	// 77 = 0100 1101
	std::cout << int(number) << std::endl; // число выводит int
	std::cout << "Введите бит, который хочешь изменить" << std::endl;
	std::cin >> numberbit; // вводим номер бита
	number = number | (1 /*0000'0001*/ << numberbit); // поразрядное сложение битов числа
	std::cout << int(number) << std::endl; // получившееся число

	// 1 доп, инвертируем биты числа
	unsigned char n;
	n = 77; // 0100 1101
	n = n ^ 255; // 1111 1111
	// 178 - 1011 0010
	std::cout << int(n) << std::endl;
}
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "rus");
	//1.1
	int word, i, j, n;
	cin >> word;
	n = 10;
	switch (word)
	{
	case 1:
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (i <= j)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
		break;
	case 2:
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (i >= j)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
		break;
	case 3:
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i + j <= n - 1 && i <= j)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
		break;
	case 4:
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i + j >= n - 1 && i >= j)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
		break;
	case 5:
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((i + j < n - 1 && i > j) or (i + j > n - 1 && i < j))
					cout << "  ";
				else
					cout << "* ";
			}
			cout << endl;
		}
		break;
	case 6:
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((i + j <= n - 1 && i >= j) or (i + j >= n - 1 && i <= j))
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
		break;
	case 7:
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i + j <= n - 1 && i >= j)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
		break;
	case 8:
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i + j >= n - 1 && i <= j)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
		break;
	case 9:
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (i + j <= n - 1)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
		break;
	case 10:
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (i + j >= n - 1)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
		break;
	default:
		cout << "ERROR" << endl;
		break;
	}
	//2.1
	cout << "Подсчет количества целых чисел в диапазоне от 100 до 999, у которых есть две одинаковые цифры:" << endl;
	int digit1, digit2, digit3, count = 0;
	for (int i = 100; i <= 999; i++) {
		digit1 = i / 100;
		digit2 = (i / 10) % 10;
		digit3 = i % 10;
		if (digit1 == digit2 or digit2 == digit3 or digit1 == digit3) count++;
	}
	cout << count << endl;
	//2.2
	cout << "Подсчет количества целых чисел в диапазоне от 100 до 999, у которых все цифры разные:" << endl;
	int digit1, digit2, digit3, count = 0;
	for (int i = 100; i <= 999; i++) {
		digit1 = i / 100;
		digit2 = (i / 10) % 10;
		digit3 = i % 10;
		if (digit1 != digit2 and digit2 != digit3 and digit1 != digit3) count++;
	}
	cout << count << endl;
	//2.3
	cout << "Удаление из числа знаков 3 и 6" << endl;
	int result = 0, number;
	cout << "Введите число -> ";
	cin >> number;
	while (number > 0) {
		if (number % 10 != 3 and number % 10 != 6) {
			// Новое число в переменой result записано в обратном порядке
			result *= 10; // Добавляем новый разряд
			result += number % 10; // Из исходного числа разряд единиц переносим в новое число
		}
		number /= 10; // Убираем младший разярд исходного числа
	}
	cout << "Полученное число -> ";
	while (result > 0) {
		cout << result % 10; // Выводим число в правильной последовательности
		result /= 10; // Убираем младший разярд нового числа
	}
	//2.4
	cout << "Вывести все целые числа В, для которых А делится без остатка на В * В и не делится без остатка на В * В * В" << endl;
	int a;
	cin >> a;
	if (a == 0) cout << "При делении нуля на любое число выходит 0";
	// Перебираем B от 2 до корня из A
	if (a < 0) a = -a;
	for (int b = 2; b * b <= a; b++) {
		if (a % (b * b) == 0 and a % (b * b * b) != 0) cout << -b << "  " << b << endl;
	}
	//2.5
	cout << "Равен ли куб суммы цифр числа А * А" << endl;
	int a, sum, a1, num;
	cout << "Введите целое A -> ";
	cin >> a;
	if (a < 0) a = -a;
	sum = 0;
	a1 = a;
	while (a1 > 0) {
		sum += a1 % 10;
		a1 /= 10;
	}
	if (sum * sum * sum == a * a) cout << "Дa";
	else cout << "Нет";
	//2.6
	cout << "Вывести все целые числа, на которое заданное число делиться без остатка\nВведите целое число -> ";
	cin >> num;
	if (num < 0) num = -num;
	if (num == 0) cout << "При делении нуля на любое число выходит 0";
	else {
		if (num < 0) num = -num;
		for (int i = -num; i <= num; i++) {
			if (i != 0) if (num % i == 0) cout << i << endl;
		}
	}
	//2.7
	int num1, num2, cikl;
	cout << "Вывести все целые числа, на которые оба введенных числа делятся без остатка\nВведите два целых числа -> ";
	cin >> num1;
	cin >> num2;
	if (num1 < num2) cikl = num1;
	else cikl = num2;
	if (num1 == 0 or num2 == 0) cout << "При делении нуля на любое число выходит 0";
	else {
		if (cikl < 0) cikl = -cikl;
		for (int i = -cikl; i <= cikl; i++) {
			if (i != 0) if (num1 % i == 0 and num2 % i == 0) cout << i << endl;
		}
	}
}		
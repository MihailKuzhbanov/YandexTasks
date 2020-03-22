/*
Ограничение времени	2 секунды
Ограничение памяти	64 Mb
Ввод	стандартный ввод или input.txt
Вывод	стандартный вывод или output.txt
Даны два числа A и B
Вам нужно вычислить их сумму A+B
В этой задаче для работы с входными и выходными данными вы можете использовать и файлы и потоки на ваше усмотрение.
Формат ввода
Первая строка входа содержит числа A и B разделенные пробелом
Формат вывода
В единственной строке выхода выведите сумму чисел A+B

Пример 1
Ввод
2 2
Вывод
4

Пример 2
Ввод
57 43
Вывод
100

Пример 3
Ввод
123456789 673243342
Вывод
796700131
*/

#include <iostream>

int num1,num2;

int main()
{
	std::cin >> num1 >> num2;
	std::cout << num1 + num2;
}

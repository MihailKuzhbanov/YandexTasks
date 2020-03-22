/*
Ограничение времени	2 секунды
Ограничение памяти	64Mb
Ввод	input.txt
Вывод	output.txt
Даны два числа A и B. Вам нужно вычислить их сумму A+B. В этой задаче вам нужно читать из файла и выводить ответ в файл

Формат ввода
Первая строка входного файла содержит числа A и B разделенные пробелом

Формат вывода
В единственной строке выходного файла выведите сумму чисел A+B
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int num1,num2;

void ParseLine(string str, int& numA, int& numB)
{
	if (str.size() > 0)
    {
    	int n = 0;
    	string numInStr = "";
		while (str[n] != ' ')
        {
        	numInStr += str[n];
        	n++;
        }
    	numA = stoi(numInStr);
    	while (str[n] == ' ') {n++;}
    	numInStr = "";
		while (str[n] != ' ')
        {
        	numInStr += str[n];
        	n++;
        }
    	numB = stoi(numInStr);
    }
}

int main()
{
	string line;
	ifstream input("input.txt");
	ofstream output("output.txt");

	getline(input,line);
	ParseLine(line, num1, num2);
    output << to_string(num1+num2);

	input.close();
    output.close();
}

//Yandex - B
/*
Требуется найти в бинарном векторе самую длинную последовательность единиц и вывести её длину.

Желательно получить решение, работающее за линейное время и при этом проходящее по входному массиву только один раз.

Формат ввода
Первая строка входного файла содержит одно число n, n ≤ 10000. Каждая из следующих n строк содержит ровно одно число — очередной элемент массива.

Формат вывода
Выходной файл должен содержать единственное число — длину самой длинной последовательности единиц во входном массиве.
-----
Пример
-----
Ввод
5
1
0
1
0
1

Вывод
1
*/
#include <iostream>

using namespace std;

int main()
{
	int count = 0, max = 0, n, in;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
  	cin >> in;
    if (in) max++;
    if (max > count) count = max;
    if (!in) max = 0;
  }
  cout << count;
}

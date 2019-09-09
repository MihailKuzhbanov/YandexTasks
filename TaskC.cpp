//Yandex - C
/*
Дан упорядоченный по неубыванию массив целых 32-разрядных чисел. Требуется удалить из него все повторения.

Желательно получить решение, которое не считывает входной файл целиком в память, т.е., использует лишь константный объем памяти в процессе работы.

Формат ввода
Первая строка входного файла содержит единственное число n, n ≤ 1000000.

На следующих n строк расположены числа — элементы массива, по одному на строку. Числа отсортированы по неубыванию.

Формат вывода
Выходной файл должен содержать следующие в порядке возрастания уникальные элементы входного массива.
-----
Пример 1
-----
Ввод
5
2
4
8
8
8

Вывод
2
4
8
-----
Пример 2
-----
Ввод
5
2
2
2
8
8

Вывод
2
8
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0, temp = 0;
  vector<int> nums;
	cin >> n;
  nums.reserve(n);
  while (n --> 0)
  {
  	cin >> temp;
		nums.push_back(temp);
  }
  nums.erase(unique(nums.begin(), nums.end()), nums.end());
  sort(nums.begin(), nums.end());
  for (auto el : nums) cout << el << endl;
	return 0;
}

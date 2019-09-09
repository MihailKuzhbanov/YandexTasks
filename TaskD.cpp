//Yandex - D
/*
Дано целое число n. Требуется вывести все правильные скобочные последовательности длины 2 ⋅ n, упорядоченные лексикографически (см. https://ru.wikipedia.org/wiki/Лексикографический_порядок).

В задаче используются только круглые скобки.

Желательно получить решение, которое работает за время, пропорциональное общему количеству правильных скобочных последовательностей в ответе, и при этом использует объём памяти, пропорциональный n.

Формат ввода
Единственная строка входного файла содержит целое число n, 0 ≤ n ≤ 11

Формат вывода
Выходной файл содержит сгенерированные правильные скобочные последовательности, упорядоченные лексикографически.
-----
Пример 1
-----
Ввод
2

Вывод
(())
()()
-----
Пример 2
-----
Ввод
3

Вывод
((()))
(()())
(())()
()(())
()()()
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<string> makeParenthesis(int n)
{
	vector<string> result;
	if (!n) result.push_back("");
	else
	{
		for (int i = 0; i < n; i++)
			for (string left : makeParenthesis(i))
				for (string right : makeParenthesis(n - i - 1))
					result.push_back('(' + left + ')' + right);
	}
	return result;
}

int main()
{
	int n = 0;
	cin >> n;
	vector<string> result = makeParenthesis(n);
	sort(result.begin(), result.end());
	for (auto el : result) cout << el << endl;
	return 0;
}

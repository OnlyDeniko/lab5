#include<iostream>
#include<cstdio>
#include<string>
#include"polinom.h"

#define deb(a) cout << #a << " = " << a << endl;

using namespace std;

void tester_circle_list() {
	circle_list _1, _2, _3, _4;
	int n, max_step;
	cout << "¬ведите кол-во переменных во всех мономах : ";
	cin >> n;
	n++;
	cout << "¬ведите максимальную степень при иксах : ";
	cin >> max_step;
	max_step++;
	int cnt_1;
	cout << "¬ведите кол-во мономов в первом полиноме: ";
	cin >> cnt_1;
	for (int i = 0; i < cnt_1; i++) {
		cout << "¬ведите " << i + 1 << " моном в первом полиноме : ";
		string s;
		cin >> s;
		monom q(s, max_step, n);
		_1.plus(q);
	}
	int cnt_2;
	cout << "¬ведите кол-во мономов во втором полиноме: ";
	cin >> cnt_2;
	for (int i = 0; i < cnt_2; i++) {
		cout << "¬ведите " << i + 1 << " моном во втором полиноме : ";
		string s;
		cin >> s;
		monom q(s, max_step, n);
		_2.plus(q);
	}
	cout << '\n';
	cout << "ѕервый полином : " << _1.to_string(max_step, n) << '\n';
	cout << "¬торой полином : " << _2.to_string(max_step, n) << '\n';
	cout << '\n';
	_3 = _1 + _2;
	cout << "–езультат сложени€ первого и второго полиномов : " << _3.to_string(max_step, n) << '\n';
	_3 = _1 - _2;
	cout << "–езультат вычитани€ из первого полинома второго полинома : " << _3.to_string(max_step, n) << '\n';
	int mul;
	cout << "¬ведите число, на которое следует домножить первый полином : ";
	cin >> mul;
	_1 = _1 * mul;
	cout << "ѕервый полином : " << _1.to_string(max_step, n) << '\n';
	_3 = _1.mult(_2, max_step, n);
	cout << "–езультат умножени€ двух полиномов : " << _3.to_string(max_step, n) << '\n';
}

int main() {
	setlocale(LC_ALL, "Rus");
	tester_circle_list();
	
	return 0;
}
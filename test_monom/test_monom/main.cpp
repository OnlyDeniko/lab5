#include<iostream>
#include<cstdio>
#include<string>
#include"polinom.h"

#define deb(a) cout << #a << " = " << a << endl;

using namespace std;

void tester_circle_list() {
	circle_list _1, _2, _3, _4;
	int n, max_step;
	cout << "������� ���-�� ���������� �� ���� ������� : ";
	cin >> n;
	n++;
	cout << "������� ������������ ������� ��� ����� : ";
	cin >> max_step;
	max_step++;
	int cnt_1;
	cout << "������� ���-�� ������� � ������ ��������: ";
	cin >> cnt_1;
	for (int i = 0; i < cnt_1; i++) {
		cout << "������� " << i + 1 << " ����� � ������ �������� : ";
		string s;
		cin >> s;
		monom q(s, max_step, n);
		_1.plus(q);
	}
	int cnt_2;
	cout << "������� ���-�� ������� �� ������ ��������: ";
	cin >> cnt_2;
	for (int i = 0; i < cnt_2; i++) {
		cout << "������� " << i + 1 << " ����� �� ������ �������� : ";
		string s;
		cin >> s;
		monom q(s, max_step, n);
		_2.plus(q);
	}
	cout << '\n';
	cout << "������ ������� : " << _1.to_string(max_step, n) << '\n';
	cout << "������ ������� : " << _2.to_string(max_step, n) << '\n';
	cout << '\n';
	_3 = _1 + _2;
	cout << "��������� �������� ������� � ������� ��������� : " << _3.to_string(max_step, n) << '\n';
	_3 = _1 - _2;
	cout << "��������� ��������� �� ������� �������� ������� �������� : " << _3.to_string(max_step, n) << '\n';
	int mul;
	cout << "������� �����, �� ������� ������� ��������� ������ ������� : ";
	cin >> mul;
	_1 = _1 * mul;
	cout << "������ ������� : " << _1.to_string(max_step, n) << '\n';
	_3 = _1.mult(_2, max_step, n);
	cout << "��������� ��������� ���� ��������� : " << _3.to_string(max_step, n) << '\n';
}

int main() {
	setlocale(LC_ALL, "Rus");
	tester_circle_list();
	
	return 0;
}
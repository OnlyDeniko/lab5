#include<iostream>
#include<cstdio>
#include<string>
#include"monom.h"
#include"circle_list.h"

#define deb(a) cout << #a << " = " << a << endl;

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	circle_list _1, _2, _3, _4;
	string s;
	int max_step = 20;
	int n = 12;
	cin >> s;
	monom q(s, max_step, n);
	cin >> s;
	monom w(s, max_step, n);
	cin >> s;
	monom e(s, max_step, n);
	_1.plus(q);
	_2.plus(w);
	_2.plus(e);
	cout << _2.to_string(max_step, n) << '\n';
	_2.minus(q);
	_2.minus(q);
	cout << _2.to_string(max_step, n) << '\n';
	_3 = _1 - _2;
	_3 = _3 * (1. / 2);
	cout << _3.to_string(max_step, n);
	return 0;
	cout << q.calc_monom(max_step, n) << endl;
	cout << w.calc_monom(max_step, n) << endl;
	w = q.mult(w, max_step, n);
	cout << w.calc_monom(max_step, n);
	return 0;
}
#include<iostream>
#include<cstdio>
#include<string>
#include"polinom.h"

#define deb(a) cout << #a << " = " << a << endl;

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	string s;
	getline(cin, s);
	polinom kek(s, 12, 20);
	getline(cin, s);
	polinom lol(s, 12, 20);
	cout << kek.to_string() << '\n' << lol.to_string() << '\n';
	polinom qwe = kek.mult(lol);
	cout << qwe.to_string();
	return 0;
}
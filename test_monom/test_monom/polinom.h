#pragma once
#include"circle_list.h"

class polinom {
private:
	int cnt;
	int max_step;
	circle_list CL;
	string* processing_string(string s, int &k);
	void get_words_diff_razdel(string st, string zn, string *w, int &k);
public:
	polinom(string _s = "", int _cnt = 3, int _max_step = 10);
	polinom(const polinom & tmp);
	~polinom() {};
	polinom &operator=(const polinom & tmp);
	void add(const monom & tmp);
	polinom operator+(const polinom & tmp);
	polinom operator-(const polinom & tmp);
	polinom operator*(double kk);
	polinom mult(const polinom & _1);
	int get_cnt() const {
		return cnt;
	}
	int get_max_step() const {
		return max_step;
	}
	void set_cnt(int _cnt) {
		cnt = _cnt;
	}
	void set_max_step(int _max_step) {
		max_step = _max_step;
	}
	string to_string();
};


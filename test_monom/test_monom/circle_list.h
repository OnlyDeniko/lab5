#pragma once
#include"monom.h"
#include<iostream>

class circle_list {
private:
	monom *head;
public:
	circle_list();
	circle_list(const circle_list & tmp);
	~circle_list();
	circle_list &operator=(const circle_list & tmp);
	void plus(const monom & tmp);
	void minus(const monom & tmp);
	void erase(const monom & tmp);
	circle_list operator+(const circle_list & tmp);
	circle_list operator-(const circle_list & tmp);
	circle_list operator*(double kek);
	string to_string(int max_step, int n);
};


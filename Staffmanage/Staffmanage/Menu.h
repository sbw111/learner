#ifndef Menu_H
#define Menu_H
#include"CStaff.h"
#include<iostream>
#include<string>
using namespace std;
class Menu{
public:
	int find(string s);
	void inquire();
	void add();
	void del();
	void mod();
	void exit();
	Menu();
	~Menu();
	bool ex;
private:
	CStaff *staff[1000];
	int len;
};
#endif
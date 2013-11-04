#ifndef CStaff_H
#define CStaff_H
#include<iostream>
#include<string>
using namespace std;
using std::cout;
using std::endl;
class CStaff{
public:
	CStaff(){ 
		basemoney=1500;
	}
	void SetNo(string s);
	string GetNo();
	void SetName(string s);
	string GetName();
	void SetSex(bool t);
	bool GetSex();
	void SetServiceYears(int n);
	int GetServiceYears();
	virtual long GetSalary()=0;
	void SetNumber(int n);
	int GetNumber();
	friend ostream &operator<<(ostream &cout,CStaff &staff);
	int sort;
private:
	long salary;
	string no,name;
	bool sex;
	int serviceyears;
protected:
	long basemoney;
	int number;
};
#endif
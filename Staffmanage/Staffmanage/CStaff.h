#ifndef CStaff_H
#define CStaff_H
#include<iostream>
#include<string>
using namespace std;
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
	void SetStudentNum(int n);
	void SetDStudentNum(int n);
	void SetClassNum(int n);
	void SetNumber(int n);
	int GetStudentNum();
	int GetDStudentNum();
	int GetClassNum();
	int GetNumber();
//	friend std::ostream &operator<<(std::ostream &cout,CStaff &staff);
	int sort;
private:
	long salary;
	string no,name;
	bool sex;
	int serviceyears;
protected:
	long basemoney;
	int studentnum,classnum,dstudentnum,number;
	int studentmoney,dstudentmoney,agemoney;
};
#endif
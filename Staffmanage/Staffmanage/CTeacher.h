#ifndef CTeacher_H
#define CTeacher_H
#include"CStaff.h"
class CTeacher:public CStaff{
public:
	void Setmoney();
	void SetStudentNum(int n);
	int GetStudentNum();
	void SetDStudentNum(int n);
	int GetDStudentNum();
	void SetClassNum(int n);
	int GetClassNum();
	friend ostream &operator<<(ostream &cout,CTeacher &teacher);
protected:
	int studentnum,classnum,dstudentnum;
	int studentmoney,dstudentmoney,agemoney;
};
#endif
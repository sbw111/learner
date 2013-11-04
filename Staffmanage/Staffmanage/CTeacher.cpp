#include"CTeacher.h"
void CTeacher::Setmoney(){
	agemoney=500;
	studentmoney=2000; dstudentmoney=4000;
}
void CTeacher::SetStudentNum(int n){
	studentnum=n;
}
int CTeacher::GetStudentNum(){
	return studentnum;
}
void CTeacher::SetDStudentNum(int n){
	dstudentnum=n;
}
int CTeacher::GetDStudentNum(){
	return dstudentnum;
}
void CTeacher::SetClassNum(int n){
	classnum=n;
}
int CTeacher::GetClassNum(){
	return classnum;
}
ostream &operator<<(ostream &cout,CTeacher &teacher){
	cout<<"职务\t\t工号\t\t姓名\t性别\t工龄\t";
	if (teacher.sort==3){
		cout<<"课时数\t工资"<<endl;
		cout<<"讲师\t\t"<<teacher.GetNo()<<"\t\t"<<teacher.GetName()<<"\t";
		if (teacher.GetSex()) cout<<"男\t"; else cout<<"女\t";
		cout<<teacher.GetServiceYears()<<"\t";
		cout<<teacher.GetClassNum()<<"\t";
		cout<<teacher.GetSalary()<<endl;
	}
	else if (teacher.sort==4){
		cout<<"课时数"<<endl;
		cout<<"教授\t\t"<<teacher.GetNo()<<"\t"<<teacher.GetName()<<"\t";
		if (teacher.GetSex()) cout<<"男\t"; else cout<<"女\t";
		cout<<teacher.GetServiceYears()<<"\t";
		cout<<teacher.GetClassNum()<<endl;
		cout<<"所带研究生\t工资"<<endl;
		cout<<teacher.GetStudentNum()<<"\t\t";
		cout<<teacher.GetSalary()<<endl;
	}
	else {
		cout<<"课时数"<<endl;
		cout<<"博导\t\t"<<teacher.GetNo()<<"\t\t"<<teacher.GetName()<<"\t";
		if (teacher.GetSex()) cout<<"男\t"; else cout<<"女\t";
		cout<<teacher.GetServiceYears()<<"\t";
		cout<<teacher.GetClassNum()<<endl;
		cout<<"所带研究生\t所带博士生\t工资"<<endl;
		cout<<teacher.GetStudentNum()<<"\t\t";
		cout<<teacher.GetDStudentNum()<<"\t\t";
		cout<<teacher.GetSalary()<<endl;
	}
	return cout;
}
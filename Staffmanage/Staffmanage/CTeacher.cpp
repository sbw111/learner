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
	cout<<"ְ��\t\t����\t\t����\t�Ա�\t����\t";
	if (teacher.sort==3){
		cout<<"��ʱ��\t����"<<endl;
		cout<<"��ʦ\t\t"<<teacher.GetNo()<<"\t\t"<<teacher.GetName()<<"\t";
		if (teacher.GetSex()) cout<<"��\t"; else cout<<"Ů\t";
		cout<<teacher.GetServiceYears()<<"\t";
		cout<<teacher.GetClassNum()<<"\t";
		cout<<teacher.GetSalary()<<endl;
	}
	else if (teacher.sort==4){
		cout<<"��ʱ��"<<endl;
		cout<<"����\t\t"<<teacher.GetNo()<<"\t"<<teacher.GetName()<<"\t";
		if (teacher.GetSex()) cout<<"��\t"; else cout<<"Ů\t";
		cout<<teacher.GetServiceYears()<<"\t";
		cout<<teacher.GetClassNum()<<endl;
		cout<<"�����о���\t����"<<endl;
		cout<<teacher.GetStudentNum()<<"\t\t";
		cout<<teacher.GetSalary()<<endl;
	}
	else {
		cout<<"��ʱ��"<<endl;
		cout<<"����\t\t"<<teacher.GetNo()<<"\t\t"<<teacher.GetName()<<"\t";
		if (teacher.GetSex()) cout<<"��\t"; else cout<<"Ů\t";
		cout<<teacher.GetServiceYears()<<"\t";
		cout<<teacher.GetClassNum()<<endl;
		cout<<"�����о���\t������ʿ��\t����"<<endl;
		cout<<teacher.GetStudentNum()<<"\t\t";
		cout<<teacher.GetDStudentNum()<<"\t\t";
		cout<<teacher.GetSalary()<<endl;
	}
	return cout;
}
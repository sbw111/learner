#include"TODS.h"
std::ostream &operator<<(std::ostream &cout,CStaff &staff){
	cout<<"ְ��\t\t����\t\t����\t\t�Ա�\t\t����\t\t";
	cout<<"��ʱ��\t\t�����о���\t\t����"<<endl;
	cout<<"����\t\t"<<staff.GetNo()<<"\t\t"<<staff.GetName()<<"\t\t";
	if (staff.GetSex()) cout<<"��\t\t"; else cout<<"Ů\t\t";
	cout<<staff.GetServiceYears()<<"\t\t";
	cout<<staff.GetClassNum()<<"\t\t";
	cout<<staff.GetStudentNum()<<"\t\t";
	cout<<staff.GetDStudentNum()<<"\t\t";
	cout<<staff.GetSalary()<<endl;
	return cout;
}
long TODS::GetSalary(){
	return basemoney+GetServiceYears()*agemoney+classmoney*classnum+studentmoney*studentnum+dstudentmoney*dstudentnum;
}
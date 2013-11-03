#include"Professor.h"
std::ostream &operator<<(std::ostream &cout,CStaff &staff){
	cout<<"职务\t\t工号\t\t姓名\t\t性别\t\t工龄\t\t";
	cout<<"课时数\t\t所带研究生\t\t工资"<<endl;
	cout<<"教授\t\t"<<staff.GetNo()<<"\t\t"<<staff.GetName()<<"\t\t";
	if (staff.GetSex()) cout<<"男\t\t"; else cout<<"女\t\t";
	cout<<staff.GetServiceYears()<<"\t\t";
	cout<<staff.GetClassNum()<<"\t\t";
	cout<<staff.GetStudentNum()<<"\t\t";
	cout<<staff.GetSalary()<<endl;
	return cout;
}
long Professor::GetSalary(){
	return basemoney+GetServiceYears()*agemoney+classmoney*classnum+studentmoney*studentnum;
}
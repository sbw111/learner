#include<iostream>
using namespace std;
int num=0;
struct Student{
	char name[100];
	int number;
	int grade;
}student[100];
int find(char* name){
	int i;
	for (i=0;i<num;i++){
		if(strcmp(student[i].name,name)==0){
			break;
		}
	}
	return i;
}
void addstudent(){
	struct Student s;
	cout<<"姓名：";
	cin>>s.name;
	cout<<"学号：";
	cin>>s.number;
	int i=find(s.name);
	if (i==num){
		strcpy(student[i].name,s.name);
		student[i].number=s.number;
		num++;
	}
}
void list(){
	cout<<"姓名\t"<<"学号\t"<<"成绩"<<endl;
	for (int i=0;i<num;i++){
		cout<<student[i].name<<"\t"<<student[i].number<<"\t"<<student[i].grade<<endl;
	}
}
void deletestudent(){
	struct Student s;
	cout<<"姓名：";
	cin>>s.name;
	cout<<"学号：";
	cin>>s.number;
	int i=find(s.name);	
	for (int j=i;j<=num-1;j++){
		strcpy(student[j].name,student[j+1].name);
		student[j].number=student[j+1].number;
	}
	if (i<=num) num--;
}
void addgrades(){
	struct Student s;
	bool f=true;
	int i=-1;
	char c[10];
	while (f){
		cout<<"姓名：";
		cin>>s.name;
		cout<<"学号：";
		cin>>s.number;
		cout<<"成绩：";
		cin>>s.grade;
		int i=find(s.name);
		if (i==-1) cout<<"No Found!"<<endl;
		else {
			student[i].grade=s.grade;
		}
		cout<<"continue?(Y/N):";
		cin>>c;
		if (strcmp(c,"N")==0) f=false;
	}
}
int main(){
	int i,j,n;
	while (1){
		cout<<"1)查看学生名单"<<endl;
		cout<<"2)选课"<<endl;
		cout<<"3)退选"<<endl;
		cout<<"4)录入成绩"<<endl;
		cout<<"5)退出程序"<<endl;
		cin>>n;
		switch(n){
			case 1:
				list();
				break;
			case 2:
				addstudent();
				break;
			case 3:
				deletestudent();
				break;
			case 4:
				addgrades();
				break;
			case 5:
				return 0;
			default :
				cout<<"error!"<<endl;
		}
	}

}
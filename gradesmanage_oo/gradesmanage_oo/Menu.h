#include"Student.h"
class Menu{
public:
	void list();
	void addstudent();
	void deletestudent();
	void addgrades();
	void exit();
	int find(string s);
	Menu(){
		len=0; ex=false;
	}
	bool ex;
private:
	Student student[100];
	int len;

};
#include<string>
using namespace std;
class computer{
	public:
		void list();
		void enter();
		void out();
		computer(){
			len=0;
		};
	private:
		int len;
		int memory[100],disk[100],num[100];
		string model[100],cpu[100];
};
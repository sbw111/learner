#include<vector>
#include<iostream>
#include<vector>
using namespace std;
void main(){
	int n,k;
	char c;
	vector<int> a;
	while (1){
		cout<<"输入R进行数组输入，输入P打印数组，输入E结束"<<endl;
		cin>>c;
		if (c=='E') {exit(0);}
		else if (c=='P') {
			for (int i=0;i<a.size();i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else {
			cout<<"输入个数：";
			cin>>n;
			for (int i=1;i<=n;i++){
				cin>>k;
				a.push_back(k);
			}
		}
	}
}
#include<vector>
#include<iostream>
#include<vector>
using namespace std;
void main(){
	int n,k;
	char c;
	vector<int> a;
	while (1){
		cout<<"����R�����������룬����P��ӡ���飬����E����"<<endl;
		cin>>c;
		if (c=='E') {exit(0);}
		else if (c=='P') {
			for (int i=0;i<a.size();i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else {
			cout<<"���������";
			cin>>n;
			for (int i=1;i<=n;i++){
				cin>>k;
				a.push_back(k);
			}
		}
	}
}
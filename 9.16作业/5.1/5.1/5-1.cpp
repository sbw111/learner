#include<iostream>
using namespace std;
double f_to_c(double f)
{
	return (5.0/9.0)*(f-32);
}
void main(){
	double f,g;
	cin>>f;
	g=f_to_c(f);
	cout<<g<<endl;
}
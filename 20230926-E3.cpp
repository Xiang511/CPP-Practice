#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double r=0.0125,S,H=10000;
	int n=12;
	S=H*pow(1+r/n,n);
	cout.precision(2);
    cout.setf(ios::fixed);
	cout << "年利率：" << 100*r << "%" << endl;
	cout << "期數：" << n << "(月)" << endl;
	cout << "本金： $" << H << endl;
	cout << "利息： $" << (S-H)<< endl;	
	cout << "本利和： $" << S << endl;			
	system("pause");
	return 0;
} 

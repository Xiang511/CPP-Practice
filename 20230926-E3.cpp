#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double r=0.0125,S,H=10000;
	int n=12;
	S=H*pow(1+r/n,n);
	cout.precision(2);
    cout.setf(ios::fixed);
	cout << "�~�Q�v�G" << 100*r << "%" << endl;
	cout << "���ơG" << n << "(��)" << endl;
	cout << "�����G $" << H << endl;
	cout << "�Q���G $" << (S-H)<< endl;	
	cout << "���Q�M�G $" << S << endl;			
	system("pause");
	return 0;
} 

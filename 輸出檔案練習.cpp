
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
const double PI = 3.14159;
int main(){
	double d;
	ofstream outfile("fdata.txt",ios::app);
	outfile<<"deg"<<"\t"<<"sin(deg)\n";
	for(int i=0;i<90;i++){
		d=sin(PI/180*i);
		outfile<<i<<"\t"<<d<<"\n";
	}
	system("pause");
	return 0 ;
}


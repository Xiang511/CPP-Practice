//CH6-6-2023-10-31
#include<iostream>
using namespace std;
double Trap(double a, double b, int n);
double f(double x){
	return (x*x+1);
}
int main(){
    cout.precision(12);
    cout<<"n" <<"\t" << "Trap"<< endl;
    for(int i=10;i<=100;i=i+10){ 
        cout<<i<<"\t"<<Trap(0,1,i)<< endl;
    } 
	return 0;
}
double Trap(double a, double b, int n){
	double sum=0, h;
	h=(b-a)/n;
	for(int k=1;k<=n-1;k++)
	    sum=sum+f(a+k*h);
	sum=(f(a)+2*sum+f(b))*h/2;
	return sum;
}

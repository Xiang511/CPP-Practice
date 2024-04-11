//CH6-1-2023-10-31
#include<iostream>
using namespace std;
int SquareSum(int n);
int Sum(int n){
	return (n*(n+1)*(2*n+1)/6);
}
int SSum(int n);
int main(){
	cout<< SquareSum(100)<<endl;
	cout<< Sum(100)<<endl;
	cout<< SSum(100)<<endl;
	system("pause");
	return 0;
} 
int SquareSum(int n){
	if(n>1)
	   return (SquareSum(n-1)+n*n);
	else
	   return 1;
}
int SSum(int n){
	int sum=0;
	for(int i;i<=n;i++){
		sum=sum+i*i;
	}
	return sum;
}

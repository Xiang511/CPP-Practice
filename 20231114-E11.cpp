//第11次課堂練習-2023-11-14
#include<iostream>
using namespace std;
const int N=5;
int main(){
	int M[]={80,60,45,50,75,92,65,60,85,55};
	int N=sizeof(M)/sizeof(int);
	int Max=M[0],Min=M[0],sum=M[0];
	float Ave;
	for(int i=1;i<N;i++){
		if(M[i]>Max)	Max=M[i];
		if(M[i]<Min)	Min=M[i];
		sum=sum+M[i];
	}
	Ave=float(sum)/N;
    cout << N << "個元素中最大值為:" << Max << endl;
    cout << N << "個元素中最小值為:" << Min << endl;
    cout << N << "個元素平均為:" << Ave << endl;
	system("pause");
	return 0;
}

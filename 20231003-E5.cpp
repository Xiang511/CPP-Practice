//��5���Ұ�m��-2023-10-03
#include<iostream>
using namespace std;
int main(){
	int num;
	cout << "�п�J��Ƥ���(0~100):";
	cin >> num;
	if(num >= 90){ 
	    cout<<"���Z���Ŭ� A"<<endl;
	}else if(num >=80){
		cout<<"���Z���Ŭ� B"<<endl;
	}else if(num >=70){
		cout<<"���Z���Ŭ� C"<<endl;
	}else if(num >=60){
		cout<<"���Z���Ŭ� D"<<endl;
	}else
	    cout<<"���Z���Ŭ� E"<<endl;	
	system("pause");
	return 0;
}

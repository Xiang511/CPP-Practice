#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

#define MAX 10

class Stack {
	private:
		char item[MAX][20];
		int top;
	public:
		Stack();
		int push_f();   // 
		int pop_f();    // 
		void list_f(void);   // 
};

Stack::Stack()
{
	top = -1;
}

int Stack::push_f()
{
	if(top >= MAX-1)   
		cout << "\n���|�w��!\n";
	else {
		top++;
		cout << "\n �п�J�@�Ӫ���: ";
		cin.getline(item[top], 20);
	}
}

int Stack::pop_f()
{
	if(top < 0)  
		cout << "\n ���|�O�Ū�!\n";
	else {
		cout<<"��X�O";
		for(int i=0;i<=10;i++){
			cout <<"\n"<< item[top]<<"\n";top--;
			if(top<0)
			  break;
			}
			
		
		
	}
}

void Stack::list_f(void)
{
	int count = 0, i;

	if(top < 0)
		cout << "\n ���|�O�Ū�\n";
	else {
		cout << "\n  ITEM\n";
		cout << " ------------------\n";
		cout.setf(ios::left, ios::adjustfield);
		for(i = 0; i <= top; i++) {
			cout << "  ";
			cout.width(20);
			cout << item[i] << "\n";
			count++;
		}
		cout.setf(ios::right, ios::adjustfield);
		cout << " ------------------\n";
		cout << "  �`�@�� " << count << "\n";
	}
}

int main()
{
	Stack obj;
	char option;

	while(1) {
		cout << "\n *****************************\n";
		cout << "        <1> (push)\n";
		cout << "        <2> (pop)\n";
	;
		cout << " *****************************\n";
		cout << " �п�J�ﶵ..";
		while(cin.get(option) && option == '\n');
		cin.get();
		switch(option) {
			case '1': obj.push_f();
					  break;
			case '2': obj.pop_f();
					  break;
			case '3': obj.list_f();
					  break;
			case '4': system("PAUSE");
	                             return 0;;
		}
	}
 
}

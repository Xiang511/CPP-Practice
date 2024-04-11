

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

#define MAX 5

class Stack {
	private:
		char item[MAX][20];
		int top;
	public:
		Stack();
		void push_f(void);   // æ–°å¢žå‡½æ•¸
		void pop_f(void);    // åˆªé™¤å‡½æ•¸
		void list_f(void);   // è¼¸å‡ºå‡½æ•¸
};

Stack::Stack()
{
	top = -1;
}

void Stack::push_f(void)
{
	if(top >= MAX-1)   
		cout << "\n°ïÅ|¤wº¡!\n";
	else {
		top++;
		cout << "\n ½Ð¿é¤J¤@­Óª«¥ó: ";
		cin.getline(item[top], 21);
	}
}

void Stack::pop_f(void)
{
	if(top < 0)  
		cout << "\n °ïÅ|¬OªÅªº!\n";
	else {
		cout << "\n " << item[top] << "¤w§R°£\n";
		top--;
	}
}

void Stack::list_f(void)
{
	int count = 0, i;

	if(top < 0)
		cout << "\n °ïÅ|¬OªÅªº\n";
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
		cout << "  Á`¦@¦³ " << count << "\n";
	}
}

int main()
{
	Stack obj;
	char option;

	while(1) {
		cout << "\n *****************************\n";
		cout << "        <1> ¿é¤J(push)\n";
		cout << "        <2> §R°£(pop)\n";
		cout << "        <3> ¦C¥X\n";
		cout << "        <4> °h¥X\n";
		cout << " *****************************\n";
		cout << " ½Ð¿é¤J¿ï¶µ..";
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

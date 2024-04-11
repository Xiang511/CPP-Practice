//²Ä10¦¸½Ò°ó½m²ß 
#include<iostream>
using namespace std;
int Max(int x, int y, int z, int w);
int Min(int x, int y, int z, int w);
int main(){
	cout<<Max(5,2,9,7) << endl;
	cout<<Min(5,2,9,7) << endl;
	system("pause");
	return 0;
}
int Max(int x, int y, int z, int w){
	int M=x;
	if(y>M) M=y;
	if(z>M) M=z;
	if(w>M) M=w;
	return M;
}
int Min(int x, int y, int z, int w){
	int m=x;
	if(y<m) m=y;
	if(z<m) m=z;
	if(w<m) m=w;
	return m;
}

//²Ä12¦¸½Ò°ó½m²ß-2023-11-16
//det{{4,1,2},{2,4,-1},{1,1,-3}}=-43
#include<iostream>
using namespace std;
double det(int M[3][3]);
int main(){
    int matrix[3][3]={{0}}; 
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			cin>>matrix[i][j];
	cout << "Det=" << det(matrix) << endl;
	system("pause");
	return 0;
}
double det(int M[3][3]){
	double value;
	value=M[0][0]*M[1][1]*M[2][2]+M[2][0]*M[0][1]*M[1][2]
	+M[0][2]*M[1][0]*M[2][1]-M[0][0]*M[1][2]*M[2][1]
	-M[0][1]*M[1][0]*M[2][2]-M[0][2]*M[1][1]*M[2][0];
	return value;
}






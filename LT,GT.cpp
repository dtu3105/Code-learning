#include <iostream>
using namespace std;
//hàm tính lũy thừa của 2 số
long long LT(long long x,long long y){
	long long result=1;
	for (int i=1;i<=y;i++){
		result=result*x;
	}
	return result;
}
//hàm tính giai thừa
long long GT(int c){
	long long result=1;
	for(int j=1;j<=c;j++){
		result=result*j;
	}
	return result;
}

int main() {
	int i;
	cin>>i;"\n";
	cout<<GT(i);
	
	return 0;
}
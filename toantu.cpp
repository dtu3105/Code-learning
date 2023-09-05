#include<iostream>

using namespace std;
//Assignment operators: toán tử gán
//toan tu toan hoc: + ,- ,* ,/ ,%,++/--(tăng/giảm biến lên 1 đơn vị),(chia lấy dư)
//toan tu so sanh:>,>=,<,<=,==,!=
//toan tu logic: AND ,OR ,NOT
// AND :&&
// OR :||
//NOT
int main(){
	cout <<"--BASIC OPERATORS--\n";
	int a,b,c;
	cout<<"insert a:= ";
	cin >> a;
	cout<<"insert b:= ";
	cin >> b;
	int cong = a+b;
	int hieu = a-b;
	int nhan = a*b;
	float chia = (float)a/b;
	int du = a%b;
	cout <<"Tong:= "<<cong<<endl<<"Hieu:= "<<hieu<<endl<<"Tich:= "<<nhan<<endl<<"Thuong:= "<<chia<<endl<<"Chia du:= "<<du<<endl;
	a = a + b;// a += b
	a = a - b;// a -= b
	a = a * b;// a *= b
	a = a / b;// a /= b
	a = a % b;// a %= b
	cout <<"__x++__"<<endl;
	int x = 0;
	int y = x++;//-> x = 1 , y = 0
	cout<<"x:= " <<x<<endl<<"y:= "<<y<<endl;
	cout <<"__++x__"<<endl;
	x = 0;
	y = ++x;//-> x = 1 , y = 1
	cout<<"x:= " <<x<<endl<<"y:= "<<y<<endl;
	
	cout<<"--Toan tu so sanh--"<<endl;
	bool ok = a > b;//nếu a>b kết quả sẽ trả về true ngược lại false
	
	
			
	 	return 0;
}
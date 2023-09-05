#include <iostream>
using namespace std;
//if else statements
//-> 0:false
//#0:true
/*switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}*/

int main(){
	int a,b;
	cout<<"Nhap a:= "; cin>>a;
	cout<<"Nhap b:= "; cin>>b;
	cout<<"TIM SO CHAN SO LE - 1\n";
	cout<<"TIM CAC THONG SO  - 2\n";
	cout<<"--NHAN PHIM 1 HOAC 2 DE CHON--\n";
	int usr; cin>>usr;
	if (usr == 1){
		cout<<"IF ELSE STATEMENTS\n";
		if (a % 2 == 0){
			cout<<a<<" "<<"la so chan\n";
			
		}
		else {
			cout<<a<<" "<<"la so le\n";
		}
	
	
	cout<<"SWITCH\n";
	switch (b % 2){
		case 0:
			cout<<b<<" "<<"la so chan\n";
			break;
		case !0:
			cout<<b<<" "<<"la so le\n";
			break;
	}
	float c = (float)(a + b)/2;
	cout<<"Trung binh cong cua a va b := "<<(float)c;
	}
	
	else if (usr == 2){
		int dt_hcn,cv_hcn,ncv_hcn;
		dt_hcn = a * b;
		cv_hcn = (a + b)*2;
		cout<<"CANH a := "<<a<<endl;
		cout<<"CANH b := "<<b<<endl;
		cout<<"DTHCN := "<<dt_hcn<<endl;
		cout<<"CVHCN := "<<cv_hcn<<endl;
		
		
		
	}
	else{
		cout<<"Nhap sai chuong trinh ket thuc\n";
	}	
	

		
		
	return 0;
}
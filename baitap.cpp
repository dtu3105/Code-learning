#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	//TINH DIEN TICH VA CHU VI HINH TRON
	/*int r;
	cout<<"NHAP r:= ";cin>>r;
	double cv = 2 * 3.14 * r;
	double dt = r*r* 3.14;
	cout<<"CHU VI : "<<fixed<<setprecision(2)<<cv<<endl<<"DIEN TICH : "<<fixed<<setprecision(2)<<dt<<endl;
	*/
	
	//DOI NHIET DO
	/*int usr;
	cout <<"1. C -> F\n"<<"2. F -> C\n";
	cout<<"--CHON 1 HOAC 2--\n";cin >> usr;
	if (usr == 1){
	double c,f;
	cout<<"Nhap do C:= ";cin>>c;"\n";
	f = (c * 1.8) + 32;
	cout<<"Do F:= "<<fixed<<setprecision(2)<<f;
	}
	else{
	double c,f;	
	cout<<"Nhap do F:= ";cin>>f;"\n";
	c = (f - 32)/1.8;
	cout<<"Do C:= "<<fixed<<setprecision(2)<<c;
	}
	*/
	
	//TINH GTTD CAN BAC 2
	/*
	double a;
	cout<<"NHAP a:=  "; cin>>a;"\n";
	cout<<"|"<<a<<"|"<<" = "<<abs(a)<<"\n";
	cout<<"Can bac 2 cua \n";
	if (a > 0){
	cout<<"Can bac 2 cua "<<a<<" = "<<fixed<<setprecision(2)<<sqrt(a);
	}
	else{
		cout<<"Nhap sai chuong trinh ket thuc\n"; 
	}
	*/
	
	//luy thua
	/*int x,y;
	cout<<"Nhap x:= ";cin>>x;"\n";
	cout<<"Nhap y:= ";cin>>y;"\n";
	cout<<x<<"^"<<y<<" = "<<pow(x,y);
	*/
	//tinh tong 1
	/*int n;
	cout<<"nhap n:= "; cin >>n;
	cout<<"1+2+3+...+"<<n-1<<"+"<<n<<" = "<<(n*(1+n))/2;
	*/
	//tinh tong 2
	/*
	long long n;
	cout<<"nhap n:= "; cin >>n;
	long long res =  n * ( n + 1 ) * ( 2 * n + 1 )/6;
	cout<<res;

	//tim nam nhuan
	/*
		int a;
	cout<<"nhap nam:= ";cin>>a;
	if (a < 0){
		cout<<"INVALID NUMBER\n";
	}
	else{
	
		if ((a % 400 == 0) || (a % 4 == 0 ) && a % 100 != 0){
		cout<<"NAM NHUAN";"\n";
		}
		else
		cout<<"NAM KO NHUAN";
	}
	*/
	/*int t,n;
	cout<<"nhap thang: = ";cin>>t;"\n";
	cout<<"nhap nam: = ";cin>>n;"\n";
	if((t>12)||(t<=0)||(n <= 0)){
		cout<<"INVALID\n";
	}
	else if((n % 400 == 0)||(n % 4 == 0)&&(n % 100 != 0)){
		if (t == 2){
			cout<<"THANG "<<t<<" CO 29 NGAY\n"; 
		}
		else if(((t != 2)&&(t % 2 != 0)&&(8>t>0)) || ((t != 2)&&(t % 2 == 0)&&(7<t>0))) {
			cout<<"THANG "<<t<<" CO 31 NGAY\n";
		}
		else if(((t != 2)&&(t % 2 == 0)&&(8>t>0)) || ((t != 2)&&(t % 2 != 0)&&(7<t>0))){
			cout<<"THANG "<<t<<" CO 30 NGAY\n";
		}
		cout<<"NAM "<<n<<" LA NAM NHUAN\n";
	}
	else{
		if (t == 2){
			cout<<"THANG "<<t<<" CO 29 NGAY\n"; 
		}
		else if(((t != 2)&&(t % 2 != 0)&&(8>t>0)) || ((t != 2)&&(t % 2 == 0)&&(7<t>0))) {
			cout<<"THANG "<<t<<" CO 31 NGAY\n";
		}
		else if(((t != 2)&&(t % 2 == 0)&&(8>t>0)) || ((t != 2)&&(t % 2 != 0)&&(7<t>0))){
			cout<<"THANG "<<t<<" CO 30 NGAY\n";
		}
		cout<<"NAM "<<n<<" LA NAM KO NHUAN\n";
	}
	*/
	//sap xep 3 so nguyen
	long long a,b,c;
	cout<<" nhap a:= ";cin>>a;"\n";
	cout<<" nhap b:= ";cin>>b;"\n";
	cout<<" nhap c:= ";cin>>c;"\n";
	int max = a,min=a;
	if (b<min) min=b;
	if (c<min) min=c;
	if (b>max) max=b;
	if (c>max) max=c;
	cout<<max<<" "<<min;
	
	
		
		
	
	
	
			
			
	return 0;		
}
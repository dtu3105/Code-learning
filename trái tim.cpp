#include <iostream>
using namespace std;
int main(){
	for(int i=1;i<=11;i++){
		if(i==3||i==4||i==8||i==9){
			cout<<"-";
		}
		else cout<<" ";
	}
	cout<<endl;
	for(int i=1;i<=11;i++){
		if(i==1||i==6||i==11){
			cout<<" ";
		}
		else cout<<"-";
	}
	cout<<endl;
	for(int i=1;i<=2;i++){
		for(int j=1;j<=11;j++){
			cout<<"-";
		}
		cout<<endl;
	}
//	
	for(int i=5;i>=1;i--){
		for(int j=5;j>=i;j--){
			cout<<" ";
		}
		for(int j=1;j<=i*2-1;j++){
			cout<<"-";
		}
		cout<<endl;
	} 
		
	return 0;
}
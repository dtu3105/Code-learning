#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int pow (int a,int b){
	int sum=1;
	for(int i=1;i<=b;i++){
		sum*=a;
	}
	return sum;
}
long long max(int a){
	int max=a;
	if(b>max){
		max=b;
	}
	return 1;
}
long long min(int a){
	int min=a;
	if(a<min){
		min=a;
	}
	return 1;
}
int nt(int x){
	if(x<2){
		return 0;
	}
	int cnt=0;
	for	(int i=1;i<=x;i++){
		if(x%i==0){
			cnt+=1;
		}
	}
	if(cnt==2){
		return 1;
	}
	else
		return 0;	
}
int check_le(int x){
	while(x!=0){
		int r= x%10;
		if(r%2==0) return 0;
		x/=10;
	}
	return 1;
}
int tang(int x,int y){
	int temp=x+1;        
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>arr[i];
	}
	int max=arr[0],max2=arr[0],min=arr[0],temp=0,cnt=0;
	for(int i=0;i<n;i++){
		if(tang(arr[i],arr[i+1])){
			
		}
	
	}

	            
	
	
		
		
		
	
	
	return 0;
}
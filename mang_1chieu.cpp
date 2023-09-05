#include <iostream>
using namespace std;
//M?NG M?T CHI?U
// KIEU_Dulieu tenmang[soluong phan tu];
//tenmang[index]
//chi so bat dau tu 0 
int check(int x){
	while(x!=0){
		int r=x%10;
		if(r%2==0)return 0;
		x/=10;
	}
	return 1;
}
int main(){
	int n;
	cout<<"Nhap n:= ";cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]: ";cin>>arr[i];
	}
	int max1=0,max2=0,min=0,cnt=0;
	for(int i=0;i<n;i++){
		if(check(arr[i])){
			cnt++;
		}
		
	}
	cout<<cnt<<endl;
	for(int i=0;i<n;i++){
		if(check(arr[i])){
			cout<<arr[i];
		}
		
	}

		
	
	
	/*
	cach nhap hoac duyet mang ngan gon chi
	 dung dc cho truong hop int a[n]
	 neu int a[100...] thi cach ngan gon do se bat nhapdu 
	 cac phan tu 
	 */
	//cach nhap mang
	//for(int &x:a) cin>>x;
	
	
	/* cach duyet mang thu 1
	for (int i=0;i<n;i++){
		cout<<a[i];
	}
	*/
	//cach duyet mang thu 2
	//for(int x:a){
//		cout<<x<<" ";
//		tong+=x;
//		tich*=x;
//		cout<<endl;
//	}
//	cout<<"Tong := "<<tong<<endl;
//	cout<<"Tich := "<<tich<<endl;
//	cout<<"TB cua mang:= "<<tong/n<<endl;
	
//	for(int i=0;i<n;i++){
//		if(snt(a[i])){
//			cout<<a[i]<<" ";
//		}
//	}

	
	
	return 0;
}
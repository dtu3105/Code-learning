#include <bits/stdc++.h>
#include <vector>
using namespace std;
//VECTOR
//Khai bao Vector
//vector<kieu_dulieu>ten_vector
//push_back -> them phan tu vao cuoi mang
//size():kich_thuoc vector
//back():phan tu cuoi cung
//Duyet thong qua chi so(index)
//Duyet bang for each
//Duyet thong qua iterator
//vector <int> v;
//vector <int> v(n);
//vector <int>v(n,value)-> cho tat ca ca phan tu deu co gia tri là valuef
int main(){
    int n;cin>>n;
    vector <int> v(n);//khai bao vector nhung da co n phan tu



    int ele,usr;
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
  do{
    cin>>ele;
    v.push_back(ele);
    cout<<"DO YOU WANT TO ADD MORE?\n";
    cout<<"1.YES\n";
    cout<<"2.NO\n";
    cout<<"YOUR CHOICE:= ";cin>>usr;
  } while(usr == 1);
    //cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";//v[i]:truy cap den cac phan tu
    }
    cout<<endl;
    for(int x:v){
        cout<<x<<endl;
    }

    //khai bao iterator trong vector
    //Dung de truy cap den phan tu trong mang
    //Cach khai bao
//DUNG FOR__KHOI TAO ITERATOR_DAT TEN LA "it" VA DAT ITERATOR DO LA DIEM BAT DAU TRONG MANG_;
//DK DE "it" DUYET TU DAU DEN HET MANG;__TANG IT LEN 1 DON VI SAU MOI VONG LAP

    for(vector<int>::iterator it = v.begin(); it!=v.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;



    for(auto it= v.begin();it!= v.end();++it){
        cout<<*it<<endl;
    }




    cout<<v[2]<<endl;
    cout<<*(v.begin())+2)<<endl;

    return 0;
}

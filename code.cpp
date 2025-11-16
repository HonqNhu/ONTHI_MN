#include <iostream>

using namespace std;

bool soNguyenTo(int x){
if( x < 2) return false;
else if( x == 2) return true;
else {
for(int i =2; i < x; i++){
if( x % i == 0)
	return false;
}
return true;
}}
int main(){
int n;
cout <<"Nhap n: ";
cin>>n;
if(soNguyenTo(n))
cout<<"La so nguyen to";
else
cout<<"Khong la so nguyen to";
return 0;
}
#include<iostream>
using namespace std;
int function(int a[]);
int main()
{
	int *a= new int();
	*a=10;
	cout<<a<<endl;
	cout<<*a<<endl;
	delete(a);
	a=NULL;
	cout<<a<<endl;
	a=new int[6];
	for(int i=0;i<6;i++){
		a[i]=i;
	}
	for(int i=0;i<6;i++){
		cout<<a[i]<<",";
	}
	function(a);
}
int function(int a[]){
	for(int i=0;i<6;i++){
		cout<<&a[i]<<",";
	}
}

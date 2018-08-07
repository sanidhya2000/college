#include<iostream>
using namespace std;
int fact(int i){
	int facto=1;
	if(i==0)
	return 1;
	else
	return i*fact(i-1);
}


int main(){
	int i,j;
	cin>>i;
	int k=fact(i);
	
	cout<<k;
	
	
}

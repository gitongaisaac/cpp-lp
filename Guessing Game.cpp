#include<iostream>
using namespace std;

int main(){
	
int hostUserNum,guestUserNum;
cout<<"Host"<<endl;
cin>>hostUserNum;
system("cls");	

cout<<"Guest:";
cin>>guestUserNum;

if(hostUserNum==guestUserNum)
cout<<"correct!";

else{
	cout<<"failed!";
}	
}

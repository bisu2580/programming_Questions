#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
	string zoo;
	int count=0,count1=0;
	getline(cin,zoo);
	int m=zoo.length();
	for(int i=0;i<m;i++){
		if(zoo[i]=='z'){
			count++;
		}
		if(zoo[i]=='o'){
			count1++;
		}
	}
	if((count1/count)==2&&(remainder(count1,count)==0)){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}
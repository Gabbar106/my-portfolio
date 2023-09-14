/*Q: Given two arrays u have to find the numbers from each array with absolute difference of minimum.*/

#include<iostream>
using namespace std;
#include<vector>
#include<math.h>
#define ll long long
int main(){
	ll num;
	cout<<"Enter the number of elements in a array:";
	cin>>num;
	vector<ll> v(10001,0);
	for(int i=0;i<num;i++){
		ll x;
		cin>>x;
		v[x]+=1;
	}
	for(int i=0;i<num;i++){
		ll x;
		cin>>x;
		v[x]+=2;
	}
	for(int i=0;i<v.size();i++){
		if(v[i]>2){
			cout<<i<<" "<<i<<endl;
			return 0;
		}
	}
	ll diff=INT_MAX,a=0,b=0;
	for(int i=0;i<v.size();i++){
		if(i==0){
			continue;
		}
		for(int j=i+1;j<v.size();j++){
			if(j==0){
				continue;
			}
			if((v[i]==1&&v[j]==2)||(v[i]==2&&v[j]==1)){
				if(abs(j-i)<diff){
					diff=abs(i-j);
					a=i;
					b=j;
				}
			}
		}
	}
	cout<<a<<" "<<b<<endl;

/*
But with 2 problems:

1.This can't be applied when the array have negative integers;
2. I cannot differentiate which number came from which array;

*/

}
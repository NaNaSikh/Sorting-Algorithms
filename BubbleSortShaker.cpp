#include <bits/stdc++.h>
using namespace std; 

int n,k,t,l,r,x; 
int main(){
	cin>>n; 
	int arr[n];
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	bool p=true; 
	k=n-1;
	t=0;
//zrdadobit	
	while(p){
		p=false;
		r=k;
		l=t;
		for(int i=l; i<r; i++){
			if(arr[i]>arr[i+1]){
				x=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=x;
				p=true; 
				k=i;
			}
		}
		
		if(p){
			p=false; 
			for (int i=(k-1); i>=l; i--){
				if(arr[i]>arr[i+1]){
					x=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=x;
					p=true; 
					t=i+1;
				}
			}
		}
	}
	
	
	for (int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}	
		
return 0;
}
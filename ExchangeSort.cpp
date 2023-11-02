#include <bits/stdc++.h>
using namespace std; 

int n,k,r,x; 
int main(){
	cin>>n; 
	int arr[n];
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	bool p=true; 
	k=n-1;
	
	while(p){
		p=false;
		r=k;
		for(int i=0; i<r; i++){
			if(arr[i]<arr[i+1]){
				x=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=x;
				p=true; 
				k=i;
			}
		}
	}
	
	
	for (int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}	
		
return 0;
}
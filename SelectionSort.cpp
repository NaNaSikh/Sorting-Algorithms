#include <bits/stdc++.h>
using namespace std; 

int n,k,mx; 
int main(){
	cin>>n; 
	int arr[n];
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for (int i=0; i<(n-1); i++){
		k=i; 
		mx=arr[i];
		for (int j=(i+1); j<n; j++)	{
			if(arr[j]>mx){
				mx=arr[j];
				k=j;
			}
		}
		arr[k]=arr[i];
		arr[i]=mx;
	}
	
	
	for (int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}	
		
return 0;
}
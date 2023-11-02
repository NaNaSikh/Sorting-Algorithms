#include <bits/stdc++.h>
using namespace std; 

int n,r,l,k,x,m; 
int main(){
	cin>>n; 
	int arr[n];
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for (int i=0; i<n; i++){
 			cout<<arr[i]<<" ";
 		} cout<<endl;
	for (int i=1; i<n; i++){
		r=i; 
		l=0;
			while(l<r){
				m=(l+r)/2;
					if(arr[m]<arr[i]){
						l=m+1;
					
					} else {
						r=m;
					}
			}
		k=r; 
		x=arr[i];
			for(int j=i; j>=(k+1); j--){
			 	arr[j]=arr[j-1];
			 	}
		arr[k]=x;
		for (int i=0; i<n; i++){
 			cout<<arr[i]<<" ";
 		}cout<<endl;
	}
	
 for (int i=0; i<n; i++){
 	cout<<arr[i]<<" ";
 }
 
return 0;
}
#include <bits/stdc++.h>
using namespace std; 
int A[10000];
int n,L,R; 


/*void QUICKSORT(int L, int R, int A[] ){
	int i=L; 
	int j=R;
	
	int x=A[(L+R)/2];
	
	do{ 
	
		while(A[i]<x) { i++;}
		while(A[j]>x){j--;}
		
		if(i<=j){
			swap(A[i],A[j]);
			i++; 
			j--;	
		}
	} while(i<=j);
	
	if(L<j) QUICKSORT(L,j,A);
	if (i<R) QUICKSORT(i, R, A);
	
}*/


void QUICKSORT(int L, int R, int A[]){
	
	int i=L;
	int j=R; 
	
	int x=A[(R+L)/2];
	
	do{
		while(A[i]<x){
			i++;
		} while(A[j]>x){
			j--;
		}
		if(i<=j){
			swap(A[i],A[j]); 
			i++; 
			j--;
		}		
	} while(i<=j);
	
	if(L<j) QUICKSORT(L,j,A);
	if(i<R) QUICKSORT(i,R,A);
	
}






int main(){
cin>>n; 
	for(int i=0; i<n; i++){
		cin>>A[i];
	}	
	L=0; 
	R=n-1;
	
	QUICKSORT(L,R,A);
	
	for(int i=0; i<n; i++){
		cout<<A[i]<<" ";
	}
return 0;
}
#include <iostream> 
#include<stdio.h>
using namespace std;

int gt(int n){
	if (n==0){
		return 1;
	}
	else
	return n*gt(n-1);
}
long fibo(int n){
	if(n<=1)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}
int nCk(int n, int k){
	if(k==0||n==k)
	return 1;
	else 
	return nCk(n-1,k)+nCk(n-1,k-1);
}
int main(){
	cout << nCk(10,2)<<endl;
	return 0;
}

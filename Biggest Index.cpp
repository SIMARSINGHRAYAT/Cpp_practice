#include<iostream>
# define MAX 5
using namespace std;
int main(){
	int a[MAX];
	int n;
	int max;
	cout << "Enter array size : " << endl;
	cin >> n;
	cout << "Enter array element : " << endl;
	for(int  i = 0; i < n; i++){
		cin >> a[i];
	} 
	for(int i = 1; i  < n; i++){
		a[i] += a[i-1];
	}
	int m, limit = 0, sum  = 0;
	for(int  i = 0; i < n; i++){
		m = n - i + 1; limit = 0; sum = 0;
			for(int j  = 1; m - 0 > j; j++){
				limit += j;
				m -= j;
			}
	sum += a[limit+i-1]-a[i-1];
	if(sum  > max){
		max = sum;
	}
}
cout <<"Biggest index sum is : " << max <<endl;	
return 0;
}
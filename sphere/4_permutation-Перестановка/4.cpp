#include <iostream>
#include<vector>
using namespace std;

void swap(int a,int b){
	int t;
	t = b;
	b = a;
	a = t;
}
long long factorial(int n){
	if(n == 1){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}

void fun(int N, long long m){
	vector<int> a(N);
	vector<int> b(N);
	for(int i = 0; i < N ; i++){
		a[i] = i + 1;
		b[i] = i+1;
	}
	for(int i = 1; i < N; i++){
		long long count_in_group = factorial(N-i);
		long long group = (m + count_in_group - 1) / count_in_group;
		//cout << group << endl;
		//long long pos_in_group = m % count_in_group == 0 ? count_in_group :  m % count_in_group ;
		long long pos_in_group_fs = group % (N-i+1) == 0 ? (N-i+1) :  group % (N-i+1) ;
		//long long index_swap = (i-1)+ pos_in_group_fs-1;

		b[i-1] = a[pos_in_group_fs-1];
		a.erase(a.begin()+pos_in_group_fs-1);
		if(i==N-1){
			b[N-1] = a[0];
		}

	}
	for(int i = 0; i < b.size(); i++){
		cout << b[i]<<" ";
	}
	cout << endl;
}

int main() {
	//cout << factorial(19);
	long long N,m;
	cin >> N >> m;
	fun(N,m);





}

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#include <ctime>

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


string rec(int n){
	if(n==1){
		return "1";
	}else{
		string s = rec(n-1);
		string r = s;
		reverse(r.begin(), r.end());
		return to_string(n) + s+r;
	}
}

int gcd (long long a, long long b, long long & x, long long & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	long long x1, y1;
	long long  d = gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}

int main() {
	long long  p , m;
	cin >> p >> m;
	long long x, y;
	long long g = gcd (p, m, x, y);
	if (g != 1)
		cout << "no solution";
	else {
		x = (x % m + m) % m;
		cout << x;
	}
	 //unsigned int start_time =  clock(); // начальное время
	 //cout << rec(27)[7];
	  // unsigned int end_time = clock(); // конечное время
	   // unsigned int search_time = end_time - start_time; // искомое время
	    //cout << endl <<search_time/1000;

}

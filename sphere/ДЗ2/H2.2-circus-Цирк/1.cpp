#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> m;
	for( int i = 0; i < n; i++) {
		pair<int,int> p;
		int ma,f;
		cin >> ma >> f;
		p.first = f;
		p.second = ma;
		m.push_back(p);
	}
	sort(m.rbegin(), m.rend());
	int mk = m[n-1].second;
	int res = 1;
	for(int i = n-2; i >= 0; i--){
		if(m[i].first >= mk){
			res++;
			mk = mk + m[i].second;
		}
	}
	for(auto i : m){
		//cout << i.second  << " "<< i.first << endl;
	}

	cout << res;



}

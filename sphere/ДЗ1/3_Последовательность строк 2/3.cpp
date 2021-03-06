#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


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


int rec_v(int n, int index, vector<int> len){
	if(n==1){
		return 1;
	}else{
		if(index == 1 && n/10<1){
			return n;
		}else if(index == 1 && n/10 >= 1){
			return n/10;
		}else if(index == 2 && n/10 >= 1){
			return n%10;
		}
		if( n/10>=1){
			int ind = (index - 2) % (len[n-2]+1);
					if(index > len[n-2]+2){
						ind = len[n-2]+1 - (index-1)%(len[n-2]+1);
					}
					//cout << ind<< endl;
					return rec_v(n-1, ind, len);

		}

		int ind = (index - 1) % (len[n-2]+1);
		if(index > len[n-2]+1){
			ind = len[n-2]+1 - index%(len[n-2]+1);
		}
		//cout << ind<< endl;
		return rec_v(n-1, ind, len);
	}
}

int main() {
	int n,m;
	cin >> n>> m;
	vector<int> len(n);
	len[0]= 1;
	for(int i = 1; i < len.size();i++){
		if(i>8){
			len[i] = len[i-1]*2 +2;
		}else{
			len[i] = len[i-1]*2 +1;
		}
	}
	for(int i = 1; i <= m;i++){
		int c;
		cin >> c;
		cout << rec_v(n, c ,len) << "";
		}


}


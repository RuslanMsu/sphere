#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#include <ctime>


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

int main() {
	int N,M;
	cin>>N>>M;
	for(int i = 0; i < M;i++){
		int c;
		cin >>c;
		cout << rec(N)[c-1];
	}

	 //unsigned int start_time =  clock(); // начальное время
	 //cout << rec(27)[7];
	  // unsigned int end_time = clock(); // конечное время
	   // unsigned int search_time = end_time - start_time; // искомое время
	    //cout << endl <<search_time/1000;

}

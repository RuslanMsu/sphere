#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int t;
	int count = 0;
	int count_min = 0;
	for(int i = 0; i < n; i++){
		cin >> t;
		if(t==5){
			count++;
		}else{
			if(t-5 <= count*5){
				count-=(t-5)/5;
			}else{
				count_min += ((t-5) - count*5)/5;
				count = 0;
			}
		}

	}
	cout << count_min;
	return 0;
}

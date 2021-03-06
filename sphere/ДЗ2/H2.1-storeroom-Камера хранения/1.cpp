#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;



struct point{
	int time;
	int status; // 0 - ???? ?????? ?????????. 1 - ?????
};

bool operator< (point l, point r){
	if(l.time == r.time){
		return l.status < r.status;
	}
	return l.time < r.time;
	}


int main(){
	int n;
	cin >> n;
	vector<point>m;

	for(int i = 0; i < n; i++){
		int h1,h2,m1,m2;
		scanf("%d:%d %d:%d", &h1,&m1,&h2,&m2);
		point start;
		start.time = h1*60 + m1;
		start.status = 0;
		point end;
		end.time = h2*60 + m2;
		end.status = 1;
		m.push_back(start);
		m.push_back(end);
	}




	sort(m.begin(), m.end());
	int count_open = 0;
	int max_open = 0;
	for(int i = 0; i < m.size();i++){
		if(m[i].status == 0  ){

			count_open++;
			max_open = max(max_open,count_open);

		}
		else{
			count_open--;

		}

	}
	cout << max_open<< endl;


	for(auto i : m){
	//	cout << i.time << " "<< i.status << endl;
	}

}

/*
6
01:00 04:00
02:00 09:00
03:00 07:00
05:00 08:00
06:00 10:00
15:00 16:00



5
01:00 23:59
00:01 01:00
16:00 17:00
00:55 02:00
00:01 00:02
*/

/*
4
01:00 04:00
01:00 04:00
01:00 04:00
01:00 04:00
*/

/*
2
01:00 04:00
02:00 03:00

*/

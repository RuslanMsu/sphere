#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main(){
	int x0,y0, x,y;
	cin >> x0 >> y0 >> x >> y;
	int n;
	long long dist_1 = (x-x0)*(x-x0) + (y-y0)*(y-y0);
	cin >> n;
	for(int i = 1 ; i <= n;i++){
		long long xb,yb,r;
		cin>> xb>> yb>> r;
		long long sp = (x-x0)*(xb-x0) + (y-y0)*(yb-y0);

		long long t = ((y-y0)*xb - (x-x0)*yb +x*y0 -y*x0);
		if( (dist_1*r*r > t*t && sp > 0) || (sp <= 0 && r*r> ((xb-x0)*(xb-x0) + (yb-y0)*(yb-y0)) ) ){
			cout << i << endl;

		}
	}



}

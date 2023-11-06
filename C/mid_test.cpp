#include <bits/stdc++.h>
using namespace std;

#define allout(MSG,X) cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<" "


int main() {
	array< array<int,4>, 3> X {{{1,2,3,4}, {5,6}, {9,10,11,12}} };
	cout << "\n p21 = " << X[2][3] ;
	cout << "\n p22 = " << X[1][3] ;
	cout << "\n p23 = " << X[1].size() + X.size() ;
	int S = 0 ;
	for(int i=0 ; i<3; ++i) S += X[i].back() ;
	cout << "\n p24 = " << S ;
	
	return 0;
}

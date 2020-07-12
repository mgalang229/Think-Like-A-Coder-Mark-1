#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	string s, ns;
	getline(cin, s);
	for(int i=0; i<(int)s.size(); ++i) {
		ns+=s[i];
		if(s[i+1]==' '||s[i+1]=='\0') {
			int tmp=stoi(ns);
			int a[1000], cnt=0;
			while(tmp!=0) {
				a[cnt]=tmp%10;
				tmp/=10;
				cnt++;
			}
			int d=0;
			for(int j=cnt-1; j>=0; --j) {
				d+=a[j]*pow(2, j);
			}
			ns="";
			cout << (char)d;
		}
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	solve();
	return 0;
}

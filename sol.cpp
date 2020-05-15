#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s, s2;
	cin >> s >> s2;
	int t = 0;
	for(int i = 0; i < s.size(); i++){
		if(tolower(s[i]) < tolower(s2[i])){
			t = -1;
			break;
		} 
		if(tolower(s[i]) > tolower(s2[i])){
			t = 1;
			break;
		} 
	}
	cout << t << "\n";
	return 0;
}
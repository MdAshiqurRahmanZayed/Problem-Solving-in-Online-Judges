#include<iostream>

using namespace std;
int y, k, n, cnt;

int main(){
	cin >> y >> k >> n;
	for (int j = k; j <= n; j += k)
		if (y < j){
			cout << j - y << " ";
			cnt = 1;
		}
	if (cnt == 0)
		cout << -1 << endl;
	else
		cout << endl;
	return 0;
}

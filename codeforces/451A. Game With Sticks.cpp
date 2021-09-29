#include <bits/stdc++.h>
using namespace std;
int main(){
    int a , b;
    cin >> a >> b;
    a = min(a , b);
    if (a % 2 == 1){
	 cout << "Akshat" << endl;
	 return  0;
    }
    cout << "Malvika" << endl;
    return 0;
}
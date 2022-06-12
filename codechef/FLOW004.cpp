#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
     int n,a,b,c,d;
     cin>>n;
     string str,str1,str2;
     while (n--)
     {
          cin>>str;
          str1 = str[0];
          str2 = str[str.length()-1];
          a = stoi(str1);
          b = stoi(str2);
         // a=stoi(str);
          cout << a+b << endl;

          /* code */
     }
     
}
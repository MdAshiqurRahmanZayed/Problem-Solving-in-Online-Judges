#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
     int n;
     cin>>n;
     while (n--)
     {
          string str;
          cin>>str;
          if (str[0]=='B' || str[0]=='b')
          {
               cout << "BattleShip"<<endl;
               /* code */
          }
          else if (str[0] == 'c' || str[0] == 'C')
          {
               cout << "Cruiser" << endl;
               /* code */
          }

          else if (str[0] == 'D' || str[0] == 'd')
          {
               cout << "Destroyer" << endl;
               /* code */
          }

          else if (str[0] == 'f' || str[0] == 'F')
          {
               cout << "Frigate" << endl;
               /* code */
          }

          /* code */
     }
     
}
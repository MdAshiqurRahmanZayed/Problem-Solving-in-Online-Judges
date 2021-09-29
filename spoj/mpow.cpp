#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define ee endl
#define N 10000
using namespace std;

lli ar[N][N], I[N][N];

void mul(lli A[][N], lli B[][N], lli dim)
{
  lli res[dim + 1][dim + 1];
  REP(i, dim)
  {
    REP(j, dim)
    {
      res[i][j] = 0;
      REP(k, dim)
      {
        res[i][j] = (res[i][j]+( A[i][k] * B[k][j])) % mod;
      }
    }
  }
  REP(i, dim)
  REP(j, dim) A[i][j] = res[i][j];
}

void power(lli A[][N], lli dim, lli n)
{
  REP(i, dim)
  REP(j, dim)
  {
    if (i == j)
      I[i][j] = 1;
    else
      I[i][j] = 0;
  }
  // REP(i,n)
  // mul(I,A,dim);
  while (n)
  {
    if (n % 2)
    {
      mul(I, A, dim);
      n--;
    }
    else
    {
      mul(A, A, dim);
      n /= 2;
    }
  }

  REP(i, dim)
  REP(j, dim) A[i][j] = I[i][j];
}

void printmatrix(lli A[][N], lli dim)
{
  REP(i, dim)
  {
    REP(j, dim)
    {
      cout << A[i][j] << " ";
    }
    cout << ee;
  }
}

int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  lli t, dim;
  lli n;
  cin >> t;
  while (t--)
  {
    cin >> dim >> n;
    REP(i, dim)
        REP(j, dim) cin >> ar[i][j];
    power(ar, dim, n);
    printmatrix(ar, dim);
  }
}

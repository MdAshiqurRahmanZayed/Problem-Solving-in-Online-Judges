/* #include <iostream>
using namespace std;
int swap(int i, int j)
{
    int temp;
    temp = i;
    i = j;
    j = temp;
}
int main()
{
    double n, x;
    cin >> n >> x;
    int test;
    int arr[3] = {0, 1, 2};
    // int arr[1] = {1};
    // int arr[2] = {2};

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {

            int temp;
            temp = arr[1];
            arr[1] =arr[2];
            arr[2] = temp;
            // swap(arr[1], arr[2]);
        }
        else
        {
            int temp;
            temp = arr[0];
            arr[0] =arr[1];
            arr[1] = temp;
            // swap(arr[0], arr[1]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        test = i;
        if (test == x)
        {
            printf("%d", arr[i]);
            return 0;
        }

    }
} */
#include <iostream>
using namespace std;
int p[6][3]={
	{0,1,2},
	{1,0,2},
	{1,2,0},
	{2,1,0},
	{2,0,1},
	{0,2,1}
};
int main()
{
    int n,t;
 
	
	scanf("%d %d",&n,&t);n%=6;
	printf("%d",p[n][t]);
	return 0;
}

#include <iostream>
#include <fstream>

using namespace std;
#define PI 3.14159265358979323846
int main()
{
    ofstream file;
    // file.open("student_detail.txt", ios::out | ios::app);
    // FILE *fptr;
    // fptr = fopen("output.txt", "w");

    int t, r1, r2, h, p;
    double r3;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        scanf("%d %d %d %d", &r1, &r2, &h, &p);
        r3 = p / (h * 1.0) * (r1 - r2) + r2;
        printf("Case %d: %.8lf\n", i, ((PI / 3.0) * p * (r3 * r3 + r2 * r2 + (r3 * r2))));
        // test = ((PI / 3.0) * p * (r3 * r3 + r2 * r2 + (r3 * r2)));
        //file<<"Case "<<i<<": "<<test<<endl;
        // fprintf(fptr,"Case %d: %.8lf\n", i, ((PI / 3.0) * p * (r3 * r3 + r2 * r2 + (r3 * r2))));
    }
}

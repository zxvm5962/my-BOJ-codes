#include <iostream>

using namespace std;

int main()
{
    int a;
    double b;
    cin >> a >> b;
    double sum = 0;
    sum += 2 * a;
    sum += 2 * b * 3.141592;
    printf("%.6lf",sum);

    return 0;
}

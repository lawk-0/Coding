#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float f;
    double d;
    // scanf("%d %ld %c %f %lf", &a, &b, &c, &f, &d);
    // printf("%d\n%ld\n%c\n%.3f\n%.9lf\n",a, b, c, f, d);
    cin>>a>>b>>c>>f>>d;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout.precision(3);
    cout<<fixed;
    cout<<f<<endl;
    cout.precision(9);
    cout<<fixed;
    cout<<d;
    return 0;
}

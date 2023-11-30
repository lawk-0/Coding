#include<iostream>
using namespace std;
union money//In union only one can be used at a time
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};
int main(){
        union money m1;
        m1.rice = 34;
        cout<<m1.rice;
        return 0;
}

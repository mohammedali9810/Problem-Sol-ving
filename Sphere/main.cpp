#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float R;
    cin>>R;
    cout<<"VOLUME"<<" "<<"="<<" "<<fixed<<setprecision(3)<<4.0/3*3.14159*(R*R*R)<<endl;
    return 0;
}

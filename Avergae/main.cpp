#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double A,B,S;
    cin>>A>>B;
    S = (A * 3.5 + B * 7.5)/(3.5+7.5);
    cout<<"MEDIA"<<" "<<"="<<" "<<fixed<<setprecision(5)<<S<<endl;
    return 0;
}

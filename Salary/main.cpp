#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    short N,H;
    float R;
    cin>>N>>H>>R;
    cout<<"NUMBER"<<" "<<"="<<" "<<N<<"\n"<<"SALARY"<<" "<<"="<<" "<<"U$"<<" "<<fixed<<setprecision(2)<<H*R<<endl;
    return 0;
}

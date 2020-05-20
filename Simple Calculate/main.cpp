#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    array <float , 6> P;
    for(char i=0;i<P.size();i++){
        cin>>P[i];
    }
    cout<<"VALOR A PAGAR: "<<"R$ "<<fixed<<setprecision(2)<<P[1]*P[2]+P[4]*P[5]<<endl;
    return 0;
}

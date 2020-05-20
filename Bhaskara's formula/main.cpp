#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    float A,B,C,R,FR,SR;
    cin>>A>>B>>C;
    R = (B*B) - (4*A*C);
    if(R>0 & A>0){
       FR = (-B + pow(R , 0.5))/(2 * A);
       SR = (-B - pow(R , 0.5))/(2 * A);
       cout<<fixed<<setprecision(5)<<"R1 = "<<FR<<"\n"<<"R2 = "<<SR<<endl;
    }
    else cout<<"impossivel calcular"<<endl;
    return 0;
}

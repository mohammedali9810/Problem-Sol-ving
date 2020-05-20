#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float A,B,C;
    cin>>A>>B>>C;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<0.5*A*C<<"\n"<<"CIRCULO: "<<3.14159*(C*C)<<"\n"<<"TRAPEZIO: "<<(A+B)/2*C<<"\n"<<"QUADRADO: "<<(B*B)<<"\n"<<"RETANGULO: "<<A*B<<endl;
    return 0;
}

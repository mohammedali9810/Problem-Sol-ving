#include <iostream>

using namespace std;

int main()
{
    short A,B,C,D;
    cin>>A>>B>>C>>D;
    if (B>C & D>A & C+D > A+B & (C&D)>0 & A%2==0 )
        cout<<"Valores aceitos"<<endl;
    else cout<<"Valores nao aceitos"<<endl;
    return 0;
}

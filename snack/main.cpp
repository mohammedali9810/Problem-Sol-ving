#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float A,B,V,C, X [10] {1,4.00,2,4.50,3,5,4,2,5,1.50};
    cin>>A>>B;
    for(char i=0; i<=10; i+=2){
        if(A==X[i]){
            V+=X[i+1]*B;
            cout<<"Total: R$ "<<fixed<<setprecision(2)<<V<<endl;
            break;
        }
    }
    return 0;
}

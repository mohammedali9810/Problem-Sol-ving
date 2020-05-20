#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    array <short , 3> F,S;
    for(char i=0; i<F.size(); i++){
        cin>>F[i];
        S[i]=F[i];
    }
    sort(begin(F),end(F));
    for(char i=0; i<F.size(); i++){
        cout<<F[i]<<endl;
    }
    cout<<endl;
    for(char i=0; i<F.size(); i++){
        cout<<S[i]<<endl;
    }
    return 0;
}

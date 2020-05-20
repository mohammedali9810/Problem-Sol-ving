#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float S,IN [] = {0,400,800,1200,2000,0.15,0.12,0.10,0.07}; short J=0;
    cin>>S;
    for(char i=0; i<5; i++){
        if(S>IN[J] && S<=IN[J+1]){
                cout<<fixed<<setprecision(2)<<"Novo salario: "<<((S*IN[J+5])+S)<<endl<<"Reajuste ganho: "<<(S*IN[J+5])<<endl;
                cout<<setprecision(0)<<"Em percentual: "<<(IN[J+5]*100)<<" %"<<endl;
        }
        else if(S>2000){
             cout<<fixed<<setprecision(2)<<"Novo salario: "<<((S*0.04)+S)<<endl<<"Reajuste ganho: "<<(S*0.04)<<endl;
             cout<<setprecision(0)<<"Em percentual: "<<(0.04*100)<<" %"<<endl;
             break;
        }
        J++;
    }
    return 0;
}

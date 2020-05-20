#include <iostream>
using namespace std;

int main()
{
   char T,A,B,X,F;
   cin>>A>>B;
   T = A + B;
   if(T<2|T>2000) return 1;
   else if (T == 2 | T == 3) cout<<"YES";
   else {
    for(char i=2;i<=T;i++){
            for(char X=0;X<=1000;X++){
                if(i%2!=0 & X%3!=0){
            if(i+X==T){
                cout<<"YES";
                F = i+X;
                break;
            }
            else if(i==T){
            cout<<"NO";
            break;
        }
     }
   }
if(F==T)break;
  }
}

    return 0;
}

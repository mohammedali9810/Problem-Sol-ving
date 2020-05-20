#include <iostream>

using namespace std;

int main()
{
   char T,X,Y;
   cin>>T;
   char S[T];
   for(char i=0; i<T; i++){
    cin>>X>>Y;
    S[i]=X+Y;
   }
   for(char i=0; i<T; i++){
    cout<<int(S[i])<<endl;
   }
    return 0;
}

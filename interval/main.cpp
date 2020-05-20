#include <iostream>

using namespace std;

int main()
{
    float R;
    cin>>R;
  if (R>=0 & R<=25)
    cout<<"Intervalo [0,25]";
  else if(R>25 & R<=50)
    cout<<"Intervalo (25,50]";
  else if(R>50 & R<=75)
    cout<<"Intervalo (50,75]";
  else if(R>75 & R<=100)
    cout<<"Intervalo (75,100]";
  else if(R<0 | R>100)
    cout<<"Fora de intervalo";
    return 0;
}

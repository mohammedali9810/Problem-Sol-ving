#include <iostream>

using namespace std;

int main()
{
int N;
cin>>N;
int X[46];
X[0]=0;X[1]=1;
cout<<X[0]<<" "<<X[1];
for(int i=2; i<N; i++)
	{
                X[i]=X[i-1]+X[i-2];
                cout<<" "<<X[i];
	}
	return 0;
}


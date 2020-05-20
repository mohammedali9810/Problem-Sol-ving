#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    short A;

    while( cin.peek() != EOF){
        cin>>A;
        if(A>0 && A<=100)
    cout<<"vai ter duas!"<<endl;
    else if(A==0)
    cout<<"vai ter copa!"<<endl;
    }
    return 0;
}

/*#include <stdio.h>

using namespace std;

int main() {

    short A;
    while(scanf("%d",&A) != EOF){
        if(A==0)
        printf("vai ter copa!\n");
        else if(A>0)
        printf("vai ter duas!\n");
    }
    return 0;
}*/


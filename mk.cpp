#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float A[3][3],B[3][3];
    int r, c;
    cout<<"enter metrix A: "<<endl;

    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
             cout<<"Enter A["<<r+1<<"]["<<c+1<<"]:";
             cin>>A[r][c];
        }
    }
        //display
        for(r=0;r<3;r++){
            for(c=0;c<3;c++){
cout<<"the matrix is "<<A[r][c]<<"/t";
        }
        }
    

    return 0;
}
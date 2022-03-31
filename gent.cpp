#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int mark[3];

    cout<<"Enter the first mark: ";cin>>mark[0];
     cout<<"Enter the Second mark: ";cin>>mark[1];
      cout<<"Enter the Third mark: ";cin>>mark[2];

int total=mark[0]+mark[1]+mark[2];
cout<<"The first mark is: "<<mark[0]<<endl;
cout<<"The Second mark is: "<<mark[1]<<endl;
cout<<"The Third mark is: "<<mark[2]<<endl;

cout<<"The Total mark is: "<<total;

    return 0;
}
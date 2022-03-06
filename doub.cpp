#include <iostream>
#include <iomanip>
//#include <bits/stdc++.h>
using namespace std;

int main(){
cout<<"enter the mark";
int a;
cin>>a;
if(a>90){
    cout<<"You got S grade"<<endl;
}else if(a>80){
    cout<<"You got A grade"<<endl;
}else if(a>70){
    cout<<"You got B grade"<<endl;
}else if(a>60){
    cout<<"You got C grade"<<endl;
}else if(a>50){
    cout<<"You got D grade"<<endl;
}else{
    cout<<"You got F grade:"<<endl;
    cout<<"Sorry..failed"<<endl;
}
    return 0;
}



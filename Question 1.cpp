#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int math , english , hindi , pps , science;
    int sum ;
    int per;
    
    cout<<"enter the marks of subject:";
    cin>>math>>english>>hindi>>pps>>science;
    
    sum = math+english+hindi+pps+science;
    
    cout<<sum;
    cout<<endl;
    
    per = sum/500*100;
    
    cout<<per;
}

//

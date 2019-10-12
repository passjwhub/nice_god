#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double  money,years,rate,sum;
    cout<<"please input principal, years, rate, sum, seclude them with space"<<endl;
    cin>>money>>years>>rate;
    while(money>0)
    {
        sum=money*pow((1+rate),years);
        cout<<"total need give back:"<<sum<<endl;
        cout<<"please input principal, years, rate, sum, quit with input 0"<<endl;
        cin>>money>>years>>rate;
    }
    return 0;
}
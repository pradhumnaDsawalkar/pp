#include<iostream>
using namespace std;
class average{

int n1;
public:
average(int num=0){
n1=num;
}
average operator+(average const& c2)
{
average res;
res.n1=n1+c2.n1;
res.n1/=2;
return res;
}
void print()
{
cout<<n1;
}

};
int avg(int n1,int n2)
{
 return (n1+n2)/2;
}
int avg(int n1,int n2,int n3)
{
return (n1+n2+n3)/3;
}
int main()
{
int sum=0;

//cout<<"Average of given number is:"<<avg(2,5,5);
average a1(2);
average a2(3);
average a3=a1+a2;
a3.print();

return 0;
}

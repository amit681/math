#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp = boost::multiprecision;
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cout.tie(0);
cin.tie(NULL);
int m=1e9+7;
int t;
cin>>t;
mp::cpp_int x,n,result;
while(t--){
result=1;
cin>>x>>n;
while(n>0)
{
if(n % 2 ==1)
result=(result*x)%m;
x=(x%m*x%m)%m;
n=n/2;
}
cout<<(result+m)%m<<"\n";
}
}


https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/sheero-and-the-party/
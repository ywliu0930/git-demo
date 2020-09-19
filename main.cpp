#include <iostream>
#include <complex>
using namespace std;
int main() {
   cin.tie(0);
   cin.sync_with_stdio(0);
   unsigned long int t;
   cin>>t;
   for(int cs=1;cs<=t;cs++){
       unsigned long int a,b,n;
       cin>>a>>b>>n;
       complex<double> complexnumber(a, b);
       long int dr1=pow(complexnumber, n).real();
       long int di1=pow(complexnumber, n).imag();
       while(dr1<0)
       {
           dr1+=1000000007;
       }
       while(di1<0)
       {
           di1+=1000000007;
       }
       while(dr1>1000000007)
       {
           dr1-=1000000007;
       }
       while(di1>1000000007)
       {
           di1-=1000000007;
       }
       cout << dr1 <<' '<< di1 << '\n';
   }
   return 0;
}

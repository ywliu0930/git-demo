#include <iostream>
#include <complex>
using namespace std;

complex<long> solve(complex<long> complexnumber,int n){
    if(n==1) return complexnumber;
    complex<long> temp=solve(complexnumber,n/2);
    return (n%2==0?1:complexnumber)*temp*temp;
}
int main() {
   cin.tie(0);
   cin.sync_with_stdio(0);
   unsigned long int t;
   cin>>t;
   for(int cs=1;cs<=t;cs++){
       unsigned long int a,b,n;
       cin>>a>>b>>n;
       complex<long> complexnumber(a,b);
       complex<long> ans=solve(complexnumber,n);
       long dr1=ans.real()%1000000007;
       long di1=ans.imag()%1000000007;
       cout << dr1 <<' '<< di1 << '\n';
   }
   return 0;
}

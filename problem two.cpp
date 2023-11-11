#include<bits/stdc++.h>
using namespace std;

#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
   double d=(3*530.00)/sin(65.00*(M_PI/180.0));
   d=(2*700.00)/d;
   cout << "theta is in degree" << endl;
   cout << asin(d)*(180/M_PI) << endl;
}
int main()
{
  Start
  solve();
}

#include<bits/stdc++.h>
using namespace std;
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void color(double n)
{
   if(n<380){
     cout << "wavelength is not in visible light range" << endl;
   }
   else if(n<=450){
      cout << "violet" << endl;
   }
   else if(n<=485){
      cout << "blue" << endl;
   }
   else if(n<=500){
      cout << "cyan" << endl;
   }
   else if(n<=565){
      cout << "green" << endl;
   }
   else if(n<=590){
      cout << "yellow" << endl;
   }
   else if(n<=625){
      cout << "orange" << endl;
   }
   else if(n<=750){
      cout << "red" << endl;
   }
   else {
      cout << "wavelength is not in visible light range" << endl;
   }
}

void solve()
{
  double m,d,theata,wavelength_for_maxima,wavelength_for_minima;
  printf("Enter m,d(micro meter),theata(degree) value respectively: ");
  cin >> m >> d >> theata;

  theata=theata*(M_PI/180.0); //converting in radian
  d=d*(1e-6);                 //converting in meter

  if(m!=0){
   wavelength_for_maxima=((d*sin(theata))/(m))*1e9;
   cout << "wavelength for maxima: " << wavelength_for_maxima << "nm and color is: ";
   color(wavelength_for_maxima);
  }
  else{
   cout << "Here m is invalid for maxima" << endl;
  }
  cout << "For minima we will observe dark fringe\n";
  //wavelength_for_minima=((d*sin(theata))/(m+0.5))*1e9;
  //cout << "wavelength for minima: " << wavelength_for_minima << "nm and color is: ";
  //color(wavelength_for_minima);

}
int main()
{
  Start
  solve();
}

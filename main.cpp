#include <iostream>
using namespace std;

int main() {
   float a=0, b=0, x=0, y=0, z=0;
   cin>>a>>b>>x>>y;
   if ((x<0 && (y>0)){
      z=a*x-b*y;
      cout << "Risultato="<<z<<endl;
   }
       else if ((x>=0) &&(y<=0)){
          z=a*x*x-b*y;
          cout << "Risultato=" <<z<<endl;
       }
       else {
          z=a*x+b*y*y;
          cout<< "Risultato=" <<zz<< endl;
       }
   return 0;
}

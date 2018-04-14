#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int xa, xb, xc, ya, yb, yc;

    while(cin >> xa >> ya >> xb >> yb >> xc >> yc){

      //https://en.wikipedia.org/wiki/Shoelace_formula
      //https://www.mathopenref.com/coordtrianglearea.html

      float area = 0.5 *(((xa-xc)*(yb-ya))-((xa-xb)*(yc-ya)));

        cout << area << endl;
    }
    return 0;
}

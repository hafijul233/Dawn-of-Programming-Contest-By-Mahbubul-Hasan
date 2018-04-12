#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int side_a, side_b, side_c;

    while(cin >> side_a >> side_b >> side_c){

      double semiperimeter = (side_a + side_b + side_c)/2.0;//s=(a+b+c)/2

      //area = sqrt(s(s-a)(s-b)(s-c))
      double area = sqrt(semiperimeter * (semiperimeter - side_a) * (semiperimeter - side_b) *(semiperimeter - side_c));

        cout << area << endl;
    }
    return 0;
}

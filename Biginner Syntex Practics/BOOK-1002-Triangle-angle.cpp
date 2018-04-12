#include <iostream>
#include <cmath>

#define degree 57.29582790879777

using namespace std;

int main(){

  int side_a, side_b, side_c;

    while(cin >> side_a >> side_b >> side_c){

      double angle_c = degree * acos((pow(side_a,2) + pow(side_b,2)- pow(side_c,2))/(2*side_a*side_b));

      double angle_a = degree * acos((pow(side_b,2) + pow(side_c,2)- pow(side_a,2))/(2*side_b*side_c));

      double angle_b = degree * acos((pow(side_c,2) + pow(side_a,2)- pow(side_b,2))/(2*side_c*side_a));

        cout << angle_a << " " << angle_b << " " << angle_c << endl;
    }
    return 0;
}

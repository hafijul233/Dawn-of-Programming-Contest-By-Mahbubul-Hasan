#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int value;

    while(cin >> value){

      float square_root = sqrt(value);

        int nearest_value = (int)square_root;

        cout << nearest_value << endl;
    }
    return 0;
}

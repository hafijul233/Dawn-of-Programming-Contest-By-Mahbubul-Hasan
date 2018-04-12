#include <iostream>

using namespace std;

int main(){

  int harry, larry, harry_missed, larry_missed;
    while(cin >> harry >> larry){

      int total_cans = (harry + larry) - 1;

        harry_missed = total_cans - larry;
        larry_missed = total_cans - harry;

      cout << larry_missed << " " << harry_missed << endl;
    }
    return 0;
}

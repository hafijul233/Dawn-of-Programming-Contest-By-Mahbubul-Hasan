#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int start_x,start_y,end_x,end_y;

    while(cin >> start_x >> start_y >> end_x >> end_y){

      float distance = sqrt(pow((end_x - start_x),2)+pow((end_y - start_y),2));

      cout << distance << endl;
    }
    return 0;
}

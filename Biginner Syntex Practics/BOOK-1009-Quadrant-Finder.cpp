#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int axis_x, axis_y;

	while(cin >> axis_x >> axis_y){
    if(axis_x > 0 && axis_y > 0){
      cout << "First Quadrant" << endl;
    }
    else if(axis_x < 0 && axis_y > 0){
      cout << "Second Quadrant" << endl;
    }
    else if(axis_x < 0 && axis_y < 0){
      cout << "Third Quadrant" << endl;
    }
    else if(axis_x > 0 && axis_y < 0){
      cout << "Fourth Quadrant" << endl;
    }
    else {
      cout << "Center Origin" << endl;
    }

	}
  return 0;
}

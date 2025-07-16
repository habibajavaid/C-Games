#include <iostream>
using namespace std;


int main(){

    int x , y ,z;
     x = true;
     y = false;
     z = true;

     cout << ( x || y) << endl;
     cout << ( x && z) << endl;
     cout << ( y == z) << endl;

    int  year ;

    cout << " Enter a year" << endl;
    cin>>year;

    if((year % 4 == 0) && ( year % 100 != 0 ) || (year % 400 == 0)){
        cout << " Is a leap year" << endl;
    }else {
        cout << " Is not a leap year" << endl;
    }


    


}

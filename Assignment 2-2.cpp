#include <iostream>
using namespace std;
int main()
{
     int number1, number2, number3;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;

     if (number1 == number2)
        cout << "There are two duplicate numbers" << endl;
     
     return 0;
}
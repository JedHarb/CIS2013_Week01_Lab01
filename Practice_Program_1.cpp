#include <iostream>
using namespace std;
int main( )
{
int width, height, totalLength;
cout << "Hello!\n";
cout << "Press return after entering a number.\n";
cout << "Enter the width of the rectangular area in feet:\n";
cin >> width;
cout << "Enter the height of the rectangular area in feet:\n";
cin >> height;
totalLength = width * height;
cout << "If your area is ";
cout << width;
cout << " feet wide\n";
cout << "and ";
cout << height;
cout << " feet tall, then\n";
cout << "you will need ";
cout << totalLength;
cout << " feet of fence to enclose it.\n";
cout << "Good-bye!\n";
return 0;
}
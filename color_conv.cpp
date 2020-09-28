/* Author: Maya Ramde
 * Program: color_conv
 * Description: Converts RGB -> CMYK color representation
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Declare all variables
    int red, green, blue, max_1, max_2;
    double white, cyan, magenta, yellow, black;
    
    // Receive inputs for the RGB color values
    cin >> red >> green >> blue;
    
    // Find the maximum value between the red and green values, then do the same between green and ble
    max_1 = max(red, green);
    max_2 = max(green, blue);
    
    // The high of the two 'max' values will define the value of the 'white' color
    white = (max(max_1, max_2))/255.0;
    
    // Define formula for the CMYK colors
    cyan = (white - (red/255.0)) / white;
    
    magenta = (white - (green/255.0)) / white;
    
    yellow = (white - (blue/255.0)) / white;
    
    black = 1 - white;
    
    // Output the color conversions
    cout << "cyan: " << cyan << endl;
    cout << "magenta: " << magenta << endl;
    cout << "yellow: " << yellow << endl;
    cout << "black: " << black << endl;
   
   
   
   
   return 0;
}

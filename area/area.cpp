# include <iostream>

using namespace std;

int main( ) 
{ 
    float PI = 3.141592;                // variables can be initialized during declaration 
    double rad; 
    cout<< "Enter the radius: "; 
    cin>>rad; 
    cout<< "Area of the circle is: "<< PI * rad * rad << endl; 
    return 0;
}  

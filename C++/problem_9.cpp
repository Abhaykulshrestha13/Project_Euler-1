// Special Pythagorean triplet

#include <iostream>
using namespace std;
int main()
{
    int sum = 1000;
    for (int a = 1; a <= sum/3; a++)
    {
			for (int b = a + 1; b <= sum/2; b++)
			{
				int c = sum - a - b;
				if ( a*a + b*b == c*c ){
					cout<<"a= "<<a<<", b= "<<b<<", c= "<<c<<"\n";
					int product = a*b*c;
					cout << product; 
				}
			}
    }
    return 0;
}
#include <iostream>
 
using namespace std;
 
int main() 
{
float i=0;
float J=1;
while(i <= 2.1)
{
cout << "I=" << i << " " << "J=" << J+i <<endl;
cout << "I=" << i << " " << "J=" << J+1+i <<endl;
cout << "I=" << i << " " << "J=" << J+2+i <<endl;
i+= 0.2;
}
    return 0;
}
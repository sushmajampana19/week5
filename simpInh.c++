#include <iostream> 
using namespace std; 

class superclass { 
    public:
        int a = 1;
        int b = 2;
};

class subclass: public superclass{
    public:
        int c = 3;
};

int main(){
    subclass obj;
    cout << "The sum of " << obj.a << " + " << obj.b << " + " << obj.c << " is: " << endl;
    cout << (obj.a + obj.b + obj.c) << endl;
}

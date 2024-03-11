#include<iostream>
using namespace std;

class SuperClass
{
    public:
        int pub=10;

    private:
        int pvt=20;

    protected:
        int pro=30;

    public:
        int gValp()
        {
            return pvt;
        }
        int gValpr()
        {
            return pro;
        }
        int gValpu()
        {
            return pub;
        }
};

//public  Inheritance
class SubClass01: public SuperClass
{
    public:
        int var1=pub;
        int var2=pro;
        int var3=gValp();
};

//private  Inheritance
class SubClass02: private SuperClass
{
    public:
        int var01=pub;
        int var02=pro;
        int var03=gValp();

};

//protected  Inheritance
class SubClass03: protected SuperClass
{
    public:
        int var001=pub;
        int var002=pro;
        int var003=gValp();

};

int main()
{
    SuperClass obj;
    SubClass01 obj1;
    SubClass02 obj2;
    SubClass03 obj3;
    cout<<"SubClass01\n";
    cout<<"Public : "<<obj1.var1<<endl;
    cout<<"Protected : "<<obj1.var2<<endl;
    cout<<"Private : "<<obj1.var3<<endl;
    cout<<"SubClass02\n";
    cout<<"Public : "<<obj2.var01<<endl;
    cout<<"Protected : "<<obj2.var02<<endl;
    cout<<"Private : "<<obj2.var03<<endl;
    cout<<"SubClass03\n";
    cout<<"Public : "<<obj3.var001<<endl;
    cout<<"Protected : "<<obj3.var002<<endl;
    cout<<"Private : "<<obj3.var003<<endl;
    return 0;
}

 #include<iostream>
using namespace std;

class ClassA
{
    public:
        void aClass()
        {
            cout<<"Iam a parent classA\n";
        }
};

class ClassB: public ClassA
{
    public:
        void bClass()
        {
            cout<<"Iam a child of ClassA\n";
        }
};

class ClassC: public ClassA
{
    public:
        void cClass()
        {
            cout<<"Iam also child of ClassA\n";
        }
};

class ClassD: public ClassC,public ClassB
{
    public:
        void dClass()
        {
            cout<<"Iam a ClassD\n";
        }
};

int main()
{
    ClassD obj1;
    //obj1.aClass();
    //aClass() method becomes ambiguous here
    obj1.bClass();
    obj1.cClass();
    obj1.dClass();
    return 0;
}


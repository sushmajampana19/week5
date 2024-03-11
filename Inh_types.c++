#include<iostream>

using namespace std;
//simple inheritance
class superclass{
    public:
    int x=1;
};
class subclass : public superclass{
    public:
    int y=2;
};
//mutilevel inheritance 
class parent{
    public:
    int a=8;
};
class child : public parent{
    public:
    int b=8;
};
class grandchild : public child{
    public:
    int c=2004;
};
//multiple inhertance
class father{
    public:
    string a1 = "father";
};
class mother{
    public:
    string b2 = "mother";
};
class child1 : public father,public mother{
    public:
    string c1 = "grand child";
};
// hierarichical inheritance
class dad{
    public:
    string a= "daddy"; 
};
class son1: public dad{
    public:
    string b= "son1";
};
class son2: public dad{
    public:
    string c= "son2";
};
class son3: public dad{
    public:
    string d= "son3";
};
//hybrid inheritance
class A
{
 	public:
 	int x;
};
class B : public A
{
 	public:
 	B()      //constructor to initialize x in base class A
 	{
 	   x = 10;
 	}
};
class C
 {
 	public:
 	int y;
 	C()   //constructor to initialize y
 	{
 	    y = 4;
        }
};
class D : public B, public C   //D is derived from class B and class C
{
 	public:
 	void sum()
 	{
 	    cout << "Sum= " << x + y;
 	}
};

int main(){
    subclass obj;
    grandchild obj1;
    child1 obj2;
    son1 obj3;
    son2 obj4;
    son3 obj5;
    D obj6; 
    cout<<"simple inheritance"<<endl<<obj.x+obj.y<<endl;
    cout<<"Multilevel inheritance"<<endl<<obj1.a<<"/"<<obj1.b<<"/"<<obj1.c<<endl;
    cout<<"multiple inheritance"<<endl<<obj2.a1<<endl<<obj2.b2<<endl<<obj2.c1<<endl;
    cout<<"hierarichical inheritance"<<endl<<obj3.a<<endl;
    cout<<obj3.b<<endl<<obj4.c<<endl<<obj5.d<<endl;     
    obj6.sum();
    cout<<endl;
}

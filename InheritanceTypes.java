class ClassA
{
    public
        void aClass()
        {
            System.out.print("Iam a ClassA"+"\n");
        }
}

class ClassB extends ClassA
{
    public
        void bClass()
        {
            System.out.print("Iam a ClassB"+"\n");
        }
}

class ClassC extends ClassA
{
    public
        void cClass()
        {
            System.out.print("Iam a ClassC"+"\n");
        }
}

class ClassD extends ClassB
{
    public
        void dClass()
        {
            System.out.print("Iam a ClassD"+"\n");
        }
}
class InheritanceTypes
{
    public static void main(String[] args)
    {
        //Simple Inheritance
        System.out.print("Simple Inheritance"+"\n");
        ClassB class1=new ClassB();
        class1.aClass();
        class1.bClass();
        //Hierarchical Inheritance
        System.out.print("Hierarchical Inheritance"+"\n");
        ClassC class2=new ClassC();
        class1.aClass();
        class1.bClass();
        class2.aClass();
        class2.cClass();
        //Multi-Level Inheritance
        System.out.print("Multi-Level Inheritance"+"\n");
        ClassD class3=new ClassD();
        class3.aClass();
        class3.bClass();
        class3.dClass();
    }
}

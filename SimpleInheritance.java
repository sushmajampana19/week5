class dog
{
    public
        void name()
        {
            System.out.print("Name of the dog is oreo\n ");
        }
        void owner()
        {
            System.out.print("My owner is ajay\n");
        }
}

class puppy extends dog
{
    public
        void play()
        {
            System.out.print("he is hyper active \n");
        }
        void skills()
        {
            System.out.print("He can easily sense the objects\n");
        }
}

class SimpleInheritance
{
    public static void main(String[] args)
    {
        puppy baby=new puppy();
        baby.name();;
        baby.owner();
        baby.play();
        baby.skills();
    }
}


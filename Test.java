public class Simpleinheritance {
    private int pri = 100;
    public int pub = 200;
    protected int pro = 300;

    public int getpri() {
        return pri;
    }
}

class Subclass extends Simpleinheritance {
    int var1 = getpri();
}

/* Error: Illegal modifier for the class inherit; only public, abstract & final are permitted */
// private class sinheri {}

/* Error: Illegal modifier for the class simple inherit; only public, abstract & final are permitted */
// protected class simpleinherit {}

class Test {
    public static void main(String[] args) {
        Subclass x = new Subclass();
        System.out.println(x.pub);
        System.out.println(x.pro);
        System.out.println(x.var1);
    }
}


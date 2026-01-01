interface A{
    void show();
}
interface B{
    void show();
}
class C implements A,B{
    public void show(){
        System.out.println("Resolved using interface ");
    }
    public static void main(String []args){
        C obj = new C();
        obj.show();
    }
}
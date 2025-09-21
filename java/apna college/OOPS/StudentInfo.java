// to know student age 

class Pen {
    String color;
    String type; // ballpoint gel 

    public void write() {
        System.out.println("writing something ");
    }
    public void printColour() {
        System.out.println(this.color);
    }
}
class Student {
    String name;
    int age;

    public void printInfo() {
        System.out.println(this.name);
        System.out.println(this.age);
    }
}

public class StudentInfo {
    public static void main(String args[]) {
        Student s1 = new Student();
        s1.name = "teja";
        s1.age = 18;

        s1.printInfo();

    }
}
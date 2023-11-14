#include <iostream>

class Student{
    public:
        std::string name;
        std::string surname;
        int age;
        double gpa;

    Student(){}

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->gpa = gpa;
        this->age = age;
    }

    Student(std::string name, std::string surname, int age, double gpa){
        this->name = name;
        this->surname = surname;
        this->gpa = gpa;
        this->age = age;
    }
};

class Stove{
    private:
        int temp = 0;
    
    public:
    Stove(){}

    Stove(int t){
        setT(t);
    }
    
    int getT(){
        return temp;
    }

    void setT(int t){
        if(t < 0) this->temp = 0;
        else if(t >= 10) this->temp = 10;
        else this->temp = t; 
    }
};

int main(){
    Student s1("Rok", "Lulic", 21, 3.5);
    Student s2("Roko", 12, 1.5);
    Student s3;

    Stove a;
    Stove b(5);

    a.setT(7);

    std::cout << a.getT();
    std::cout << b.getT();

    return 0;
}
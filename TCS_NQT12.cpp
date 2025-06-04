//defing a class in cpp
#include<iostream>
#include<string>

using namespace std;

class Car{
public:
    string name; //these are the members
    int speed;

    void display(){ //i am binding 
        cout<<name<<" "<<speed<<endl;
    }
};

int main(){
    Car car1;
    car1.name = "TATA";
    car1.speed = 100;
    car1.display();


    return 0;
}
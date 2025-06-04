//abstraction in cpp
#include<iostream>
#include<string>

using namespace std;

class copydemo{
    int value;
public:
    copydemo(int v){value = v;};
    copydemo(const copydemo &obj){
        value = obj.value;
    }
};

class Car{
public:
    string name;
    int speed;
    virtual void start() = 0; //pure virtual funtion

};

class fruits{
private: 
    string name;
public:
    fruits(string n){
        name = n;
    }
    string getName(){
        return name;
    }
};

class TATA : public Car{
public:
    void start() override{//overriding of the member funcion
        cout<<"starting the carr"<<endl;
    }
};

//overloading of the function

int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}


int main(){
    cout<<add(2, 4)<<" "<<add(1, 2, 4)<<endl;
    TATA car1;

    car1.name = "something";
    car1.speed = 100;

    car1.start();

    fruits f("mango");
    cout<<f.getName()<<endl;

    return 0;
}
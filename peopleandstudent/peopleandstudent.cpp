

#include <iostream>
#include<string>
using namespace std;

class people {
protected:
    string  name;
    int age;
    string address;
public:
    people() {
        name = "";
        age = 0;
        address = "";
    }
    ~people() {
        name = "";
        age = 0;
        address = "";
    }
    void set() {
        cout << "enter information people:\n";
        cout << "enter name:\n";
        getline(cin, this->name);
        cout << "enter age:\n";
        cin >> this->age;
        cin.ignore();
        cout << "enter address:\n";
        getline(cin, this->address);  
        
    }
    void get() {
        cout << "information person:\n";
        cout << "name:" << this->name<<endl;
        cout << "age:" << this->age<<endl;
        cout << "address:" << this->address << endl;
    }

};

class student :public people{
private:
    string id;
    float math, chemistry, physical;
public:
    student() {
        id = "";
        math = 0;
        physical = 0;
        chemistry = 0;
        
    }
    ~student() {
        id = "";
        math = 0;
        physical = 0;
        chemistry = 0;
        
    }
    void set() {
        people::set();
        cout << "enter Id:\n";
        
        getline(cin,this->id);
        cout << "enter math,physical,chemistry\n";
        cin >> math >> physical >> chemistry;
    }
    void get() {

        people::get();
        cout << "Id: " << this->id<<endl;
        cout << "math: " << this->math << endl;
        cout << "physical: " << this->physical << endl;
        cout << "gpa: " << this->gpa() << endl;

    }
    float gpa() {
        return (this->math + this->physical + this->chemistry) / 3;
    }
    
};


int main()
{
    student A;
    A.set();
    A.get();
    return 0;
}
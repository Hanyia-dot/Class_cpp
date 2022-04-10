#include <iostream>
using namespace std;

class Person
{
private:

bool materialStatus {false};

public:

int age {};
int numberOfChildren {};


void printMaterialStatus() {
    cout << "The person is " << (materialStatus?"in a relationship":"single") << endl;
};

void changematerialStatus(){
    materialStatus=!materialStatus; // "!" renerses the logical state.
};

};
int main ()
{
    Person joey;
    Person hannah;

    joey.age = {23}; //after typing "joey." I have only access to public data.
                    // I can't change "materialStatus". It is set by deflaut.
    joey.numberOfChildren = {3};

    hannah.age = {17};

    joey.printMaterialStatus();
    joey.changematerialStatus();
    joey.printMaterialStatus();

    cout <<  "He in "  << joey.age <<  " years old"  << endl;
    cout <<  "She is "  << hannah.age <<  " years old"  << endl;

    return 0;
}



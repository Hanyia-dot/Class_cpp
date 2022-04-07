#include <iostream>
using namespace std;

class Person
{
private:

bool materialStatus {false};

public:

int age {};
int numberOfChildren {};

};




int main ()
{
    Person joey;

    joey.age = {23}; //after typing "joey." I have only access to public data.
                    // I can't change "materialStatus". It is set by deflaut.
    joey.numberOfChildren = {3};
    


    cout << joey.age << endl;


    return 0;
}



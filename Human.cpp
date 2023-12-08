#include "Human.hpp"

// initialize
Human::Human(std::string name, int age) {
    this->_name = name;
    this->_age = age;

    std::cout<<"Successful Initialization. \n";
}

int Human::getAge() {
    return this->_age;
     
}

void Human::setAge(int age) {
    this->_age = age;
    std::cout<<"Age value changed. \n";
}

std::string Human::getName() {
    return this->_name;
     
}

void Human::setName(std::string name) {
    this->_name = name;

    // side effects
    std::cout<<"Name value changed. \n";
}

Human son = Human("nguyen son", 20);

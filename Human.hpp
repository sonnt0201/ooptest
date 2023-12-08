#include <iostream>

#pragma once

class Human {
    private:
        int _age;
        std::string _name;

    public:
        Human(std::string name, int age);

        int mssv;

        int getAge();
        void setAge(int age);

        std::string getName();
        void setName(std::string name);
};

extern Human son;
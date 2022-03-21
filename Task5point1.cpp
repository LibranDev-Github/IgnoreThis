#include <iostream>
#include <string>
using namespace std;

string voting_age_validator(int age){
    if(age>=18){
        return "Eligible to Vote";
    }else{
        return "Not Yet Eligible to Vote";

    }
}

int main() {
    int age; 
    std::cout<< "***CHECK VOTING AGE***" << endl;
    std::cout<< "Enter Age: ";
    std::cin>> age;
    std::cout<< "Your are " << voting_age_validator(age);
    return 0;
}


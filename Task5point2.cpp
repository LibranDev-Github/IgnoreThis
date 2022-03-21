#include <iostream>
#include <string>
using namespace std;


string getLetterGrade(float grade); //initialize function

int main() {
    float grade; 
    std::cout<< "***Convert Grade to Equivalent Letter Grade***" << endl;
    std::cout<< "Enter your Grade: ";
    std::cin>> grade;
    std::cout<< "Grade: " << getLetterGrade(grade);
    return 0;
}
//Why string, Char cannot contain 2 characters like A-, A+, B-, B+
string getLetterGrade(float grade){
    string Letter;
    if(grade >= 99) { Letter = "A+"; }
    else if(grade >= 95 && grade <= 98) { Letter = "A-"; }
    else if(grade >= 90 && grade <= 94) { Letter = "A"; }
    else if(grade >= 85 && grade <= 89) { Letter = "B+"; }
    else if(grade >= 81 && grade <= 84) { Letter = "B-"; }
    else if(grade >= 75 && grade <= 80) { Letter = "B"; }
    else if(grade >= 71 && grade <= 74) { Letter = "C"; }
    else if(grade >= 61 && grade <= 70) { Letter = "D"; }
    else if(grade <= 60) { Letter = "D"; }
    return Letter;
    
}
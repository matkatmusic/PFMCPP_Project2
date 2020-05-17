#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
      Integer int
 	    Character char
 	    Boolean bool
 	    Floating Point float
 	    Double Floating Point double
      Void void

2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int age = 2;
    int year = 2020;
    int days = 30;

    char firstInitial = 'n';
    char lastInitial = 'l';
    char middleInitial = 's';

    bool isMale = true;
    bool isOld = true;
    bool isHansome = false;

    double gradeDouble = 95.5;
    double priceDouble = 120.55;
    double heightDouble = 5000.0123;

    float gradeFloat = 95.5f;
    float priceFloat = 120.55f;
    float heightFloat = 5000.0123f;
    
    ignoreUnused(number, age, year, days, firstInitial, lastInitial, middleInitial, isMale, isOld, isHansome, gradeDouble, priceDouble, heightDouble, gradeFloat, priceFloat, heightFloat); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
}
/*
 1)
 */
int getAge(int age)
{
    ignoreUnused(age); 
    return {};
}
/*
 2)
 */
char getName(char lname, char fname)
{
    ignoreUnused(lname, fname);
    return {};
}
/*
 3)
 */
bool getGender(bool isMale)
{
    ignoreUnused(isMale);
    return {};
}
/*
 4)
 */
int getSocialNumber(int ssn)
{
    ignoreUnused(ssn);
    return {};
}
/*
 5)
 */
char getZipcode(int zipcode)
{
    ignoreUnused(zipcode);
    return {};
}
/*
 6)
 */
void setUserParameter(int age, bool gender, int zipcode)
{
    ignoreUnused(age, gender, zipcode); 
}
/*
 7)
 */
float getTotalEquity(float realEstateEquity, float stockEquity)
{
    ignoreUnused(realEstateEquity, stockEquity);
    return {};
}
/*
 8)
 */
bool loanApprove(int age, float equity, char jobType)
{
    ignoreUnused(age, equity, jobType);
    return {};
}
/*
 9)
 */
double getInterestRate(int age, float equity, char jobType, bool loanApproved = 0)
{
    ignoreUnused(age, equity, jobType, loanApproved); 
    return {};
}
/*
 10)
 */
int satisfactionLevel(bool loanApproved, double interestRate)
{
    ignoreUnused(loanApproved, interestRate); 
    return {};
}


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto userAge = getAge(100);
    //2)
    auto userName = getName('l', 'n');
    //3)
    auto userGender = getGender(true);
    //4)
    auto userSsn = getSocialNumber(123456789);
    //5)
    auto userZip = getZipcode(10001);
    //6)
    setUserParameter(11, true, 12341);
    //7)
    auto equity = getTotalEquity(0.0f, 3000.45f);
    //8)
    auto loanApproved = loanApprove(89, 33000, 'A');
    //9)
    auto interestRate = getInterestRate(44, 15900000, 'E', 1);
    //10)
    auto customerSatisfation = satisfactionLevel(true, 3.76);
    
    ignoreUnused(carRented, userAge, userName, userGender, userSsn, userZip, equity, loanApproved, interestRate, customerSatisfation);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

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
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 short
 int
 float
 double
 long
 char



 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    short s_1 = 1;
    short s_2 = 2;
    short s_3 = 3;

    int i_1 = 1;
    int i_2 = 2;
    int i_3 = 3;

    float f_1 = 1.0f;
    float f_2 = 2.0f;
    float f_3 = 3.0f;

    double d_1 = 1.0;
    double d_2 = 2.0;
    double d_3 = 3.0;

    long l_1 = 1;
    long l_2 = 2;
    long l_3 = 3;

    char c_1 = 'a';
    char c_2 = 'b';
    char c_3 = 'c';

    
    ignoreUnused(number, s_1, s_2, s_3, i_1, i_2, i_3, f_1, f_2, f_3, d_1, d_2, d_3, l_1, l_2, l_3, c_1, c_2, c_3); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int calculate2Distance(int xPosition = 0, int yPosition = 0)
{
    ignoreUnused(xPosition, yPosition);
    return {};
}

/*
 2)
 */
float calculateResistor(double current, double voltage, bool warningOnMaxVoltage = true)
{
    ignoreUnused(current, voltage, warningOnMaxVoltage);
    return {};
}
/*
 3)
 */
void displayAge(int age)
{
    ignoreUnused(age);
}

/*
 4)
 */
void setSpeed(int speed, bool blockAtMaxSpeedLimit)
{
    ignoreUnused(speed, blockAtMaxSpeedLimit);
}

/*
 5)
 */
void printLetters(char firstLetter, char secondLetter)
{
    ignoreUnused(firstLetter, secondLetter);
}

/*
 6)
 */
double computeSum(double a, double b)
{
    ignoreUnused(a, b);
    return {};
}
/*
 7)
 */
double caclulateTimeDilutionInMotion(double speedOfObject, int t_0, long speedOfLight = 15000000) 
{
    ignoreUnused(speedOfObject, t_0, speedOfLight);
    return {};
}

/*
 8)
 */
void forecastWeather (int speedWind, int rainHeight, int sunLevel) 
{
    ignoreUnused(speedWind, rainHeight, sunLevel);
}

/*
 9)
 */
int computeHousePrice(int numberOfBedroom, int numberOfBathroom, int surface)
{
    ignoreUnused(numberOfBedroom, numberOfBathroom, surface);
    return {};
}
/*
 10)
 */
long caclulateFactorial(long number) 
{
    ignoreUnused(number);
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
    auto distance = calculate2Distance(25); 
    
    //2)
    auto resistor =  calculateResistor(12.0, 5.2, true);
    //3)
    displayAge(25);
    //4)
    setSpeed(150, true);
    //5)
    printLetters('A', 'B');
    //6)
    auto sum = computeSum(12, 2525245345);
    //7)
    auto time = caclulateTimeDilutionInMotion(152, 50);
    //8)
    forecastWeather(15, 25, 96);
    //9)
    auto price = computeHousePrice(5, 3, 250);
    //10)
    auto f = caclulateFactorial(125);
    
    ignoreUnused(
        carRented,  
        distance,
        resistor,
        sum, 
        time, 
        price,
        f
    );
    std::cout << "good to go!" << std::endl;
    return 0;    
}

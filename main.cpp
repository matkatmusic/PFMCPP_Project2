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
 
 1. unsigned int
 2. char
 3. int
 4. float
 5. bool
 6. double
 

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

    // "int" declarations
    int negInt = -2;
    int largeInt = 200000;
    int newInt = 4;

    // "double" declarations
    double milesTraveled = 500.345;
    double lightYears = 300001.56783;
    double randomMathConstant = 6.023674562;

    // "float" declarations
    float pi = 3.14f;
    float change = 20.45f;
    float pounds = 135.4f;

    // "char" declarations
    char letterC = 'C';
    char letterB = 'B';
    char letterA = 'A';

    // "bool" declarations
    bool isHuman = true;
    bool isLearning = true;
    bool lovesCoding = true;

    // "unsigned int" declarations
    unsigned int salary= 34456;
    unsigned int kilometers = 1234;
    unsigned int circumference = 9876;
    
    ignoreUnused(number, negInt, largeInt, newInt, milesTraveled, lightYears, randomMathConstant, pi, change, pounds, letterC, letterB, letterA, isHuman, isLearning, lovesCoding, salary, kilometers, circumference); //passing each variable declared to the ignoreUnused() function
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
char vehicleType(bool truck, int numOfTires = 4, int year = 2000) 
{ 
    ignoreUnused(truck, numOfTires, year); 
    return {};
} 
/*
 2)
 */
float planeDistanceLeft(float milesTraveled, char planeName, bool badWeather = false)  
{ 
    ignoreUnused(milesTraveled, planeName, badWeather); 
    return {};
} 
/*
 3)
 */
bool stormApproaching(int rainLevel, bool wind =  false, bool darkClouds = false)  
{ 
    ignoreUnused(rainLevel, wind, darkClouds); 
    return {}; 
} 
/*
 4)
 */
int areaOfRectangle(int length = 0, int width = 0) 
{ 
    ignoreUnused(length, width);
    return {}; 
} 
/*
 5)
 */
void whereIsWaldo(int numberOfNonWaldos = 200, int numberOfWaldos = 1) 
{ 
    ignoreUnused(numberOfNonWaldos, numberOfWaldos); 
} 
/*
 6)
 */
double circumference(double radius, double pi = 3.14)  
{ 
    ignoreUnused(radius, pi);
    return {}; 
} 
/*
 7)
 */
bool buyHouse(bool goodNeighborhood, float marketValue, float downPayment = 10000.0)  
{ 
    ignoreUnused(downPayment, goodNeighborhood, marketValue);
    return {}; 
} 
/*
 8)
 */
bool mowLawn(int cost, bool grassHigh = true, float amountToSpend = 50.50) 
{ 
    ignoreUnused(cost, grassHigh, amountToSpend); 
    return {};
} 
/*
 9)
 */
unsigned int cleanHouseCost(unsigned int squareFootage, bool standardClean = true, bool cleanBlinds = false)  
{ 
    ignoreUnused(squareFootage, standardClean, cleanBlinds);
    return {};
} 
/*
 10)
 */
double stockReturn(float stockPrice, int profitMargins, bool stockIncrease = false) 
{ 
    ignoreUnused(stockPrice, profitMargins, stockIncrease);
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
    auto vehicle = vehicleType(true);
    //2)
    auto planeDistance = planeDistanceLeft(300.56f, 'B', true);
    //3)
    auto storm = stormApproaching(4, false, true);
    //4)
    auto area =  areaOfRectangle(5, 6);
    //5)
    whereIsWaldo();
    //6)
    auto circleCircum = circumference(5.6);
    //7)
    auto houseStatus = buyHouse(true, 153000.75);
    //8)
    auto hireLandscaper = mowLawn(100, false, 30.50);
    //9)
    auto getCleaners =  cleanHouseCost(1580);  
    //10)
    auto sellStock = stockReturn(900.56f, 100, true); 
    
    ignoreUnused(carRented, vehicle, planeDistance, storm, area, circleCircum, houseStatus, hireLandscaper, getCleaners, sellStock);

    std::cout << "good to go!" << std::endl;
    return 0;    
}

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
 
 int //integer
 float //floating point
 double //double precision floating point
 bool //boolean
 char //character
 unsigned int //unsigned integer, only positive values
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

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

    int myNumber = 1;
    int x = -4;
    int y = 5;

    float myFloat = 1.5f;
    float temperatureJuneAvrgCelsius = 22.5678f;
    float amountEuro = 99.9987f;

    double pi = 3.141592653589793;
    double distanceAverage = 1000.7543;
    double weight = 72.34567;

    bool engineOn = true;
    bool engineOff = false;
    bool engineOnOrOff = true;

    char playerOne = 'a';
    char variable = 'b';
    char grade = 'A';

    unsigned int count = 0;
    unsigned int index = 1;
    unsigned int score = 100;
    
    ignoreUnused(number, myNumber, x, y, myFloat, temperatureJuneAvrgCelsius, amountEuro, pi, distanceAverage, weight, engineOn, engineOff, engineOnOrOff, playerOne, variable, grade, count, index, score); //passing each variable declared to the ignoreUnused() function
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
bool playPiano(int note = 64, int velocity = 127)
{
    ignoreUnused(note, velocity);
    return {};
}

/*
 2)
 */
bool ebookResumePlay(int page = 34, int volume = 100)
{
    ignoreUnused(page, volume);
    return {};
}
/*
 3)
 */
bool enterTheater(bool validTicket = 1)
{
    ignoreUnused(validTicket);
    return {};
}
/*
 4)
 */
double fraction(int numerator, int denominator)
{
    ignoreUnused(numerator, denominator);
    return {};
}
/*
 5)
 */
int bikeFit(int yourHeight, int yourWeight, int yourLegLength)
{
    ignoreUnused(yourHeight, yourWeight, yourLegLength);
    return {};
}
/*
 6)
 */
bool legalyDriveCar(bool hasLicense = true, bool isInsured = true, int isOfAge = 18)
{
    ignoreUnused(hasLicense, isInsured, isOfAge);
    return {};
}
/*
 7)
 */
bool speedingTicket(int spdLimit = 55, int yourSpeed = 60)
{
    ignoreUnused(spdLimit, yourSpeed);
    return {};
}
/*
 8)
 */
int freequentFlyerBonus(int numberFlights = 5, int numberFlightsBonus = 10)
{
    ignoreUnused(numberFlights, numberFlightsBonus);
    return {};
}
/*
 9)
 */
int stepsADay(int setGaol = 10000, int steps = 5000)
{
    ignoreUnused(setGaol, steps);
    return {};
}
/*
 10)
 */
int sleepQuality(int deeb, int light, int rem)
{
    ignoreUnused(deeb, light, rem);
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
    auto notePlayed = playPiano(64, 127);
    //2)
    auto resumePlayFrom = ebookResumePlay(34, 100);
    //3)
    auto theaterEntered = enterTheater(1);
    //4)
    auto fractionElements = fraction(1, 2);
    //5)
    auto bikeFitted = bikeFit(180, 83, 88);
    //6)
    auto legalyDriving = legalyDriveCar(true, true, 18);
    //7)
    auto speedingAllert = speedingTicket(55, 60);
    //8)
    auto frqntFlyerBonusConfirmed = freequentFlyerBonus(5, 10);
    //9)
    auto stepsGoalGab = stepsADay(10000, 5000);
    //10)
    auto sleepQualityRange = sleepQuality(7, 6, 5);
    
    ignoreUnused(carRented, notePlayed, resumePlayFrom, theaterEntered, fractionElements, bikeFitted, legalyDriving, speedingAllert, frqntFlyerBonusConfirmed, stepsGoalGab, sleepQualityRange);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

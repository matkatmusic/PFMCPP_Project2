Code project 2

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
 
int
float
bool
char
double 
long 
 
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

    int digit = 1;
    int decade = 100;
    int multiple = 8;

    float temperature = 68.1f;
    float soundDecibel = 90.f;
    float soundFrequency = 440.f;

    bool isStable = 1;
    bool isComplete = 0;
    bool isUndefined = 0;

    char letter = 'A';
    char underScore = '_';
    char numberString = '4';

    double multiplicationResult = 1.0;
    double numerator = 5.89;
    double speedOfSound = 343.3;

    long totalNumberOfDirections = 16781;
    long numberOfSandGrains = 999999;
    long registeredVoters = 1456899;
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(digit, decade, multiple);
    ignoreUnused(temperature, soundDecibel, soundFrequency);
    ignoreUnused(isStable, isComplete, isUndefined);
    ignoreUnused(letter, underScore, numberString);
    ignoreUnused(multiplicationResult, numerator, speedOfSound);
    ignoreUnused(totalNumberOfDirections, numberOfSandGrains, registeredVoters);
    
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
int createARoom(int length = 3, int width = 2, int height = 2)
{
    ignoreUnused(length, width, height);

    return {};
}
/*
 2)
 */
bool pressKeyWord(char keyWord)
{
    ignoreUnused(keyWord);

    return {};
}
/*
 3)
 */
float divide(float numerator = 1.f, float denominator = 1.f)
{
    ignoreUnused(numerator, denominator);

    return {};
}

/*
 4)
 */
void controlQuality(double qualityScore)
{
    ignoreUnused(qualityScore);
}
/*
 5)
 */
float convolution(float inputSample, float filterCoeff)
{
    ignoreUnused(inputSample, filterCoeff);

    return {};
}

/*
 6)
 */
bool compareLetters(char letterOne, char letterTwo)
{
    ignoreUnused(letterOne, letterTwo);

    return {};
}
/*
 7)
 */
void moveObject(float azimuthInDegree, float elevationInDegree, float distanceInMeter)
{
    ignoreUnused(azimuthInDegree, elevationInDegree, distanceInMeter);
}
/*
 8)
 */
int countSteps(float legLengthInCentimeters, int distanceInMeters)
{
    ignoreUnused(legLengthInCentimeters, distanceInMeters);

    return {};
}
/*
 9)
 */
void drinkWater(int totalLiters = 4)
{
    ignoreUnused(totalLiters);
}
/*
 10)
 */
bool playGuitar(char musicNote = 'G', int durationInSeconds = 10)
{
    ignoreUnused(musicNote, durationInSeconds);

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
    auto myRoom = createARoom(5, 3, 2);
    //2)
    auto isKeyWordPressed = pressKeyWord('k');
    //3)
    auto result = divide(4.5f, 3.1f);
    //4)
    controlQuality(89.42);
    //5)
    auto output = convolution(0.4562f, 1.3859f);
    //6)
    auto isSameLetter = compareLetters('A', 'A');
    //7)
    moveObject(45, 30, 2);
    //8)
    auto numberOfSteps = countSteps(0.89f, 1000);
    //9)
    drinkWater(3);
    //10)
    auto didItPlay = playGuitar('C', 5);
    
    ignoreUnused(carRented);
    ignoreUnused(myRoom);
    ignoreUnused(isKeyWordPressed);
    ignoreUnused(result);
    ignoreUnused(output);
    ignoreUnused(isSameLetter);
    ignoreUnused(numberOfSteps);
    ignoreUnused(didItPlay);

    
    std::cout << "good to go!" << std::endl;
    return 0;    
}

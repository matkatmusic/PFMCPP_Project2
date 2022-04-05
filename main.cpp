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
"Primitive Data Types: These data types are built-in or predefined data types and can be used directly by the user to declare variables."
 
1.    int     = integer (Ganzzahl)                -> Integers typically requires 4 bytes of memory space and ranges from -2147483648 to 2147483647. 
2.    char    = character (Buchstabe)             -> can take 256 values which corresponds to entries in the ASCII table. typically requires 1 byte of memory space and ranges from -128 to 127 or 0 to 255. 
3.    bool    = boolean (true/false)
4.    float   = floating point (Fließkommazahl)
5.    double  = double floating point             -> floating point value requires 8 byte (64bit) and therefore double memory space. It is "double precise")
6.    void    = declares functions or methods with not-returning values / procedures. " When used as a function return type, the void keyword specifies that the function doesn't return a value. When used for a function's parameter list, void specifies that the function takes no parameters. When used in the declaration of a pointer, void specifies that the pointer is "universal."
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t' [Wide Character -> "wide char can take on 65536 values which corresponds to UNICODE values which is            a recent international standard which allows for the encoding of characters for virtually all languages and commonly used symbols."]
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
    int number2 = 4;
    int number3 = 1;

    char first = 'a';
    char second = 'b';
    char third = 'c';

    bool hungry = false;
    bool thirsty = false;
    bool teaIsOnTheTable = true;
    
    float size = 1.77f;
    float temperature = 19.2f;
    float pressure = 180.1f;

    double speedOfSound = 343.0001;
    double weightOfH2O = 1.00784;
    double tempOfSun = 5500.00000001;
   
    ignoreUnused(number, number2, number3, first, second, third, hungry, thirsty, teaIsOnTheTable, size, temperature, pressure, speedOfSound, weightOfH2O, tempOfSun); //passing each variable declared to the ignoreUnused() function
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
bool goSleep (int startTime, int wakeTime)
{
    ignoreUnused(startTime = 23, wakeTime = 6);
    return {};
}
/*
 2)
 */
void runFan (bool state)
{
    ignoreUnused(state);
}
/*
 3)
 */
float inAir (char pressure, double location, bool full)
{
    ignoreUnused(pressure, location, full);
    return{};
}
/*
 4)
 */
int buildingsInTown (char name, double location, int count)
{
    ignoreUnused(name, location, count);
    return{};
}

/*
 5)
 */
int cleaningKitchen (bool floor, bool clean, int garbage)
{
    ignoreUnused(floor, clean, garbage);
    return{};
}


/*
 6)
 */

void goForWalk (int distance = 3000, bool day = true) // WHen exactly do I need to set a default value? 
{
    ignoreUnused(distance, day);
}

/*
 7)
 */
int playMusic (char trackName, int volume = 10, bool goodMusicTaste = false)
{
    ignoreUnused(trackName, volume, goodMusicTaste);
    return{};
}

/*
 8)
 */
int carveInStone (char fontType, double laserTime, int stoneType)
{
    ignoreUnused(fontType, laserTime, stoneType);
    return{};
}

/*
 9)
 */
bool moveMarble (int position = 1, int marbleID = 0)
{
    ignoreUnused(position, marbleID);
    return{};
}

/*
 10)
 */
void makeCoffee (int beanType, int grindTime, char brand)
{
    ignoreUnused(beanType, grindTime, brand);
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
    auto sleepAtNight = goSleep(23, 6);
    
    //2)
    auto tooHot = runFan(true); // Why is type void in this case not correct?
        
    //3)
    auto fly = inAir(99, 91.1850982748, true);
    
    //4)
    auto countBuildingsInHamburg = buildingsInTown('v', 123345456.23473458745687, 875690); // I chose "char name" earlier to being able to put in a word instead of a letter. What did I get wrong here?
    
    //5)
    auto cleaningDay = cleaningKitchen(true, true, 4);
    
    //6)
    auto movementAction = goForWalk(1000, true); // Why is void not the right type here? I chose it, beacause I do not expect an output return value. Same @10)
    
    //7)
    auto homeAlona = playMusic('a', 15, true); // same question @4
    
    //8)
    auto stoneDesign = carveInStone('h', 3, 59);
    
    //9)
    auto playMarbles = moveMarble(1, 1);
    
    //10)
    auto morningAction = makeCoffee(1, 2, 'a');
    
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

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
 
 1. bool
 2. char
 3. int
 4. float
 5. double
 6. void 
 
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
    int sides = 3;
    int size = 3;
    float diagonal = 4.5f;
    float diameter = 6.52f;
    float ratio = 3.26f;
    double pi = 3.141592653589;
    double cmat = 0.1357908642;
    double comp = -75.1482593604084136;
    bool triangular = false;
    bool circular = true;
    bool spherical = false;
    char musicalNote = 'E';
    char grade = 'A';
    char clothSize = 'S';

    
    ignoreUnused(number, sides, size, diagonal, diameter, ratio, pi, cmat, comp, triangular, circular, spherical, musicalNote, grade, clothSize); //passing each variable declared to the ignoreUnused() function
}

/*
 3)
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
int openDoor(bool whoIS, int howMany)
{
    ignoreUnused(whoIS, howMany);
    return{};
}


/*
 2)
 */
char useComputer(bool available, int time, char app , char kindPC)
{
    ignoreUnused(available, time, app, kindPC);
    return{};
}

/*
 3)
 */
char letterRunner(bool importance, bool priority, bool boss)
{
    ignoreUnused(importance, priority, boss);
    return{};
}
/*
 4)
 */
bool simpleCarInspection(bool hasLiquids, bool tiresAir, bool cockpitMessages)
{
    ignoreUnused(hasLiquids, tiresAir, cockpitMessages);
    return{};
}
/*
 5)
 */
bool playInstrument(bool instrumentIsTuned, char progrNotes, char rhythm)
{
    ignoreUnused(instrumentIsTuned, progrNotes, rhythm);
    return{};
}

/*
 6)
 */
int refuelGas(bool hasMessage, float quantity, int kind)
{
    ignoreUnused(hasMessage, quantity, kind);
    return{};
}

/*
 7)
 */
bool buyFruit(bool fresh, int variety, float affordable)
{
    ignoreUnused(fresh, variety, affordable);
    return{};
}

/*
 8)
 */
bool goParty(bool withFriends, std::string whereToGo, std::string dress)
{
    ignoreUnused(withFriends, whereToGo, dress);
    return{};
}

/*
 9)
 */
char instrumRecord(bool percussion, bool winds, bool strings)
{
    ignoreUnused(percussion, winds, strings);
    return{};
}

/*
 10)
 */
char petDailyCare(std::string kind, std::string size, int age)
{
    ignoreUnused(kind, size, age);
    return{};
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
    auto safeToOpen = openDoor(true, 1);
    
    //2)
    auto borrowPC = useComputer(true, 60, 'p', 'd'); 
    
    //3)
    auto delivery = letterRunner(true, true, true);

    //4)
    auto carDisposition = simpleCarInspection(true, true, false);
    
    //5)
    auto startNextSong = playInstrument(true, 'E', 'R');   
    
    //6)
    auto canPark = refuelGas(true, 5.5, 98);
    
    //7)
    auto todayFruitSalad = buyFruit(true, 3, true);
    
    //8)
    goParty(true, "Ibiza", "Relaxed");
    
    //9)
    auto micSelection = instrumRecord(true, false, false);
    
    //10)
    petDailyCare("Dog", "Big", 5);
    
    ignoreUnused(carRented, safeToOpen, borrowPC, delivery, carDisposition, startNextSong, canPark, todayFruitSalad, goParty, micSelection, petDailyCare);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

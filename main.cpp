#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here:
 
 int
 float
 bool 
 double
 char
 void
 

 
 
 
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function





 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int age = 16;
    int time = 100;

    char firstLetter = 'a'; 
    char secondLetter = 'b';
    char thirdLetter = 'c';

    bool lie = false;
    bool disabled = false;
    bool skilled = false;

    float money = 2.55f;
    float numberPi = 3.1415f;
    float altitude = 1555.302f;

    double extraPrecisePi = 3.1415192654;
    double someAmount = 4.00000001;
    double everestAltitude = 8.848;
    
    
    
    ignoreUnused(number, age, time, firstLetter, secondLetter, thirdLetter, lie, disabled, skilled, money, numberPi, altitude, extraPrecisePi, someAmount, everestAltitude ); //passing each variable declared to the ignoreUnused() function
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
void setSalary(int wage, int deduction, bool married)
{
    ignoreUnused(wage, deduction, married);
}

/*
 2)
 */
int getSalary(int salary = 2000)
{
    ignoreUnused(salary);
    return{};
}

/*
 3)
 */
int howManyMiles(int kmph, double gas, double time)
{
    ignoreUnused(kmph, gas, time);
    return{};
}

/*
 4)
 */

bool isLying(int pulse, int galvanicSkinResponseValue = 2, int pupilDilation = 4)  
{
    ignoreUnused(pulse, galvanicSkinResponseValue, pupilDilation);
    return{};
}

/*
 5)
 */
char guessTheLetter(char userInputValue)
{
    ignoreUnused(userInputValue);
    return{};
}

/*
 6)
 */
char randomizeAcronym(char firstLetter, char secondLetter, char thirdLetter = 'z')
{
    ignoreUnused(firstLetter, secondLetter, thirdLetter);
    return {};
}

/*
 7)
 */
bool isGoodBoi(bool dog = true, bool playful = true)
{
    ignoreUnused(dog, playful);
    return{};
}

/*
 8)
 */
void songCatalog(int someSong = 5)
{
    ignoreUnused(someSong);
}

/*
 9)
 */
void printCurrentGasInTank(int tankNumber)
{
    ignoreUnused(tankNumber);
}


/*
 10)
 */
bool isAfk(int numberOfClicks, int numberOfKeyStrokes)
{
    ignoreUnused(numberOfClicks, numberOfKeyStrokes);
    return{};
}

int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    setSalary(2000, 100, true);
    
    //2)
    getSalary();
    //3)
    howManyMiles(200, 50.552, 80.5);
    
    //4)
    isLying(120);
    //5)
    guessTheLetter('a');
    
    //6)
    randomizeAcronym('B', 'H', 'P');
    
    //7)
    isGoodBoi(true);
    
    //8)
    songCatalog();
    //9)
    
    //10)
    printCurrentGasInTank(2);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}

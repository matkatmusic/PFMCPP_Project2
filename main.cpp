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
 
 float
 int
 bool
 char
 long int
 short int
 
 
 
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
    // int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int number1 = 3;
    int number2 = 4;
    int number3 = 5;

    float decimal1 = 0.0f;
    float decimal2 = 3.45f;
    float decimal3 = 12.21f;

    char letter1 = 'A';
    char letter2 = 'B';
    char letter3 = 'C';

    short int shortNumber1 = 7;
    short int shortNumber2 = 2;
    short int shortNumber3 = 11;

    long int longNumber1 = 17;
    long int longNumber2 = 12;
    long int longNumber3 = 111;

    double bool1 = true;
    double bool2 = false;
    double bool3 = false;


    
    ignoreUnused(number1,number2,number3,decimal1,decimal2,decimal3,letter1,letter2,letter3,shortNumber1,shortNumber2,shortNumber3,longNumber1,longNumber2,longNumber3,bool1,bool2,bool3); //passing each variable declared to the ignoreUnused() function
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

int SellItem(int itemIdx, int itemValue);
/*
 1)
 */
int SellItem(int itemIdx = 12, int itemValue = 100)
{
    ignoreUnused(itemIdx, itemValue);
    return{};
}

float CollectInterest(float moneyAmount, float interestPercent, int accountNumber);
/*
 2)
 */
float CollectInterest(float moneyAmount, float interestAmount= 0.075f, int accountNumber = 38742156 )
{
    ignoreUnused(moneyAmount, interestAmount, accountNumber);
    return{};
}

void SaveMidiNoteToList(int midiChannel, int notePitch, int noteVelocity, float timePrecise);
/*
 3)
 */
void SaveMidiNoteToList(int midiChannel, int notePitch, int noteVelocity, float timePrecise)
{
    ignoreUnused(midiChannel, notePitch, noteVelocity, timePrecise);
}

int ClampInt(int number);
/*
 4)
 */
int ClampInt(int number)
{
    ignoreUnused(number);
    return{};
}

float ClampFloat(float number);
/*
 5)
 */
float ClampFloat(float number = 354.12f)
{
    ignoreUnused(number);
    return{};
}

bool PlaySound(float pitch, float duration);
/*
 6)
 */
bool PlaySound(float pitch, float duration = 1.3f)
{
    ignoreUnused(pitch, duration);
    return{};
}

void LogButtonPress(char button, float timePrecise);
/*
 7)
 */
void LogButtonPress(char button = 'B', float timePrecise = 1443.1534f)
{
    ignoreUnused(button, timePrecise);
}

void SaveTimeStamp(float timePrecise);
/*
 8)
 */
void SaveTimeStamp(float timePrecise = 4598.2345f)
{
    ignoreUnused(timePrecise);
}

void Run(bool startWithLeftFoot, int speed, float direction);
/*
 9)
 */
void Run(bool startWithLeftFoot = false, int speed = 4, float direction = 43.1f)
{
    ignoreUnused(startWithLeftFoot, speed, direction);
}

int BuyItem(int itemIdx, int playerMoneyAmount);
/*
 10)
 */
int BuyItem(int itemIdx, int playerMoneyAmount)
{
    ignoreUnused(itemIdx, playerMoneyAmount);
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
    auto moneyReturned = SellItem(4253, 230);
    
    //2)
    auto interestCollected = CollectInterest(6400, 0.055f, 1457457 );
    
    //3)
    SaveMidiNoteToList(4, 75, 121, 4356.1536f);
    
    //4)
    auto clampedInt = ClampInt(5788);
    
    //5)
    auto clampedFloat = ClampFloat(5.65f);
    
    //6)
    auto managedToPlaySound = PlaySound(34.52f, 1.3f);
    
    //7)
    LogButtonPress('V', 4534.2355f);
    
    //8)
    SaveTimeStamp(3456.2344f);

    //9)
    Run(true, 50, 90.0f);

    //10)
    auto boughtItemIdx = BuyItem(562, 6000);
    
    
    ignoreUnused(carRented, moneyReturned, interestCollected, clampedInt, clampedFloat, managedToPlaySound, boughtItemIdx);

    std::cout << "good to go!" << std::endl;
    return 0;    
}

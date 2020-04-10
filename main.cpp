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
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 Integar -- int
 Character -- char
 Boolean -- bool
 Floating Point -- float
 Double Floating Point -- double
 Valuless -- void 

 
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
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'

    int apples = 4;
    int organes = 12;
    int bannanas = 6;
    
    char smallNumberA = 1;
    char smallNumberB = 2;
    char smallNumberC = 3;

    bool isRunning = true;
    bool isFlying = false;
    bool isJumping = false;

    float length = 8.3467f;
    float width = 12.3868f;
    float height = 15.3475f;

    double distance = 5.7;
    double speed = 12.9;
    double time = 60.2;
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    ignoreUnused(apples, organes, bannanas);
    ignoreUnused(smallNumberA, smallNumberB, smallNumberC);
    ignoreUnused(isRunning, isFlying, isJumping);
    ignoreUnused(length, width, height);
    ignoreUnused(distance, speed, time);
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
 float squareFeet(float length, float width)
 {
     ignoreUnused(length, width);
     return {};
 }

/*
 2)
 */
 bool playerState(bool isJumping, bool isRunning, bool isFlying)
 {
     ignoreUnused(isJumping, isRunning, isFlying);
     return {};
 }

/*
 3)
 */
 int noodleAmount(int numberOfBoxes, int noodlesPerBox)
 {
     ignoreUnused(numberOfBoxes, noodlesPerBox);
     return {};
 }

/*
 4)
 */
 bool purcahseSpeakers(int pairsOfSpeakers, float speakerPrice)
 {
     ignoreUnused(pairsOfSpeakers, speakerPrice);
     return {};
 }

/*
 5)
 */
 int itemsInDrawer(int socks, int underwear, int shirts)
 {
     ignoreUnused(socks, underwear, shirts);
     return {};
 }

/*
 6)
 */
 int fruitInStore(int apples, int oranges, int pears)
 {
     ignoreUnused(apples,oranges, pears);
     return {};
 }

/*
 7)
 */
 bool appliancesOn(bool stoveOn, bool fridgeOn, bool microwaveOn)
 {
     ignoreUnused(stoveOn, fridgeOn, microwaveOn);
     return {};
 }

/*
 8)
 */
 bool carStart(bool keyInIgnition, bool keyTurn, bool engineRunning)
 {
     ignoreUnused(keyInIgnition, keyTurn, engineRunning);
     return {};
 }

/*
 9)
 */
 float timeOfDay(bool light, bool dark)
 {
     ignoreUnused(light, dark);
     return {};
 }

/*
 10)
 */
bool flightStatus(bool boarding, bool departing, bool enRoute, bool landed)
{
    ignoreUnused(boarding, departing, enRoute, landed);
    return {};
}
 

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto roomSize = squareFeet(8.5f, 12.0f);
    
    //2)
    auto playerRunning = playerState(false, true, false);
    
    //3)
    auto totalNoodles = noodleAmount(3, 100);
    
    //4)
    auto speakersBought = purcahseSpeakers(1, 499.99f);
    
    //5)
    auto totalDrawerItems = itemsInDrawer(4, 6, 2);
    
    //6)
    auto totalFruit = fruitInStore(56, 45, 21);
    
    //7)
    auto allAppliancesOn = appliancesOn(true, true, true);
    
    //8)
    auto isCarOn = carStart( true, true, true);
    
    //9)
    auto isAM = timeOfDay(true, false);
    
    //10)
    auto checkFlightStatus = flightStatus(false, true, false, false);
    
    
    ignoreUnused(carRented);
    ignoreUnused(roomSize);
    ignoreUnused(playerRunning);
    ignoreUnused(totalNoodles);
    ignoreUnused(speakersBought);
    ignoreUnused(totalDrawerItems);
    ignoreUnused(totalFruit);
    ignoreUnused(allAppliancesOn);
    ignoreUnused(isCarOn);
    ignoreUnused(isAM);
    ignoreUnused(checkFlightStatus);

    std::cout << "good to go!" << std::endl;
    return 0;    
}

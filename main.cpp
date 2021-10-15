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
 double
 char
 unsigned int
 
 
 
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

    int a = 1;
    int b = 2;
    int c = 3;
    float aa = 1.2f;
    float ab = 2.2f;
    float ac = 3.2f;
    bool aaa = true;
    bool aab = true;
    bool aac = false;
    double aba = 1.111;
    double abb = 2.111;
    double abc = 3.111;
    char ba = 'a';
    char bb = 'b';
    char bc = 'c';
    unsigned int ca = 0;
    unsigned int cb = 1;
    unsigned int cc = 2;
    

    
    ignoreUnused(number, a, b, c, aa, ab, ac, aaa, aab, aab, aac, aba, abb, abc, ba, bb, bc, ca, cb, cc); //passing each variable declared to the ignoreUnused() function
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
 void updateWallet(float currencyAmount, int walletID = 1425354)
 {
     ignoreUnused(currencyAmount, walletID);
 }

/*
 2)
 */
 void moveCharacter(int direction, int speed = 1)
 {
     ignoreUnused(direction, speed);
 }

/*
 3)
 */
float convertCurrency(float currencyAmount, float exchangeRate = 1.0f)
{
    ignoreUnused(currencyAmount, exchangeRate);
    return {};
}

/*
 4)
 */
 void updateBulbState(bool onOff, int bulbID = 134235)
 {
     ignoreUnused(onOff, bulbID);
 }

/*
 5)
 */
bool applyCarBrake(int networkState, bool collisionImminent = false)
{
    ignoreUnused(networkState, collisionImminent);
    return {};
}


/*
 6)
 */
bool shouldBuyBitcoin(bool bitcoinSupplyIsFixed = true)
{
    ignoreUnused(bitcoinSupplyIsFixed);
    return {};
}


/*
 7)
 */
float calculateHyperInflationProbability(float moneySupply, float printingRate, bool bayesianPriors = true)
{
    ignoreUnused(moneySupply, printingRate, bayesianPriors);
    return {};
}


/*
 8)
 */
bool goodDayForFishing(float rainProbability, float temperatureF = 50.0f)
{
    ignoreUnused(rainProbability, temperatureF);
    return {};
}

/*
 9)
 */
void updateNetworkState(float gradients, float loss = 1.0f)
{
    ignoreUnused(gradients, loss);
}

/*
 10)
 */
bool calculateCodingValue(bool answer = true)
{
    ignoreUnused(answer);
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
    updateWallet(25.43f, 4425354);
    
    //2)
    moveCharacter(1, 2);

    //3)
    auto convertedCurrency = convertCurrency(254.33f, 1.24f);

    //4)
    updateBulbState(true, 134233);

    //5)
    auto applyBrake = applyCarBrake(52453464, false);

    //6)
    auto buyBitcoin = shouldBuyBitcoin(true);

    //7)
    auto hyperInflationProbability  = calculateHyperInflationProbability(2453436456, .2f, true);

    //8)
    auto shouldFish = goodDayForFishing(.1f);

    //9)
    updateNetworkState(0.2f);

    //10)
    auto isCodingUseful = calculateCodingValue();
    
    
    ignoreUnused(carRented, convertedCurrency, applyBrake, buyBitcoin, hyperInflationProbability, shouldFish, isCodingUseful);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
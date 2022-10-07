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
 
 Integer
 Character
 Boolean
 Floating Point
 Double
 Unsigned int
 
 
 
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
	int myAge = 25;
	int numberOfCats = 2;
	int carType = 3;
	
	char letter = 'a';
	char grade = 'f';
	char group = 'c';
	
	bool isCarRunning = true;
	bool off = false;
	bool jumping = true;

	float temperature = 29.5f;
	float taxRate = 7.0f;
	float christmasBonus = 2000.52f;

	double volume = 35.65;
	double commission = 20.00;
	double divisor = 6.2;

	unsigned exitGroup = 7;
	unsigned fluidOunces = 2; 
	unsigned grapes = 0;

	ignoreUnused(myAge, numberOfCats, carType, letter, grade, group, isCarRunning, off, jumping, temperature, taxRate, christmasBonus, volume, commission, divisor, exitGroup, fluidOunces, grapes);
	
	//example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    

    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
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
void ejectSeat(float speedOfEjection, int ejectionDelay)
{
	ignoreUnused(speedOfEjection, ejectionDelay);
}
/*
 2)
 */
bool purchaseIceCream (int numberOfCones = 1, int numberOfFlavors = 1, bool specialtyCone = false)
{
	ignoreUnused(numberOfCones, numberOfFlavors, specialtyCone);
	return {};
}
/*
 3)
 */
float totalGrade (float assignmentOneGrade, float assignmentTwoGrade, float assignmentThreeGrade, float assignmentFourGrade)
{
	ignoreUnused(assignmentOneGrade, assignmentTwoGrade, assignmentThreeGrade, assignmentFourGrade);
	return {};
}
/*
 4)
 */
int topFiveRankings (int rankOne, int rankTwo, int rankThree, int rankFour, int rankFive)
{
	ignoreUnused(rankOne, rankTwo, rankThree, rankFour, rankFive);
	return {};
}
/*
 5)
 */
bool buyAMacbook (double macbookPrice = 1999.99, double salesTax = 0.77, bool spaceGray = true)
{
	ignoreUnused(macbookPrice, salesTax, spaceGray);
	return {};
}
/*
 6)
 */
int setMasterLevel (int volumeLevel = 0)
{
	ignoreUnused(volumeLevel);
	return {};
}
/*
 7)
 */
void greeting(bool isFriendly)
{
	ignoreUnused(isFriendly);
}
/*
 8)
 */
int onePieceEpisodeTracker(int episodeNumber = 1)
{
	ignoreUnused(episodeNumber);
	return {};
}
/*
 9)
 */
float fuelEconomy (float milesPerGallon, float gallonsInTank, float milesDriven, float timeDriven = 1)
{
	ignoreUnused(milesPerGallon, gallonsInTank, milesDriven, timeDriven);
	return {};
}
/*
 10)
 */
bool continueHomework (bool motivationLevel, double timeLeft)
{
	ignoreUnused(motivationLevel, timeLeft);
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
    
    //2)
    
    //3)
    
    //4)
    
    //5)
    
    //6)
    
    //7)
    
    //8)
    
    //9)
    
    //10)
    
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

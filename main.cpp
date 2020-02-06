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
 int, float, double, bool, char, void?!
 
 
 
 
 
 
 
 
 
 
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

	int currentDonuts = 0;
	unsigned int donutsWanted = 7;
	int donutsAvailableForPurchase = 2147483647;

	float temperatureCelsius = 6.7f;
	float AVB = 5.5f;
	float quantityLiters = 0.5;
	
	double dailyCoffee = 2.5; 	//cups
	double dailyWater = 2.5; 	//cups
	double dailyBeers = 0.7;	//bottles
	
	bool wantsDonut = true;
	bool hasDonut = false;
	bool enjoysTheExercises = true;
	
	char index = "a";
	char currentLettter = "h";
	char randomLetter = "M";
    
    
    
    ignoreUnused(currentDonuts, donutsWanted, donutsAvailableForPurchase, 
				temperatureCelsius, AVB, quantityLiters, 
				dailyCoffee, dailyBeers, dailyWater, 
				wantsDonut, hasDonut, enjoysTheExercises, 
				index, currentLettter, randomLetter); //passing each variable declared to the ignoreUnused() function
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
float calculateDistanceToDonut(float currentPosX, float currentPosY)
{
	float distance = currentPosX / (currentPosY * 0.0f); //we don't have many donuts around
	ignoreUnused(); //Like this? slightly confused about this
    return distance;
}
/*
 2)
 */
void buyDonuts(unsigned int donutsWanted)
{
	if(donutsAvailableForPurchase>=donutsWanted)
		currentDonuts+=donutsWanted;
	
	ignoreUnused();	
}
/*
 3)
 */
bool canEatDonut()
{
	ignoreUnused();	
	return true;
}
/*
 4)
 */
bool overEat(int donutsEaten, double stomachVolume, float donutVolume = 0.15f;)
{
	ignoreUnused();	//???
	if(donutsEaten*donatVolume>stomachSize)
		return true;
	else return false;
}
/*
 5)
 */
int donutsEatenThisYear(int donutsEatenMontly, int currentMonth)
{
	ignoreUnused();	
	return donutsEatenMontly*currentMonth;	
}
/*
 6)
 */
char findLetterInAlphabet(int letterNumber, int alphabetLength)
{
	ignoreUnused();
	if(letterNumber<alphabetLength)
		return alphabet[letterNumber];
	else return "!";
}
/*
 7)
 */
float calculateHypothenuse(float sideA, float SideB)
{
	ignoreUnused();
	return sqrt((sideA*sideA)+(sideB*sideB));
}
/*
 8)
 */
void playSequencer(double tempo)
{
	//somehow play it
	ignoreUnused();
}
/*
 9)
 */
double bpmToMs(double tempo)
{
	ignoreUnused();
	return 60*1000/tempo;
}
/*
 10)
 */
void delayStep(int step, double beats, double tempo)
{
	if(step = currentStep)
	{
		sleep((int)(bmpToMs(tempo)*beats));
		currentStep++;
	}	
}

int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
	calculateDistanceToDonut(13.5f, 22.631f);
	buyDonuts(7);
	bool donutCraving = canEatDonut();
	bool sick = overEat(5, 1);
	int donutsLeft = 10000 - donutsEatenThisYear(0, 1);	
	char letter = findLetterInAlphabet(4,36);
	float hypothenuse = calculateHypothenuse(123.411, 13.63);
	playSequencer(140);
	double barTime = bpmToMs(140);
	delayStep(13,0.5, 140);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}

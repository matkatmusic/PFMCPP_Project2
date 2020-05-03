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

 
 Integer int
 Floating Point float 
 Double Floating Point double 
 Character char 
 Booleen bool
 Void void 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 64.
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
    
    int shoeSize = 10; 
    int waveform = 1;
    int count = 0;

    float dial = 0.0f;
    float footLength = 30.5f;
    float height = 1.959484f;

    double sample = 0.565456456012345;
    double frequency = 103.123;
    double amplitude = 0.5954;

    char preset = 'A';
    char key = 71;
    char aisle = 'f';

    bool theSkyIsBlue = true;
    bool theWorldIsFlat = false;
    bool theTreeMakesASound = true;
   
    ignoreUnused(number, shoeSize, waveform, count, dial, footLength, height, sample, frequency, amplitude,preset, key, aisle, theSkyIsBlue, theWorldIsFlat, theTreeMakesASound); //passing each variable declared to the ignoreUnused() function
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

bool theSkyIsBlue(double colourFrequency, bool eyesOpen = true)  
{ 
    ignoreUnused(colourFrequency, eyesOpen); 
    return {}; 
} 

/*
 2)
 */

float whatFrequency(int midiNote, float noteBend = 0.0f)  
{ 
    ignoreUnused(midiNote, noteBend); 
    return {}; 
} 

/*
 3)
 */

char gradeForStudent(float testPercentage = 100.0f, bool studentCheated = true)  
{ 
    ignoreUnused(testPercentage, studentCheated); 
    return {}; 
} 

/*
 4)
 */

int djNextTrack(int hour, int peopleOnTheDancefloor = 0, double momentOfInspiration = 100.0)  
{ 
    ignoreUnused(hour, peopleOnTheDancefloor, momentOfInspiration); 
    return {}; 
} 

/*
 5)
 */

bool treeMakesASound(bool treeFalls = true, bool treeIsInForest = true, bool noOneIsAround = true)  
{ 
    ignoreUnused(treeFalls, treeIsInForest, noOneIsAround); 
    return {}; 
} 

/*
 6)
 */

void setReverbParam(float dryWetAmt = 100.0f, bool bypass = false, double time = 500.0, double filterCutoff = 5000.0)
{
    ignoreUnused(dryWetAmt, bypass, time, filterCutoff);
}

/*
 7)
 */

double amplitude(double attackTime = 5.0, double decayTime = 100.0, double sustainLevel = 1.0 , double releaseTime = 100.0)
{
    ignoreUnused(attackTime, decayTime, sustainLevel, releaseTime);
    return{};
}

/*
 8)
 */

double dial(double dialMinimum = 0.0, double dialMaximum = 127.0, float exponent = 0.5f)
{
    ignoreUnused(dialMinimum, dialMaximum, exponent);
    return{};
} 

/*
 9)
 */

void xyPad(double x, double y, double pressure, int numberOfFingers = 1, int millisecsBetweenTouch = 0)
{
    ignoreUnused(x, y, pressure, numberOfFingers, millisecsBetweenTouch);
}

/*
 10)
 */

bool winLottery(int drawnNumber1, int drawnNumber2, int drawnNumber3, int playerNumber1, int playerNumber2, int playerNumber3, int minimumNumber = 0, int maximumNumber = 100)
{
    ignoreUnused(drawnNumber1, drawnNumber2, drawnNumber3, playerNumber1, playerNumber2, playerNumber3, minimumNumber, maximumNumber);
    return{};
}

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)

    auto skyVerdict = theSkyIsBlue(635.231224, true);  
    
    //2)
    
    auto  oscFrequency = whatFrequency(60, 10.0f);

    //3)
    
    auto studentGrade = gradeForStudent(56.4f, true);  

    //4)
    
    auto trackToPlay = djNextTrack(4, 20, 75.94); 

    //5)

    auto treeSound = treeMakesASound(true, false, true);  

    //6)
    
    setReverbParam(88.76f, true, 1000.0, 5000.0);

    //7)
    
    auto envelopeAmplitude =  amplitude(100.0, 200.0, 0.5 , 500.0);

    //8)

    auto dialValue = dial(-10.0, 10.0, 4.0f);
    
    //9)

    xyPad(66.666, 50.054, 25.032, 2, 200);
    
    //10)

    auto lotteryResult = winLottery(21, 41, 55, 21, 55, 42, 0, 60);
    
    
    ignoreUnused(carRented, skyVerdict, oscFrequency, studentGrade, trackToPlay, treeSound, envelopeAmplitude, dialValue, lotteryResult);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

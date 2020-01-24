#include <iostream>
#include <array>

template<typename ...T>
void ignoreUnused(T&&...) { }


/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 

// characters:
 char
 unsigned char
 char16_t
 char32_t
 // integers:
 short
 unsigned short
 int
 unsigned int
 long
 unsigned long
 long long
 unsigned long long
// floating point numbers:
float
double
long double


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
#include <iostream>
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int notPi = 3;
    int numberOfDucks = 7;

    char bestLetter = 'b';
    char theLetterC = 'c';
    char thisCanAlsoBecomeAChar = 24;

    double lovelyFraction = 1.0/7.0; // fixed!  I do have a question though... Does the rvalue of this expression (1.0/7.0) use floating point or double precision?  Also, if it was (1.0f/7.0f) the fraction would be evaulated as a float, then converted to a double when it's assigned to the variable, right?  
    double anAmbiguousDouble = 420.69;
    std::cout << lovelyFraction << std::endl;
    double thatsTooLongForFloat = 1.0000000000000000009;

    float pi = 3.14f;
    float sampleRate = 44100.0f;
    float angleDelta = pi * (440.0f / sampleRate);
    
    ignoreUnused(number);
    ignoreUnused(notPi);
    ignoreUnused(numberOfDucks); //passing each variable declared to the ignoreUnused() function

    ignoreUnused(bestLetter);
    ignoreUnused(theLetterC);
    ignoreUnused(thisCanAlsoBecomeAChar);

    ignoreUnused(anAmbiguousDouble);
    ignoreUnused(lovelyFraction);
    ignoreUnused(thatsTooLongForFloat);

    ignoreUnused(pi);
    ignoreUnused(sampleRate);
    ignoreUnused(angleDelta);
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
void setDuration(double milliseconds)
{
  ignoreUnused(milliseconds);
}

/*
 2)
 */
float getNextSample()
{
  return {};
}

/*
 3)
 */
void updateSynthMidiNoteState(int currentMode = 1, int currentChord = 1)
{
  ignoreUnused(currentMode);
  ignoreUnused(currentChord);
}

/*
 4)
 */
void setSynthFrequency (int requestedMidiNote = 69) // 
{
    ignoreUnused(requestedMidiNote);
}

/*
 5)
 */
void createWavetable() {}

/*
 6)
 */

void setOscillatorGain(float gain = 0.0f)
{
  ignoreUnused(gain);
}

/*
 7)
 */
std::array<std::array<bool, 12>, 7> extractDiatonicScales (std::array<bool, 12> parentScale = {1, 0, 1, 0, 1, 1, 0 ,1, 0, 1 })
{
  ignoreUnused(parentScale);
  return {};
} 

/*
 8)
 */
std::array<int, 3> expandTriadVoicing(int midiNoteBottom = 48, int midiNoteMiddle = 52, int midiNoteTop = 55)
{
  ignoreUnused(midiNoteBottom);
  ignoreUnused(midiNoteMiddle);
  ignoreUnused(midiNoteTop);
  return {};
} 

/*
 9)
 */
bool isMidiNoteDiatonic(int midiNote, std::array<bool, 12> notesInCurrentMode)
{
  ignoreUnused(midiNote);
  ignoreUnused(notesInCurrentMode);
  return {};
}


/*
 10)
 */
void initializeDiagram(float radius)
{
  ignoreUnused(radius);
}

int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    setDuration (100); // milliseconds

    //2)
    float currentSample = getNextSample();
    
    //3)
    updateSynthMidiNoteState(3, 4); // (mode 1-7, chord 1-7) 

    //4)
    setSynthFrequency(48);
    
    //5)
    createWavetable();
    
    //6)
    setOscillatorGain(0.5f);

    //7)
    std::array<bool, 12> melodicMinor = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1}; // 1, 2, b3, 4, 5, 6, 7
    std::array<std::array<bool, 12>, 7> melodicMinorModes = extractDiatonicScales(melodicMinor);

    //8)
    std::array<int, 3> expandedTriad = expandTriadVoicing(48, 52, 55); // returns 48, 55, 64;
    
    //9)
    bool isDbDiatonicToFifthModeOfMelodicMinor = isMidiNoteDiatonic(49, melodicMinorModes.at(5)); // no it's not.
    
    //10)
    initializeDiagram(600);

    // I know this wasn't in the instructions, but I felt that the functions I came up with made more sense when assigning to a variable.  Let me know if that's ok!
    ignoreUnused(currentSample);                         // (2)
    ignoreUnused(expandedTriad);                         // (8)
    ignoreUnused(isDbDiatonicToFifthModeOfMelodicMinor); // (9)

    variableDeclarations();
    std::cout << "good to go!" << std::endl;
    return 0;    
}

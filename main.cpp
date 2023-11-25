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
 void 
 
 
 
 
 
 
 
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
        //example:
        int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
        
    
        int counter = 3;
        int numberOfDogs = 5;
        int numberOfCats = 7;

        float weight = 5.5;
        float length = 6.5;
        float temperature = 7.5;

        bool isString = false;
        bool isDog = true;
        bool isCat = false;

        double pi = 3.14;
        double radius = 3.5;
        double e = 2.71;

        char letter = 'a';
        char grade = 'B';
        char firstLetter = 'A';

        

        
        ignoreUnused(counter, numberOfDogs, numberOfCats, weight, length, temperature, isString, isDog, isCat, pi, radius, e, letter, grade, firstLetter); //passing each variable declared to the ignoreUnused() function
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
int calculateCircumference(double radius)
{ 
    ignoreUnused(radius);
    return {};
} 
/*
 2)
 */
double calculateTriangleArea(double base, double height)
{ 
    ignoreUnused(base, height);
    return {};
} 
/*
 3)
 */
int countNumberOfZeros(int number)
{
    ignoreUnused(number);
    return {};
}
/*
 4)
 */
int addZeroAfterNumber(int number)
{
    ignoreUnused(number);
    return {};
}
/*
 5)
 */
void moveToTarget(int target = 1)
{ 
    ignoreUnused(target);
}
/*
 6)
 */
bool isAllowedNumber(int number)
{
    ignoreUnused(number);
    return {};
}
/*
 7)
 */
void assingNumber(int number)
{
    ignoreUnused(number);
}
/*
 8)
 */
int addNumbers(int number1, int number2)
{
    ignoreUnused(number1, number2);
    return {};
}
/*
 9)
 */
float multiplyNumbers(float number1, float number2)
{
    ignoreUnused(number1, number2);
    return {};
}
/*
 10)
 */
char returnCharacter(char character)
{
    ignoreUnused(character);
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
        auto circumference = calculateCircumference(2);
        //2)
        auto triangleArea = calculateTriangleArea(5, 10);
        //3)
        auto numberOfZeros = countNumberOfZeros(458000567);
        //4)
        auto numberWithZero = addZeroAfterNumber(45);
        //5)
        moveToTarget();
        //6)
        auto isAllowed = isAllowedNumber(7);
        //7)
        assingNumber(10);
        //8)
        auto sum = addNumbers(5, 9);
        //9)
        auto multiplication = multiplyNumbers(8, 9);
        //10)
        auto returnCharacter('G');
        
        ignoreUnused(carRented);
        ignoreUnused(circumference);
        ignoreUnused(triangleArea);
        ignoreUnused(numberOfZeros);
        ignoreUnused(numberWithZero);
        ignoreUnused(isAllowed);
        ignoreUnused(sum);
        ignoreUnused(multiplication);
        ignoreUnused(returnCharacter);

        std::cout << "good to go!" << std::endl;
        return 0;    
}

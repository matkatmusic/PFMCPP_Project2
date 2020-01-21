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
    int n = 3;
    int x = 4;
    float pi = 3.14f;
    float y = 5.67f;
    float z = 7.89f;
    bool t = true;
    bool f = false;
    bool q = true;
    double d = 123.456;
    double g = 4.5;
    double l = 9.98270345;
    char a = 'a';
    char b = 'b';
    char c = 'c';
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(n);
    ignoreUnused(x);
    ignoreUnused(pi);
    ignoreUnused(y);
    ignoreUnused(z);
    ignoreUnused(t);
    ignoreUnused(f);
    ignoreUnused(q);
    ignoreUnused(d);
    ignoreUnused(g);
    ignoreUnused(l);
    ignoreUnused(a);
    ignoreUnused(b);
    ignoreUnused(c);

    
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
void playMelody(int steps, char root, bool isMinor = false)
{
    ignoreUnused(steps, root, isMinor);
}
/*
 2)
 */
void skipRope(int skips, float ropeLength = 3.f, bool reverse = false)
{
    ignoreUnused(skips, ropeLength, reverse);
}
/*
 3)
 */
int add(int a, int b)
{
    ignoreUnused(a, b);
    return {};
}

/*
4)
*/
bool greaterThan(float a, float b)
{
    ignoreUnused(a, b);
    return {};
}

/*
 5)
 */
void foo(double bar, char baz)
{
    ignoreUnused(bar, baz);
}
/*
 6)
 */
void walkToStore(int speed, int store = 0)
{
    ignoreUnused(speed, store);
}
/*
 7)
 */
float multiply(float a, float b)
{
    ignoreUnused(a, b);
    return {};
}
/*
 8)
 */
void sleep(int milliseconds)
{
    ignoreUnused(milliseconds);
}
/*
 9)
 */
char nextLetter(char c)
{
    ignoreUnused(c);
    return {};
}
/*
 10)
 */
double getDistance(double pointA, double pointB)
{
    ignoreUnused(pointA, pointB);
    return {};
}

int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    playMelody(16, 'c', true);

    //2)
    skipRope(1000, 2.6f);

    //3)
    int x = add(4, 5);
    std:: cout << x << std::endl;

    //4)
    bool b = greaterThan(5.69f, 6.3476f);
    std:: cout << b << std::endl;

    //5)
    foo(9.99, 'x');

    //6)
    walkToStore(6);

    //7)
    float f = multiply(3.14f, 4.23f);
    std:: cout << f << std::endl;

    //8)
    sleep(5000);

    //9)
    char c = nextLetter('b');
    std:: cout << c << std::endl;

    //10)
    double d = getDistance(2.456, 10.8);
    std:: cout << d << std::endl;
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}

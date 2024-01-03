#include <iostream>

template <typename... T> void ignoreUnused(T &&...) {}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free
functions. This will be the first project where the code you write will be
compiled and you will be responsible for making sure it compiles before
submitting it for review.


 1) Write down the names of the 6 major primitive types available in C++  here:

 int
 char
 long
 float
 double
 wchar_t








2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. a) give each variable declaration an
initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type
'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of
type 'void'. b) at the end of the function, call ignoreUnused once and pass all
of your variables to it. see line 71 for an example

3) Declare 10 free functions
    each declaration should have a random number of parameters in the function
parameter list. When naming your parameters, choose names that are relevant to
the task implied by the function's name. remember: Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing
semicolon 5) pass each of your function parameters to the ignoreUnused function
like you did in b) 6) if your function returns something other than void, add
'return { };' at the end of it. 7) provide default values for an arbitrary
number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the
formatting of your 10 functions.  At this point, you might have something that
looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar );
return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be corrected

9) in the main function at the end:
    for each of those functions declared,
        a) write out how the function would look if called with correct
arguments b) if the function returned anything, store it in a local variable via
the 'auto' keyword. c) pass the local variables to ignoreUnused() as you did in
2b) see main() for an example of this.

10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)
void variableDeclarations() {
  // example:
  int number =
      2; // declaration of a variable named "number", that uses the primitive
         // type 'int', and the variable's initial value is '2'

  int distance = 0;
  int timeElapsed = 10;

  char text[15] = "hello_world";
  char grade = 'A';
  char rank;

  long xCord = 33;
  long yCord = 23432423;
  long zCord;

  float xTick = 3.03f;
  float yTick = 6.06f;
  float zTick = 9.09f;

  double pick = 3.09302;
  double length = 6.18604;
  double speed = 9.27906;

  ignoreUnused(number, distance, timeElapsed, text, grade, rank, xCord, yCord,
               zCord);
  ignoreUnused(xTick, yTick, zTick, pick, length, speed);

  // passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(
    int rentalDuration,
    int carType = 0) // function declaration with random number of arguments,
                     // arbitrary number of arguments have default value
{
  ignoreUnused(rentalDuration, carType); // passing each function parameter to
                                         // the ignoreUnused() function
  return {}; // if your function returns something other than void, add 'return
             // {};' at the end of it.
}

/*
 1)
 */

int calculateSlope(int xCord, int yCord) 
{
  ignoreUnused(xCord, yCord);
  return {};
}

/*
 2)
 */
bool checkAir(double pressure)
{
  ignoreUnused(pressure);
  return {};
}

/*
 3)
 */
long calculateDistance(double xCord, double yCord) 
{
  ignoreUnused(xCord, yCord);
  return {};
}
/*
 4)
 */
long playMusic(bool powerOn) 
{
  ignoreUnused(powerOn);
  return {};
}

/*
 5)
 */

void changePitch(int speed, double velocity) 
{ ignoreUnused(speed, velocity); }

/*
 6)
 */
void stopPlay(int timeToStop) { ignoreUnused(timeToStop); }

/*
 7)
 */
bool isOutOfTime(double length, double time) 
{
  ignoreUnused(length, time);
  return {};
}

/*
 8)
 */
void fillWithZeros(int bufferSize, int length) 
{
  ignoreUnused(bufferSize, length);
}

/*
 9)
 */
double calculateAcceleration(double distance, double velocity)
{
  ignoreUnused(distance, velocity);
  return {};
}

/*
 10)
 */
double writeToBuffer(long data, int size) 
{
  ignoreUnused(data, size);
  return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a
 single message.

 send me a DM to review your pull request when the project is ready for
 review.

 Wait for my code review.
 */

int main() {
  // example of calling that function, storing the value, and passing it to
  // ignoreUnused at the end of main()
  auto carRented = rentACar(6, 2);

  // 1)
  auto slope = calculateSlope(3, 5);
  // 2)
  auto airPresent = checkAir(33.23);
  // 3)
  auto distance = calculateDistance(8.9, 1.02);
  // 4)
  auto isMusicOn = playMusic(true);
  // 5)
  changePitch(3, 6);
  // 6)
  stopPlay(8);

  // 7)
  auto timeCheck = isOutOfTime(4.3, 1.1);
  // 8)
  fillWithZeros(8, 3);
  // 9)
  auto acceleration = calculateAcceleration(7.1, 9.1);
  // 10)
  auto buffer = writeToBuffer(3232, 8);

  ignoreUnused(carRented, slope, airPresent, distance, isMusicOn, timeCheck,
               acceleration, buffer);
  std::cout << "good to go!" << std::endl;
  return 0;
}

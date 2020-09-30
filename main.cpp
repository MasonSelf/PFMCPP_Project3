/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  
*/

/*
Thing 1) Camper Van
5 properties:
    1) number of spare tires
    2) number of jerry cans 
    3) number of bumper stickers
    4) amount of windshield covered in bugs
    5) number of campers it will sleep
3 things it can do:
    1) drive
    2) pop its top
    3) guzzle gas
 */

/*
Thing 2) House Boat
5 properties:
    1) Number of Engines
    2) Number of Rooms
    3) Square footage of Deck
    4) Length of boat
    5) Number of life jackets
3 things it can do:
    1) Move
    2) Rock in waves
    3) Scare away pelicans
 */

/*
Thing 3) Field Recorder
5 properties:
    1) Number of Inputs
    2) Size of SD card
    3) Gain level
    4) Weight
    5) Size
3 things it can do:
    1) Record sound
    2) Playback sound
    3) Eject SD card
 */

/*
Thing 4) Printer
5 properties:
    1) Amount of Black Ink
    2) Amount of Color Ink
    3) Resolution of Scan
    4) Years until deprication of drivers
    5) Maximum number of pages in tray
3 things it can do:
    1) Print
    2) Scan
    3) Jam
 */

/*
Thing 10) City
5 properties:
    1) Streets
    2) Sewer System
    3) Government
    4) Buildings
    5) Parks
3 things it can do:
    1) Pass Laws
    2) Collect Taxes
    3) Repave Streets
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}

/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
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
Thing 5) Streets
5 properties:
    1) Depth of Paving
    2) Number of Lanes
    3) Width of Street
    4) Number of Potholes
    5) Length of Street
3 things it can do:
    1) Merge Lanes
    2) Develop Potholes
    3) Widen for urban expansion
 */

/*
Thing 6) Sewer System
5 properties:
    1) Depth of system beneath the ground
    2) Number of gutters per block
    3) diameter of pipes
    4) thickness of cement pipes
    5) number of rats
3 things it can do:
    1) carry sewer materials to destination
    2) clog
    3) house rats
 */

/*
Thing 7) Government
5 properties:
    1) Number of officials
    2) Number of office buildings
    3) Cost of election campaign
    4) Approval ratings 
    5) Number of letters sent out per day
3 things it can do:
    1) Run election
    2) Change number of office Buildings
    3) Appease the people
 */

/*
Thing 8) Buildings
5 properties:
    1) Age
    2) Number of stories
    3) Acreage of lot
    4) Angle of roof
    5) Number of windows
3 things it can do:
    1) Remodel
    2) Collapse
    3) Re-roof
 */

/*
Thing 9) Parks
5 properties:
    1) Acreage
    2) Distance from downtown 
    3) Number of swings
    4) Number of benches
    5) Number of Trees
3 things it can do:
    1) Change number of swings
    2) Change number of benches
    3) Expand Acreage
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

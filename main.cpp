/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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

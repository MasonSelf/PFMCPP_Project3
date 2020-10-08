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



struct CamperVan
{
    // number of spare tires
    int numSpareTires = 1;
    //number of jerry cans 
    int numJerryCans = 2;
    //number of bumper stickers
    int numBumpStickers = 44;
    //amount of windshield covered in bugs
    float windshieldBugPercentage = 0.7f;
    //number of campers it will sleep
    int personCapacity = 3;

    //drive
    void driveCamper( bool tankHasSomeGas = true );
    //pop its top
    void popCamperTop( bool isRaining = false, int outsideTemperature = 70 );
    //guzzle gas
    int consumeGas( float gasRemaining, bool airConditioningOn );
};

struct HouseBoat
{
    //Number of Engines
    int numEngines = 1;
    //Number of Rooms
    int numRooms = 2;
    //Square footage of Deck
    float deckArea = 44.44f;
    //Length of boat
    float boatLength = 20.1f;
    //Number of life jackets
    int numLifeJackets = 4;

    //Move
    void moveBoat( float knotsperGallon, float windknots );
    //Rock in waves
    void rockInWaves( int swell = 10 );
    //Scare away pelicans
    void scarePelicans( int crewSize = 7, float crewVoiceVolume = 80.1f, float boatSpeed = 30.f);
};

struct FieldRecorder
{
    //Number of Inputs
    int numInputs = 4;
    //Size of SD card
    int storageCapacity = 64;
    //Gain level
    float gain = 24.f;
    //Weight
    double weight = 0.34298348768768768798798;
    //Size
    float length = 10.1f;

    struct Mic
    {
        std::string pickUpPattern = "hyperCardiod";
        std::string manufacturer = "shure";
        bool requiresPhantom = true;
        float micLength = 7.6f;
        float capsuleDiameter = 0.4f;

        void registerMicWithManufacterer ( double serialNum );
        void repairMic( bool micWorks = false );
        void positionMic( float distancefromSource, float cableLength );   
    };

    //Record sound
    void record( Mic mic, float remainingStorage );
    //Playback sound
    float playback( float samples, float speakerVolume = 0.0f );
    //Eject SD card
    void ejectSD( bool ejectButtonPressed = true );
 
    Mic lav;
};

struct Printer
{
    // Amount of Black Ink
    float blackInkAmount = 0.9f;
    //Amount of Color Ink
    float colorInkAmount = 0.9f;
    //Resolution of Scan
    double scanRes = 1000.1013813813;
    //Years until deprication of drivers
    int yearsRemaining = 1;
    //Maximum number of pages in tray
    int pageMax = 100;

    struct Paper
    {
        float paperWidth = 9.5f;
        float paperHeight = 11.f;
        double paperThickness = 0.00001;
        std::string material = "woodPulp";
        bool paperCreased = false;

        void foldPaper( float foldStartX, float foldStartY, float foldEndX, float foldEndY );
        void loadIntoPrinter( float width = 9.5f, float height = 11.f);
        void wastePaper( bool printLayoutIsAppropriate = false);
    };

    //Print
    void print( bool paperAvailable = true, bool documentReceived = true);
    //Scan
    float scanDoc( float docWidth, float docHeight);
    //Jam
    void jamPrinter( int numPages = 101, bool errorMessageReceived = true, float sensorTemp = 90.1f ); 

    Paper jamFreeEdition;
};

struct Street
{
    //Depth of Paving
    float pavementDepth = 1.1f;
    //Number of Lanes
    int numLanes = 4;
    //Width of Street
    float streetWidth = 25.7f;
    //Number of Potholes
    int numPotholes = 9;
    //Length of Street
    int streetLength = 4000;

    //Merge Lanes
    int mergeLanes( int currentLanes = 3, int targetLanes = 2 );
    //Develop Potholes
    int addPotholes( int currentPotholes = 1, bool winterVibe = true );
    //Widen for urban expansion
    void widenStreet( int lanes = 2, float width = 25.7f, int dailyPopulationGrowth = 40 );
};

struct SewerSystem
{
    //Depth of system beneath the ground
    float sewerDepth = 10.0f;
    //Number of gutters per block
    int gutterCount = 4;
    //diameter of pipes
    float pipeDiameter = 7.9f;
    //thickness of cement pipes
    float pipeThickness = 0.7f;
    //number of rats
    int ratPopulation = 1000;

    //carry sewer materials to destination
    void deliverMaterials( bool hasRained = true );
    //clog
    void sewerClog( int numLeavesInGutter = 44100, float mudVolume = 96000.0f );
    //house rats
    void provideRatHousing( int sticks = 48000 );
};

struct Government
{
    //Number of officials
    int numOfficials = 33;
    //Number of office buildings
    int numOffices = 5;
    //Cost of election campaign
    float campaignCost = 100000.22f;
    //Approval ratings 
    double approvalRating = 0.66;
    //Number of letters sent out per day
    int dailyLetterOutput = 441000;

    //Run election
    void election( float cost = 700342.99f, int numRallies = 7 );
    //Change number of office Buildings
    int changeNumOffice( int currentNum = 4, int desiredDiff = -1 );
    //Appease the people
    void appeasePeople( float taxRate = 0.3f, float govSpending = 1000000.11f );
};

struct Building
{
    //Age
    int buildingAge = 50;
    //Number of stories
    int buildingStories = 12;
    //Acreage of lot
    float lotAcreage = 1.2f;
    //Angle of roof
    float roofAngle = 30.33f;
    //Number of windows
    int numWindows = 100;

    //Remodel
    void remodel( float budget = 80000.0f, bool committeeAproval = true );
    //Collapse
    void buildingCollapse( float age = 100, float earthquakeMag = 5.0f );
    //Re-roof
    void newRoof( float angle = 20.5f );
};

struct Park
{
    //Acreage
    float acreage = 100.1f;
    //Distance from downtown
    float distanceFromDownton = 5.5f; 
    //Number of swings
    int numSwings = 12;
    //Number of benches
    int numBenches = 30;
    //Number of Trees
    int numTrees = 400;

    //Change number of swings
    int swingNumChange( int currentNum = 12, float budget = 500.0f );
    //Change number of benches
    int benchNumChange( int currentNum = 30, float budget = 500.0f ); 
    //Expand Acreage
    float expandAcreage( float currentSize = 100.1f, float additionSize = 12.5f );
};

struct City
{
    //Streets
    Street magnolia;
    //Sewer System
    SewerSystem metro;
    //Government
    Government cityGov;
    //Buildings
    Building bankBuilding;
    //Parks
    Park centennial;

    //Pass Laws
    void newLaw( Government );
    //Collect Taxes
    float collectTaxes( Building, float acreageTax );
    //Repave Streets
    void repaveStreet( Street, float newDepth = 2.4f );
};


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

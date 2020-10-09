 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    struct Limb
    {
        void stepForward();
        int stepSize( int );
    };
    Limb leftFoot;
    Limb rightFoot;

    void run( int, bool );
};

void Person::run( int howFast, bool startWithLeftFoot )
{
    if( startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize(1) + rightFoot.stepSize(2);
    if ( howFast > 10 ) 
        std::cout << "dang, that's fast" << std::endl;
}
void Person::Limb::stepForward()
{

}
int Person::Limb::stepSize( int size )
{
    return size;
}


 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */



struct CamperVan
{
    int numSpareTires = 1;
    int numJerryCans = 2;
    int numBumpStickers = 44;
    float windshieldBugPercentage = 0.7f;
    int personCapacity = 3;

    void driveCamper( bool tankHasSomeGas = true );
    void popCamperTop( bool isRaining = false, int outsideTemperature = 70 );
    int consumeGas( float gasRemaining, bool airConditioningOn );
};

void CamperVan::driveCamper( bool tankHasSomeGas ) 
{
    if( tankHasSomeGas )
        std::cout << "driving..." << std::endl; 
}

void CamperVan::popCamperTop( bool isRaining, int outsideTemperature )
{
    if( isRaining == false && outsideTemperature >= 70 )
        std::cout << "pop the top!" << std::endl;
}

int CamperVan::consumeGas( float gasRemaining, bool airConditioningOn )
{
    if ( gasRemaining != 0.0f )
    {
        if ( airConditioningOn ) 
            return 2;
        else 
            return 1;
    }
    else 
        return 0; 
}


struct HouseBoat
{
    int numEngines = 1;
    int numRooms = 2;
    float deckArea = 44.44f;
    float boatLength = 20.1f;
    int numLifeJackets = 4;

    void moveBoat( float knotsperGallon, float windknots );
    void rockInWaves( int swell = 10 );
    void scarePelicans( int crewSize = 7, float crewVoiceVolume = 80.1f, float boatSpeed = 30.f);
};

void HouseBoat::moveBoat( float knotsperGallon, float windknots ) 
{
    float knotsTravelled = 0.0f;
    knotsTravelled += knotsperGallon - windknots;
}

void HouseBoat::rockInWaves( int swell ) 
{
    if (swell >= 7 ) 
        std::cout << "oh dear" << std::endl; 
}

void HouseBoat::scarePelicans( int crewSize, float crewVoiceVolume, float boatSpeed )
{
    float pelicanScareRating = crewVoiceVolume * crewSize * boatSpeed;
    if (pelicanScareRating > 5.0f ) 
        std::cout << "pelicans are tripping" << std::endl; 
}


struct FieldRecorder
{
    int numInputs = 4;
    int storageCapacity = 64;
    float gain = 24.f;
    double weight = 0.34298348768768768798798;
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

    void record( Mic mic, float remainingStorage );
    float playback( float samples, float speakerVolume = 0.0f );
    void ejectSD( bool ejectButtonPressed = true );
 
    Mic lav;
};

void FieldRecorder::Mic::registerMicWithManufacterer( double serialNum )
{
    std::cout << serialNum << std::endl;
}
void FieldRecorder::Mic::repairMic( bool micWorks )
{
    if (micWorks ) 
        std::cout << "no problem here" << std::endl; 
}
void FieldRecorder::Mic::positionMic( float distanceFromSource, float cableLength ) 
{
    if (distanceFromSource > cableLength ) 
        std::cout << "we need a longer cable" << std::endl; 
}
void FieldRecorder::record( FieldRecorder::Mic mic, float remainingStorage ) 
{
    if ( mic.manufacturer == "shure" ) 
        std::cout << "this oughta sound good" << std::endl;
    if ( remainingStorage == 0.0f ) 
        return;
    std::cout << "recording..." << std::endl;
}

float FieldRecorder::playback( float samples, float speakerVolume ) 
{
    return samples * speakerVolume;
}
void FieldRecorder::ejectSD( bool ejectButtonPressed ) 
{
    if (ejectButtonPressed == false ) 
        std::cout << "hey, press the eject button" << std::endl; 
}


struct Printer
{
    float blackInkAmount = 0.9f;
    float colorInkAmount = 0.9f;
    double scanRes = 1000.1013813813;
    int yearsRemaining = 1;
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

    void print( bool paperAvailable = true, bool documentReceived = true);
    float scanDoc( float docWidth, float docHeight);
    void jamPrinter( int numPages = 100, bool errorMessageReceived = false, float sensorTemp = 77.f );

    Paper jamFreeEdition;
};

void Printer::Paper::foldPaper( float foldStartX, float foldStartY, float foldEndX, float foldEndY )
{
    paperWidth = foldEndX - foldStartX; 
    paperHeight = foldEndY - foldStartY; 
}

void Printer::Paper::loadIntoPrinter( float width, float height )
{
    if (width > 9.5f ) 
        std::cout << "too wide!" << std::endl;
    if (height > 11.f ) 
        std::cout << "this page may get stuck" << std::endl; 
}

void Printer::Paper::wastePaper( bool printLayoutIsAppropriate )
{
    if ( printLayoutIsAppropriate ) 
        std::cout << "no waste here" << std::endl; 
}

void Printer::print( bool paperAvailable, bool documentReceived ) 
{
    if ( paperAvailable == false ) 
        std::cout << "need more paper" << std::endl; 
    if ( documentReceived == false ) 
        std::cout << "document not yet received" << std::endl;
}

float Printer::scanDoc( float docWidth, float docHeight )
{
   return docWidth * docHeight; 
}
 

void Printer::jamPrinter( int numPages, bool errorMessageReceived, float sensorTemp )
{
    if ( numPages > 3 && sensorTemp > 100.1f && errorMessageReceived )
        std::cout << "it's jammed :(" << std::endl;
}


struct Street
{
    float pavementDepth = 1.1f;
    int numLanes = 4;
    float streetWidth = 25.7f;
    int numPotholes = 9;
    int streetLength = 4000;

    int mergeLanes( int targetLanes = 2 );
    int addPotholes( int currentPotholes = 1, bool winterVibe = true );
    void widenStreet( int lanes = 2, float width = 25.7f, int dailyPopulationGrowth = 40 );
};

int Street::mergeLanes( int targetLanes ) 
{
    numLanes = targetLanes;
    return numLanes;
}

int Street::addPotholes( int currentPotholes, bool winterVibe ) 
{
    if ( winterVibe ) 
        currentPotholes += 3;
    return currentPotholes;
}

void Street::widenStreet( int lanes, float width, int dailyPopulationGrowth ) 
{
    int laneAddition = dailyPopulationGrowth / 5;
    lanes += laneAddition;
    width += lanes * 10.f;
    std::cout << "street is appropriately widened" << std::endl;
}


struct SewerSystem
{
    float sewerDepth = 10.0f;
    int gutterCount = 4;
    float pipeDiameter = 7.9f;
    float pipeThickness = 0.7f;
    int ratPopulation = 1000;

    void deliverMaterials( bool hasRained = true );
    void sewerClog( int numLeavesInGutter = 44100, float mudVolume = 96000.0f );
    void provideRatHousing( int sticks = 48000 );
};

void SewerSystem::deliverMaterials( bool hasRained ) 
{
    if (hasRained )
        std::cout << "delivering..." << std::endl;
}

void SewerSystem::sewerClog ( int numLeavesInGutter, float mudVolume ) 
{
    float clogSeverity = (numLeavesInGutter - mudVolume) / 40000.f; 
    if ( clogSeverity > 100.0f )
        std::cout << "this is bad" << std::endl; 
}

void SewerSystem::provideRatHousing( int sticks ) 
{
    int potentialNumHouses = sticks / 100;
    std::cout << potentialNumHouses << std::endl;
}


struct Government
{
    int numOfficials = 33;
    int numOffices = 5;
    float campaignCost = 100000.22f;
    float approvalRating = 0.66f; 
    int dailyLetterOutput = 441000;

    void election( float cost = 700342.99f, int numRallies = 7 );
    int changeNumOffice( int currentNum = 4, int desiredDiff = -1 );
    void appeasePeople( float taxRate = 0.3f, float govSpending = 1000000.11f );
};

void Government::election( float cost, int numRallies ) 
{
    if ( cost > 10000.f && numRallies < 4 ) 
        std::cout << "these folks are lazy" << std::endl;
}

int Government::changeNumOffice( int currentNum, int desiredDiff ) 
{
    return currentNum + desiredDiff;
}

void Government::appeasePeople( float taxRate, float govSpending )
{
    if ( taxRate < .2f && govSpending < 100000.f ) 
        std::cout << "the people are appeased" << std::endl;
}


struct Building
{
    int buildingAge = 50;
    int buildingStories = 12;
    float lotAcreage = 1.2f;
    float roofAngle = 30.33f;
    int numWindows = 100;

    void remodel( float budget = 80000.0f, bool committeeAproval = true );
    void buildingCollapse( float age = 100, float earthquakeMag = 5.0f );
    void newRoof( float angle = 20.5f );
};

void Building::remodel( float budget, bool committeAproval )
{
    float hipness;
    if (committeAproval == true ) 
        hipness = budget * .7f;
    else 
        hipness = 0.0f;
}

void Building::buildingCollapse(float age, float earthquakeMag )
{
    float fragility = age * .2f;
    if (fragility < earthquakeMag ) 
        std::cout << "doom" << std::endl;
}

void Building::newRoof( float angle )
{
    if (angle == 0.0f ) 
        std::cout << "Are you sure this won't collect rain?" << std::endl;
}


struct Park
{
    float acreage = 100.1f;
    float distanceFromDownton = 5.5f; 
    int numSwings = 12;
    int numBenches = 30;
    int numTrees = 400;

    int swingNumChange( int currentNum = 12, int budget = 500 );
    int benchNumChange( int currentNum = 30, int budget = 500 ); 
    float expandAcreage( float currentSize = 100.1f, float additionSize = 12.5f );
};

int Park::swingNumChange( int currentNum, int budget )
{
    int addition = budget / 100; 
    currentNum += addition;
    return currentNum;
}

int Park::benchNumChange( int currentNum, int budget ) 
{
    int addition = budget / 50; 
    currentNum += addition;
    return currentNum;
}

float Park::expandAcreage( float currentSize, float additionSize ) 
{
    currentSize += additionSize;
    return currentSize;
}

struct City
{
    Street magnolia;
    SewerSystem metro;
    Government cityGov;
    Building bankBuilding;
    Park centennial;

    void newLaw( Government );
    float collectTaxes( Building, float acreageTax );
    void repaveStreet( Street, float newDepth = 2.4f );
};

void City::newLaw ( Government gov ) 
{
    if (gov.approvalRating > .5f) 
        std::cout << "let's pass this law" << std::endl;
}

float City::collectTaxes( Building building, float acreageTax ) 
{
    return building.lotAcreage * acreageTax;
}

void City::repaveStreet (Street street, float newDepth )
{
    street.pavementDepth = newDepth;
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

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}

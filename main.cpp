/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.






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
        return 1;
    } 
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
    if ( remainingStorage == 0.0f ) 
        return;
    if ( mic.manufacturer == "shure" ) 
        std::cout << "this oughta sound good" << std::endl;
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
    Example::main();
    std::cout << "good to go!" << std::endl;
}

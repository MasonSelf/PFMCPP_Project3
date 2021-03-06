/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to your types. 
 
 2) use while() or for() loops to do something interesting inside these new member functions.
         a) for example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
 
 5) click the [run] button.  Clear up any errors or warnings as best you can.d
 */

#include <iostream>
namespace Example 
{
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //3), 4c) 
    {
        Bar bar(startingVal);                //4a)
        while( bar.num < threshold )         //4a) 
        { 
            bar.num += 1;                    //4a)
            
            if( bar.num >= threshold )       //4b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 1);        //5) 
    
    std::cout << "bar.num: " << bar.num << std::endl;     //6) 
    return 0;
}
}

//call Example::main() in main()








struct CamperVan
{
    int numSpareTires { 1 };
    int numJerryCans { 0 };
    int numBumpStickers = { 44 };
    float windshieldBugPercentage { 0.7f };
    int personCapacity { 3 };
    CamperVan();

    void driveCamper( bool tankHasSomeGas = true );
    void popCamperTop( bool isRaining = false, int outsideTemperature = 70 );
    int consumeGas( float gasRemaining, bool airConditioningOn );
    int addJerryCans(int curCans, int maxCans);
};

CamperVan::CamperVan(){}

void CamperVan::driveCamper( bool tankHasSomeGas ) 
{
    if( tankHasSomeGas )
        std::cout << "driving..." << std::endl; 
}

void CamperVan::popCamperTop( bool isRaining, int outsideTemperature )
{
    if( isRaining == false && outsideTemperature >= 70 )
        std::cout << "pop the top!" << std::endl;
    if ( isRaining )
        std::cout << "don't pop the top, but the good news is that our windshield bug percentage, which is currently " << windshieldBugPercentage << " may go down because it is raining" << std::endl;
}

int CamperVan::consumeGas( float gasRemaining, bool airConditioningOn )
{
    if ( gasRemaining != 0.0f )
    {
        if ( airConditioningOn ) 
            {
                std::cout << "you've consumed 2 gallons of gas. consider either turning your ac off, or taking person capacity (" << personCapacity << "} down to save feul." << std::endl;
                return 2;
            }
        return 1;
    }
    std::cout << "no gas, bro" << std::endl; 
    return 0; 
}

int CamperVan::addJerryCans(int curCans, int maxCans)
{
    while( curCans < maxCans)
    {
        curCans += 1;
        if (curCans == maxCans)
        {
            std::cout << "maximum jerry can amount has been reached!" << std::endl; 
            return curCans;
        }
    }
    if ( curCans >= maxCans )
        std::cout << "There is no room for any more cans!\nConsuming a can now to make space..." << std::endl;
    curCans -= 1;
    return curCans;
}


struct HouseBoat
{
    int numEngines, numRooms, numLifeJackets;
    float deckArea, boatLength;
    struct ReturnToShore
    {
        int nautMilesRemaining = 1;
        ReturnToShore( int n ) : nautMilesRemaining(n) {}
    };
    ReturnToShore getThereFunction ( int curDistance )
    {
        for ( int i = curDistance; i > 0; i-- )
        {
            std::cout << "distance left: " << i << "\n";
            if (i <= 1 )
            {
                std::cout << "slow down, we're getting close" << "\n";
                return i;
            }
        }
        std::cout << "oh no! We're getting swept out to sea right as we were arriving to shore..." << "\n";
        return  ReturnToShore{ 1000 };
    }
    
    HouseBoat();

    void moveBoat( float knotsperGallon, float windknots );
    void rockInWaves( int swell = 10 );
    void scarePelicans( int crewSize = 7, float crewVoiceVolume = 80.1f, float boatSpeed = 30.f);
};

HouseBoat::HouseBoat() :
numEngines(2),
numRooms(3),
numLifeJackets(4),
deckArea(44.4f),
boatLength(22.f)
{

}

void HouseBoat::moveBoat( float knotsperGallon, float windknots ) 
{
    float knotsTravelled = 0.0f;
    knotsTravelled += knotsperGallon - windknots;
    std::cout << "knots travelled: " << knotsTravelled << std::endl;
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
    FieldRecorder();

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

FieldRecorder::FieldRecorder(){}

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
    float blackInkAmount, colorInkAmount;
    double scanRes;
    int yearsRemaining;
    int pageMax;
    Printer();

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

Printer::Printer() : blackInkAmount(.9f), colorInkAmount(.1f), scanRes(1209.235986), yearsRemaining(1), pageMax(45) {}

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
    Street();

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
Street::Street(){}

struct SewerSystem
{
    float sewerDepth = 10.0f;
    int gutterCount = 4;
    float pipeDiameter = 7.9f;
    float pipeThickness = 0.7f;
    int ratPopulation = 1000;
    SewerSystem();

    void deliverMaterials( bool hasRained = true );
    void sewerClog( int numLeavesInGutter = 44100, float mudVolume = 96000.0f );
    void provideRatHousing( int sticks = 48000 );
};

SewerSystem::SewerSystem(){}

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
    Government();

    void election( float cost = 700342.99f, int numRallies = 7 );
    int changeNumOffice( int currentNum = 4, int desiredDiff = -1 );
    void appeasePeople( float taxRate = 0.3f, float govSpending = 1000000.11f );
};

Government::Government(){}

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
    Building();

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
Building::Building(){}

struct Park
{
    float acreage = 100.1f;
    float distanceFromDownton = 5.5f; 
    int numSwings = 12;
    int numBenches = 30;
    int numTrees = 400;
    Park();

    int swingNumChange( int currentNum = 12, int budget = 500 );
    int benchNumChange( int currentNum = 30, int budget = 500 ); 
    float expandAcreage( float currentSize = 100.1f, float additionSize = 12.5f );
};

Park::Park(){}

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
    City();

    void newLaw( Government );
    float collectTaxes( Building, float acreageTax );
    void repaveStreet( Street, float newDepth = 2.4f );
};

City::City(){}

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

    CamperVan sprinter;
    // sprinter.consumeGas(1.1f, true);
    // sprinter.popCamperTop(true, 88);

    std::cout << "Let's add one jerry can to our camper." << std::endl;
    sprinter.numJerryCans = sprinter.addJerryCans(sprinter.numJerryCans, 3);
    std::cout << "Current number of cans is now " << sprinter.numJerryCans << std::endl;

    HouseBoat raft;
    raft.getThereFunction(5);
    raft.getThereFunction(0);

    // raft.moveBoat(.5f, .1f);

    // Printer canon;
    // std::cout << "the size of your scan document is " << canon.scanDoc(9.5f, 11.f) << std::endl;

    // Park centennial;
    // std::cout << "Are there enough benches for the event? " << (centennial.benchNumChange(20, 100) > 21 ? "Thankfully yes" : "We need a bigger budget for more benches") << "\n";
}

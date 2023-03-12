#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        numberSelector
//  action 1:    enumerates even numbers
numberSelector.enumerateEven();
//  action 2:    checks 0 presence
numberSelector.checkZeroPresence();
//  action 3:    applies an inversion on an array
numberSelector.invertArray();
//  2)
//  Noun:        oscillator
//  action 1:    produces sine
oscillator.produceSine();
//  action 2:    adds a limit threshold
oscillator.setLimitThreshold();
//  action 3:    modulates sine with Square
oscillator.modulateSineWith();
//  3)
//  Noun:        appWindow
//  action 1:    shows data analysed
appWindow.showDataAnalysed();
//  action 2:    shrinks a sub-module inside application
appWindow.shrinkSubModule();
//  action 3:    returns calculated free area of application
appWindow.getFreeArea();
//  4)
//  Noun:        cube
//  action 1:    returns the coordinates of all vortices as 2-dimension array
cube.getVortices();
//  action 2:    applies the rotation for an angle passed as an argument
cube.rotateBy(angle);
//  action 3:    applies the scale passed as an argument
cube.scaleBy(scaleFactor);
//  5)
//  Noun:        searchLine
//  action 1:    considering case sensitivity
searchLine.considerCaseSensitivity();
//  action 2:    filters result by date of last updates
searchLine.showWithLatestUpdates();
//  action 3:    clears it's content
searchLine.clear();
//  6)
//  Noun:        appLauncher
//  action 1:    checks for updates
appLauncher.checkForUpdates();
//  action 2:    hides ads
appLauncher.hideAds();
//  action 3:    toggles launch with windows start up
appLauncher.setLaunchAtWindowsStartup();
//  7)
//  Noun:        cat
//  action 1:    runs in panic
cat.runInPanic();
//  action 2:    falls to sleep
cat.sleep();
//  action 3:    starts to purr
cat.Purr();
//  8)
//  Noun:        fuctionalBlock
//  action 1:    takes random argument from an array
functionalBlock.takeRandomArgumentFromArray();
//  action 2:    applies calculation
functionalBlock.applyCalc();
//  action 3:    transforms type of calculation result into Integer
functionalBlock.toNearestInt();
//  9)
//  Noun:        human
//  action 1:    starts to walk
human.walk();
//  action 2:    says his name
human.getName();
//  action 3:    sends command to another person
human.sendCommand();
//  10)
//  Noun:        stateChecker
//  action 1:    applies passed state as an argument
stateChecker.setState(argument);
//  action 2:    returns current state
stateChecker.getState();
//  action 3:    checks state with passed arguments and returns boolean
stateChecker.isState(stateToCheck);


#endif

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
    std::cout << "good to go" << std::endl;
    return 0;
}

/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
struct Car
{
    struct CarSeat
    {
        bool setaIsLeather;
    };
    
    int numberOfWheels;
    bool convertible;
    CarSeat driversSeat;
    CarSeat navigatorsSeat;
    
    bool switchSeats( CarSeat oldSeat, CarSeat newSeat);
    void accelerate(float fowFarToPushThePedal);
};

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent   : public Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

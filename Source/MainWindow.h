/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic outline for a simple desktop window.

  ==============================================================================
*/

#ifndef __MAINWINDOW_H_434D326__
#define __MAINWINDOW_H_434D326__

#include "../JuceLibraryCode/JuceHeader.h"
#include "MidiManager.h"


//==============================================================================
class MainAppWindow   : public DocumentWindow
{
public:
    //==============================================================================
    MainAppWindow();
    ~MainAppWindow();

    void closeButtonPressed();

    AudioDeviceManager _AudioDeviceManager;

    /* Note: Be careful when overriding DocumentWindow methods - the base class
       uses a lot of them, so by overriding you might break its functionality.
       It's best to do all your work in you content component instead, but if
       you really have to override any DocumentWindow methods, make sure your
       implementation calls the superclass's method.
    */
    
    
    //----------------------------- emergent.io --------------------------------//
    void printIncomingMidi();

private:
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainAppWindow)
};


#endif  // __MAINWINDOW_H_434D326__

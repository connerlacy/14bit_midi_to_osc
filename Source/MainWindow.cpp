/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic outline for a simple desktop window.

  ==============================================================================
*/

#include "MainWindow.h"


//==============================================================================
MainAppWindow::MainAppWindow()
    : DocumentWindow (JUCEApplication::getInstance()->getApplicationName(),
                      Colours::lightgrey,
                      DocumentWindow::allButtons)
{
    centreWithSize (500, 400);
    setVisible (true);

    _AudioDeviceManager.initialise(2, 2, // max 2 input and output channels.
                              0,         // pass in the last known configuration state
                              true       // select the default device if restoring the last config fails.
                              );
    
    MidiManager *midiInput = new MidiManager();
    
    //---------------------------------------------------------//
    /*printIncomingMidi();
    
    StringArray midiInputDevices;
    midiInputDevices = MidiInput::getDevices();
    
    for(int i=0; i<midiInputDevices.size(); i++)
    {
        std::cout << midiInputDevices[i] << "\n";
        //printf("Number of Input Devices: %s", midiInputDevices[i]);
    }
    
    MidiMessageCollector* messageCollector = new MidiMessageCollector();
    messageCollector->reset(44100.0000);
    
    //MidiInput *midiInput = MidiInput::openDevice(1,messageCollector);
    
    AudioDeviceManager *audioDeviceManager = new AudioDeviceManager();
    std::cout << "audio device error:\n" << audioDeviceManager->initialise(1,1,0,0);
    audioDeviceManager->setMidiInputEnabled(midiInputDevices[1],true);
    audioDeviceManager->addMidiInputCallback(midiInputDevices[1], messageCollector);*/
    
    
    
}

MainAppWindow::~MainAppWindow()
{
}

void MainAppWindow::closeButtonPressed()
{
    JUCEApplication::getInstance()->systemRequestedQuit();
}

void MainAppWindow::printIncomingMidi()
{
    //printf("Initial Print Test");
}

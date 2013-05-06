#include "MidiManager.h"


MidiManager::MidiManager() : midiNote(0), velocity(0)

{
	//midiInput = MidiInput::openDevice(MidiInput::getDefaultDeviceIndex(),this);
    
    for (int i =0; i < MidiInput::getDevices().size(); i++)
    {
        std::cout << String("midi device: ") << MidiInput::getDevices()[i] << String(" index:") << i << "\n";
    }
	
    MidiInput *device = MidiInput::openDevice(2, this);
    device->start();
    
	//if(midiInput) midiInput->start(); // if there is a midi input then start it
}

MidiManager::~MidiManager()
{
	midiInput->stop();
}

void MidiManager::handleIncomingMidiMessage (MidiInput* source, const MidiMessage& message)
{
    if(message.isNoteOnOrOff())
    {
            printf("note: %i    velocity: %i\n", message.getNoteNumber(), message.getVelocity());
    }
	
	/*if(message.isNoteOn())
	{
		midiNoteOn = true;  //switch our note on trigger to true
		midiNote = message.getNoteNumber();
		midiNoteHz = message.getMidiNoteInHertz(midiNote);
		velocity = (int)(message.getVelocity());
	}
	
	if(message.isController())
	{
		controlChange = true;
		controlNum = message.getControllerNumber();
		controlVal = message.getControllerValue();
	}*/
    
}
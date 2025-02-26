/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include <pybind11/embed.h>

//==============================================================================
HummingbirdAudioProcessorEditor::HummingbirdAudioProcessorEditor (HummingbirdAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

HummingbirdAudioProcessorEditor::~HummingbirdAudioProcessorEditor()
{
}

//==============================================================================
void HummingbirdAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (juce::FontOptions (15.0f));
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void HummingbirdAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

namespace py = pybind11;
py::scoped_interpreter guard{};

std::string generateAudioWithRiffusion(int bpm, std::string chords, std::string genre) {
    py::module_ riffusion = py::module_::import("generate_audio");
    py::object result = riffusion.attr("generate_audio")(bpm, chords, genre);
    return result.cast<std::string>();
}
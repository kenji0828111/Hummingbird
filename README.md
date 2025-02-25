# Hummingbird

This VST plugin comes with a user interface that lets you specify BPM, chord progression, and genre directly in the audio generation prompt.

### Environment Setup

**Visual Studio 2022**
- "Desktop development with C++"
- ".NET desktop development"
- "Python"
- Individual components:
  - C++ CMake tools (required for JUCE project builds)
  - Windows 10 SDK / Windows 11 SDK (for DAW compatibility)
  - MSVC v143 - VS 2022 C++ x64/x86 build tools (required for compilation)
  - Clang/LLVM (used for some JUCE functionalities)
  - Python

**Additional Installations**

- **Download JUCE**  
  Download JUCE from the official website:  
  [https://juce.com/get-juce/](https://juce.com/get-juce/)

- **Setting up Python Environment**  
  Install Python 3.13:  
  [https://www.python.org/downloads/windows/](https://www.python.org/downloads/windows/)  
  During installation, ensure to check "Add Python to PATH".  
  To verify the installation, run:  
  `python --version`  
  You should see:  
  `Python 3.13.2`

- **Setting up PyTorch**  
  Install the required libraries using pip:  
  `pip install torch torchvision torchaudio`  
  Then install the dependencies for Riffusion:  
  `pip install -r requirements.txt`
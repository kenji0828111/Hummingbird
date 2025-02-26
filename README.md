# Hummingbird

This VST plugin provides a user interface that allows you to specify BPM, chord progression, and genre directly in the audio generation prompt.

### Environment Setup

#### **Visual Studio 2022**

- Install the following workloads:
  - "Desktop development with C++"
  - ".NET desktop development"
  - "Python"
- Install the following individual components:
  - C++ CMake tools (required for JUCE project builds)
  - Windows 10 SDK / Windows 11 SDK (for DAW compatibility)
  - MSVC v143 - VS 2022 C++ x64/x86 build tools (required for compilation)
  - Clang/LLVM (used for some JUCE functionalities)
  - Python

#### **Additional Installations**

- **Download JUCE**\
  Download JUCE from the official website:\
  [https://juce.com/get-juce/](https://juce.com/get-juce/)

- **Setting up the Python Environment**\
  Install Python 3.10:\
  [https://www.python.org/downloads/windows/](https://www.python.org/downloads/windows/)\
  During installation, ensure to check "Add Python to PATH".\
  To verify the installation, run:

  ```
  python --version
  ```

  You should see:

  ```
  Python 3.10.11
  ```

- **Creating and Activating a Virtual Environment (venv)**\
  Navigate to your project folder and create a virtual environment:

  ```
  cd C:\{your Projects path}\Hummingbird
  python -m venv venv
  ```

  Activate the virtual environment:

  ```
  venv\Scripts\activate
  ```

  If `(venv)` appears in the command prompt, the virtual environment is activated.

- **Setting up PyTorch**\
  Install the required libraries using pip:

  ```
  pip3 install torch torchvision torchaudio --index-url https://download.pytorch.org/whl/cu118
  ```

  Verify the installation:

  ```
  python -c "import torch; print(torch.__version__)"
  ```

- **Setting up Riffusion**\
  Clone the Riffusion GitHub repository:

  ```
  git clone https://github.com/riffusion/riffusion
  cd riffusion
  ```

  Install dependencies:

  ```
  pip install -r requirements.txt
  ```

  Verify Riffusion installation:

  ```
  python riffusion/riffusion_pipeline.py
  ```

  If no errors occur, the setup is complete.

- **Deactivating and Reactivating the Virtual Environment**\
  To deactivate the virtual environment:

  ```
  deactivate
  ```

  To reactivate the virtual environment when resuming work:

  ```
  venv\Scripts\activate
  ```


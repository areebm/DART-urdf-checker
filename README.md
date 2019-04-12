# urdfLoader
Simple DART code for checking a URDF file

Loads the URDF in its default position and lists all Links and Joints in the console

Objects can be drawn in the world through MyWindow::drawWorld (i.e. COMs, Coordinate Axes - to be implented in later revisions of this project)

## Dependencies

- DART
 [Dart Homepage](https://dartsim.github.io)

- CMAKE
 [Cmake Homepage](https://cmake.org/)

## Compilation

Make sure you set your URDF source path in Main::createRobot before you make the project. Follow the instructions:

    git clone https://github.com/areebm/dart-urdf-checker.git
    cd DART-urdf-checker
    mkdir build
    cd build
    cmake ..
    make

## Usage

    ./urdfLoader

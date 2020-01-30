#ifndef MYWINDOW_HPP_
#define MYWINDOW_HPP_

#include <dart/dart.hpp>
#include <dart/gui/gui.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <iostream>
#include <fstream>

class MyWindow : public dart::gui::glut::SimWindow {

  public:
    MyWindow(const dart::simulation::WorldPtr& world);

    // Draw things in the world (e.g. spheres at COMs)
    void drawWorld() const override;

    // Get keyboard input
    void keyboard(unsigned char _key, int _x, int _y) override;

    // Define timestep inclusive of Controller and StereoCam updates
    void timeStepping() override;

    ~MyWindow() {}

  protected:

    // Robot pointer
    dart::dynamics::SkeletonPtr mRobot;
};

#endif
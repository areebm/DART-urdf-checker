#include "MyWindow.hpp"

using namespace std;
using namespace dart;

MyWindow::MyWindow(const dart::simulation::WorldPtr& world) {
      
      // Attach the world to the window
      setWorld(world);

      // Get vehicle skeleton from world to pass to Controller
      mRobot = world->getSkeleton("robot");

      int dof = mRobot->getNumDofs();

      // Print list of Joints
      cout << "JOINTS:" << endl;
      for(int i = 0; i < dof-5; i++){
        cout << i << ": " << mRobot->getJoint(i)->getName() << endl;
      }
}

//====================================================================
void MyWindow::drawWorld() const {

  // mRI is a Render Interface object
  if(mRI){
    // Draw things here
  }

  // Draw world
  SimWindow::drawWorld();
}

//====================================================================
void MyWindow::keyboard(unsigned char _key, int _x, int _y) {

  switch (_key) {

    default:
      SimWindow::keyboard(_key, _x, _y);
      break;
  }
}


//====================================================================
void MyWindow::timeStepping() {
  
  SimWindow::timeStepping();
}
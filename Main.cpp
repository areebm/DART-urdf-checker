#include "MyWindow.hpp"

using namespace std;
using namespace dart::common;
using namespace dart::dynamics;
using namespace dart::simulation;
using namespace dart::math;

//====================================================================
dart::dynamics::SkeletonPtr createRobot() {

  dart::utils::DartLoader loader;
  dart::dynamics::SkeletonPtr robotPtr;

  // Load the Skeleton from a file
  robotPtr = loader.parseSkeleton("/home/areeb/dart/09-URDF/KrangZed/KrangZed.urdf");
  robotPtr->setName("robot");

  // Print list of Body Nodes
  cout << "BODY NODES: " << endl;
  int numBodyNodes = robotPtr->getNumBodyNodes();
  for (int i = 0; i < numBodyNodes; i++){
    cout << i << ": " << robotPtr->getBodyNode(i)->getName() << endl;
  }
  cout << endl;
  
  return robotPtr;
}

//====================================================================
int main(int argc, char* argv[]) {

  // Create world
  WorldPtr world = std::make_shared<World>();

  // Load robot
  SkeletonPtr robotSkeletonPtr = createRobot();
  world->addSkeleton(robotSkeletonPtr);

  // Create window
  MyWindow window(world);

  // Run the world
  glutInit(&argc, argv);
  window.initWindow(1280,720, "URDF Test");
  glutMainLoop();

  return 0;
}

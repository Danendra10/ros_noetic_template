/**
 * @author Name @github
 * @date date
 * @brief ...
 *
 * Template:
 * @copyright Copyright (c) 2024
 */

#include "ros_template/node_name.hpp"

int main(int argc, char **argv) {
  ros::init(argc, argv, "node_name");

  ros::NodeHandle NH;
  ros::AsyncSpinner AS(0);

  //====>>Init grapher
  if (NodeNameInit() == -1)
    ros::shutdown();

  //=====>>Timer
  tim_node_name = NH.createTimer(ros::Duration(0.02), CllbckNodeName);

  //=====>> Subscriber

  //=====>>Publisher

  AS.start();
  ros::waitForShutdown();

  tim_node_name.stop();
}

//-------------------------------------Init
//=========================================

int NodeNameInit() {
  try {
    // ...;
    return 0;
  } catch (std::exception &e) {
    ROS_ERROR("Exception: %s", e.what());
    ros::shutdown();
    return -1;
  }
}

//------------------------------------Timer
//=========================================

void CllbckNodeName(const ros::TimerEvent &event) {
  if (NodeNameRoutine() == -1)
    ros::shutdown();
}

//------------------------------------Routine
//===========================================

int NodeNameRoutine() {
  try {
    // ...;
    return 0;
  } catch (const std::exception &e) {
    ROS_ERROR("Exception: %s", e.what());
    ros::shutdown();
    return -1;
  }
}

//--------------------------------Functions
//=========================================
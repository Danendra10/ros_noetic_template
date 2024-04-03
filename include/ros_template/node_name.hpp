#ifndef NODE_NAME_HPP_
#define NODE_NAME_HPP_

#pragma once

//=========== Include Definitions ===========//
#include <ros/ros.h>

//=========== Global Variables ==============//
ros::Timer tim_node_name;

//=========== Callback Functions ===========//
void CllbckNodeName(const ros::TimerEvent &event);

//=========== Helper Functions ==============//
int NodeNameInit();
int NodeNameRoutine();

#endif // NODE_NAME_HPP_
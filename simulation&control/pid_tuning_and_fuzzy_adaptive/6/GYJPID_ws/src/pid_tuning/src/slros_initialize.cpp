#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "PID_tuning";

// For Block PID_tuning/Subscribe
SimulinkSubscriber<sensor_msgs::Joy, SL_Bus_PID_tuning_sensor_msgs_Joy> Sub_PID_tuning_3;

// For Block PID_tuning/Subscribe1
SimulinkSubscriber<std_msgs::Float32, SL_Bus_PID_tuning_std_msgs_Float32> Sub_PID_tuning_18;

// For Block PID_tuning/Publish
SimulinkPublisher<std_msgs::Int16, SL_Bus_PID_tuning_std_msgs_Int16> Pub_PID_tuning_2;

// For Block PID_tuning/Publish1
SimulinkPublisher<std_msgs::Float32, SL_Bus_PID_tuning_std_msgs_Float32> Pub_PID_tuning_34;

// For Block PID_tuning/Publish2
SimulinkPublisher<geometry_msgs::Pose, SL_Bus_PID_tuning_geometry_msgs_Pose> Pub_PID_tuning_37;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}


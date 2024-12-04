// #DEFINE L_WHEEL;
// #DEFINE R_WHEEL;

#include <memory>
#include<string>
#include<bits/stdc++.h>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
using std::placeholders::_1;


// void head(char* msg)
// {
//   if(msg == "FWD")
//   {
//       std::cout<<"FORWARD\n";
//       // pwmWrite(L_WHEEL, 1024) ;
//       // pwmWrite(R_WHEEL, 1024);
//   }
// }


class MinimalSubscriber : public rclcpp::Node
{
  public:
    MinimalSubscriber()
    : Node("minimal_subscriber")
    {
      // subscription_ = this->create_subscription<std_msgs::msg::String>(
      // "topic", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
    
       subscription_ = this->create_subscription<std_msgs::msg::Int16>(
      "topic", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
    }

  private:
    void topic_callback(const std_msgs::msg::String & msg) const
    {
      // RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg.data.c_str());
      std::cout<<msg.data;

      // std::string msg = msg.data;
      // head(msg.data.c_str());
    }
    // rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
    rclcpp::Subscription<std_msgs::msg::Int16>::SharedPtr subscription_;

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(  std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();


  // if (wiringPiSetup () == -1)
  // exit (1) ;

  // pinMode (1, PWM_OUTPUT) ;

  return 0;
}

// #include <rclcpp/rclcpp.hpp>
// #include <std_msgs/msg/string.hpp>

// class SimplePublisher : public rclcpp::Node 
// {
//     public:
//         SimplePublisher() : Node("simple_publisher"), counter_(0) {
//             pub_ = create_publisher<std_msgs::msg::String>("chatter", 10); // template function
//             timer_ = create_wall_timer();
//         }

//     private:
//         unsigned int counter_;
//         rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_;
//         rclcpp::TimerBase::SharedPtr timer_;

// };
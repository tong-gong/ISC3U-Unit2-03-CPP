// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on November 2020
// This is a program to calculate the circumference of a circle
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>  // 提供基本输入输出服务
#include <cmath>  // 提供数学运算

int main() {
  const double tau = 6.28;   // const double 是定义一个常量，之后不可更改!
  int radius;  // 定义___为数字
  double circumference;
  // 输入值
  std::cout << "enter the radius of the circle (mm)" << std::endl;
  std::cin >> radius;
  // 计算过程
  circumference = tau*radius;
  // 输出结果
  std::cout << "" << std::endl;
  std::cout << "circumference is " << (circumference) << "mm" << std::endl;
}

// Copyright 2021 <elizavetamaikova>

#ifndef INCLUDE_BUILDER_HPP_
#define INCLUDE_BUILDER_HPP_

#include <async++.h>
#include <iostream>
#include <boost/thread.hpp>
#include <boost/thread/thread.hpp>
#include <string>
#include <boost/process.hpp>

class Builder {
 public:
  Builder(std::string config, bool install, bool pack, int32_t timeout);
  bool NewTask(std::string task);
  void Timer();


 private:
  std::string _config;
  bool _install;
  bool _pack;
  int32_t _timeout;
  boost::process::child _child;
};

#endif // INCLUDE_BUILDER_HPP_

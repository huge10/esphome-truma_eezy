#pragma once

#include "enum.h"
#include "esphome/components/select/select.h"
#include "esphome/components/truma_eezy/TrumaEezyApp.h"

namespace esphome {
namespace truma_eezy {


class TrumaHeaterSelect : public Component, public select::Select, public Parented<TrumaEezyApp> {
 public:
  void setup() override;
  void dump_config() override;

  void set_type(TRUMA_SELECT_TYPE val) { this->type_ = val; }

 protected:
  TRUMA_SELECT_TYPE type_;

  void control(const std::string &value) override;

 private:
};
}  // namespace truma_eezy
}  // namespace esphome
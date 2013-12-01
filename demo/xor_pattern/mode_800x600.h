#ifndef DEMO_XOR_PATTERN_MODE_800X600_H
#define DEMO_XOR_PATTERN_MODE_800X600_H

#include "vga/mode.h"

namespace demo {
namespace xor_pattern {

class Mode_800x600 : public vga::Mode {
public:
  virtual void activate();
  virtual void rasterize(unsigned line_number, Pixel *target);
  virtual vga::Timing const &get_timing() const;
  virtual void top_of_frame();

private:
  unsigned _frame;
};

}  // namespace xor_pattern
}  // namespace demo

#endif  // DEMO_XOR_PATTERN_MODE_800X600_H
#include "etl/armv7m/implicit_crt0.h"

#include "demo/runner.h"
#include "demo/wipe/wipe.h"

int main() {
  demo::run<demo::wipe::Wipe>();
}


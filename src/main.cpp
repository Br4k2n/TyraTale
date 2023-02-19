#include <tyra>
#include "Undertale.hpp"

int main() {
  Tyra::EngineOptions options;

#if !debugmode
  options.writeLogsToFile = true;
  options.loadUsbDriver = true;
#endif

  Tyra::Engine engine(options);
  tale::tale game(&engine);
  engine.run(&game);
  SleepThread();
  return 0;
}

#include <tyra>
#include "Undertale.hpp"

int main() {
  Tyra::EngineOptions options;

  // options.writeLogsToFile = true;
  // options.loadUsbDriver = true;
  

  Tyra::Engine engine(options);
  tale::tale game(&engine);
  engine.run(&game);
  SleepThread();
  return 0;
}

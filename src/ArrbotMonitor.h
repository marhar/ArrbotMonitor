#ifndef ArrbotMonitor_h
#define ArrbotMonitor_h

// Usage:
//   MONITOR(x);
//   MONITOR2("lvn", really_long_cosine_variable_name);
//   MONITOR_ENDL()
// produces a line like this, suitable for viewing with Tools/Serial Plotter:
//   x:652 lvn:54.27
//
// To disable output, #define NO_MONITOR_OUTPUT

#ifndef NO_MONITOR_OUTPUT
#define MONITOR_RESET()   Serial.println(F("<reset>")
#define DISPLAY(v)        Serial.print(F(" " #v "/"));   Serial.print(v)
#define DISPLAY2(name, v) Serial.print(F(" " name "/")); Serial.print(v)
#define MONITOR(v)        Serial.print(F(" " #v ":"));   Serial.print(v)
#define MONITOR2(name, v) Serial.print(F(" " name ":")); Serial.print(v)
#define MONITOR_ENDL()    Serial.println()
#endif // NO_MONITOR_OUTPUT

#endif // ArrbotMonitor_h

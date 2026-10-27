// Function : ~EventHandler
// Namespace: juce:EventHandler
// Entry    : 001a6e40
// Prototype: undefined ~EventHandler(EventHandler * this)
// Body     : 001a6e40 - 001a6e51


/* juce::EventHandler::~EventHandler() */

void __thiscall juce::EventHandler::~EventHandler(EventHandler *this)

{
  ~EventHandler(this);
  operator_delete(this);
  return;
}



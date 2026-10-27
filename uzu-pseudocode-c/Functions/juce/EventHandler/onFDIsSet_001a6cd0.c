// Function : onFDIsSet
// Namespace: juce:EventHandler
// Entry    : 001a6cd0
// Prototype: undefined onFDIsSet(EventHandler * this, int param_1)
// Body     : 001a6cd0 - 001a6cdf


/* juce::EventHandler::onFDIsSet(int) */

void __thiscall juce::EventHandler::onFDIsSet(EventHandler *this,int param_1)

{
  updateCurrentMessageThread(this);
  LinuxEventLoopInternal::invokeEventLoopCallbackForFd(param_1);
  return;
}



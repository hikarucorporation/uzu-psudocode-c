// Function : ~AsyncCallInvoker
// Namespace: juce:MessageManager:callAsync_std__function_void___const___std__function_void___const__:AsyncCallInvoker
// Entry    : 0027de20
// Prototype: undefined ~AsyncCallInvoker(AsyncCallInvoker * this)
// Body     : 0027de20 - 0027de46


/* ~AsyncCallInvoker() */

void __thiscall
juce::MessageManager::callAsync<std::function<void()>const&>(std::function<void()>const&)::
AsyncCallInvoker::~AsyncCallInvoker(AsyncCallInvoker *this)

{
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* try { // try from 0027de31 to 0027de3a has its CatchHandler @ 0027de47 */
    (**(code **)(this + 0x20))(this + 0x10,this + 0x10,3);
  }
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}



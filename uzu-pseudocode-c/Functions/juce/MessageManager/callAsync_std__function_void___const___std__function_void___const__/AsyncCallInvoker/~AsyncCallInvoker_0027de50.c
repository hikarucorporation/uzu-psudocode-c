// Function : ~AsyncCallInvoker
// Namespace: juce:MessageManager:callAsync_std__function_void___const___std__function_void___const__:AsyncCallInvoker
// Entry    : 0027de50
// Prototype: undefined ~AsyncCallInvoker(AsyncCallInvoker * this)
// Body     : 0027de50 - 0027de73


/* ~AsyncCallInvoker() */

void __thiscall
juce::MessageManager::callAsync<std::function<void()>const&>(std::function<void()>const&)::
AsyncCallInvoker::~AsyncCallInvoker(AsyncCallInvoker *this)

{
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* try { // try from 0027de61 to 0027de6a has its CatchHandler @ 0027de74 */
    (**(code **)(this + 0x20))(this + 0x10,this + 0x10,3);
  }
  operator_delete(this);
  return;
}



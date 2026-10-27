// Function : ~Callable
// Namespace: juce:ModalCallbackFunction:create_std__function_void_int_____std__function_void_int____:Callable
// Entry    : 002814f0
// Prototype: undefined8 ~Callable(Callable * this)
// Body     : 002814f0 - 00281513


/* ~Callable() */

undefined8 __thiscall
juce::ModalCallbackFunction::create<std::function<void(int)>&>(std::function<void(int)>&)::Callable
::~Callable(Callable *this)

{
  undefined8 in_RAX;
  
  *(undefined ***)this = &PTR__Callable_007112f0;
  if (*(code **)(this + 0x18) != (code *)0x0) {
                    /* try { // try from 00281508 to 00281511 has its CatchHandler @ 00281514 */
    (**(code **)(this + 0x18))(this + 8,this + 8,3);
  }
  return in_RAX;
}



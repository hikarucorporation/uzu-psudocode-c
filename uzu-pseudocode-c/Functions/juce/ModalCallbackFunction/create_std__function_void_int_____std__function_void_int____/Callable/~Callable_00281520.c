// Function : ~Callable
// Namespace: juce:ModalCallbackFunction:create_std__function_void_int_____std__function_void_int____:Callable
// Entry    : 00281520
// Prototype: undefined ~Callable(Callable * this)
// Body     : 00281520 - 0028154d


/* ~Callable() */

void __thiscall
juce::ModalCallbackFunction::create<std::function<void(int)>&>(std::function<void(int)>&)::Callable
::~Callable(Callable *this)

{
  *(undefined ***)this = &PTR__Callable_007112f0;
  if (*(code **)(this + 0x18) != (code *)0x0) {
                    /* try { // try from 0028153b to 00281544 has its CatchHandler @ 0028154e */
    (**(code **)(this + 0x18))(this + 8,this + 8,3);
  }
  operator_delete(this);
  return;
}



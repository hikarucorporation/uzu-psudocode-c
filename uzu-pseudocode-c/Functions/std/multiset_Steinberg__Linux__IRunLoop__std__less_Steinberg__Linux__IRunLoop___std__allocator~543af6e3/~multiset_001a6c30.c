// Function : ~multiset
// Namespace: std:multiset_Steinberg__Linux__IRunLoop__std__less_Steinberg__Linux__IRunLoop___std__allocator~543af6e3
// Entry    : 001a6c30
// Prototype: undefined8 ~multiset(multiset<Steinberg::Linux::IRunLoop*,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>> * this)
// Body     : 001a6c30 - 001a6c3b


/* std::multiset<Steinberg::Linux::IRunLoop*, std::less<Steinberg::Linux::IRunLoop*>,
   std::allocator<Steinberg::Linux::IRunLoop*> >::~multiset() */

undefined8 __thiscall
std::
multiset<Steinberg::Linux::IRunLoop*,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>>
::~multiset(multiset<Steinberg::Linux::IRunLoop*,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>>
            *this)

{
  undefined8 in_RAX;
  
                    /* try { // try from 001a6c35 to 001a6c39 has its CatchHandler @ 001a6c3c */
  _Rb_tree<Steinberg::Linux::IRunLoop*,Steinberg::Linux::IRunLoop*,std::_Identity<Steinberg::Linux::IRunLoop*>,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>>
  ::_M_erase((_Rb_tree<Steinberg::Linux::IRunLoop*,Steinberg::Linux::IRunLoop*,std::_Identity<Steinberg::Linux::IRunLoop*>,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>>
              *)this,*(void **)(this + 0x10));
  return in_RAX;
}



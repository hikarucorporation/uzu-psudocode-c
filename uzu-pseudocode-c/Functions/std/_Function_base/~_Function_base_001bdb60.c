// Function : ~_Function_base
// Namespace: std:_Function_base
// Entry    : 001bdb60
// Prototype: undefined8 ~_Function_base(_Function_base * this)
// Body     : 001bdb60 - 001bdb75


/* std::_Function_base::~_Function_base() */

undefined8 __thiscall std::_Function_base::~_Function_base(_Function_base *this)

{
  undefined8 in_RAX;
  
  if (*(code **)(this + 0x10) != (code *)0x0) {
                    /* try { // try from 001bdb6a to 001bdb73 has its CatchHandler @ 001bdb76 */
    (**(code **)(this + 0x10))(this,this,3);
  }
  return in_RAX;
}



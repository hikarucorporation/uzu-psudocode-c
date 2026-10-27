// Function : operator.cast.to.bool
// Namespace: juce:var
// Entry    : 004acce0
// Prototype: bool operator.cast.to.bool(var * this)
// Body     : 004acce0 - 004accec


/* juce::var::operator bool() const */

bool __thiscall juce::var::operator_cast_to_bool(var *this)

{
  undefined1 uVar1;
  
                    /* try { // try from 004acce8 to 004accea has its CatchHandler @ 004acced */
  uVar1 = (**(code **)(*(long *)this + 0x30))(this + 8);
  return (bool)uVar1;
}



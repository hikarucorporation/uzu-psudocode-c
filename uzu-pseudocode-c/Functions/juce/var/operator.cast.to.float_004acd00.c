// Function : operator.cast.to.float
// Namespace: juce:var
// Entry    : 004acd00
// Prototype: undefined8 operator.cast.to.float(var * this)
// Body     : 004acd00 - 004acd10


/* juce::var::operator float() const */

undefined8 __thiscall juce::var::operator_cast_to_float(var *this)

{
  undefined8 in_RAX;
  
                    /* try { // try from 004acd08 to 004acd0a has its CatchHandler @ 004acd11 */
  (**(code **)(*(long *)this + 0x20))(this + 8);
  return in_RAX;
}



// Function : ~var
// Namespace: juce:var
// Entry    : 00487290
// Prototype: undefined8 ~var(var * this)
// Body     : 00487290 - 0048729c


/* juce::var::~var() */

undefined8 __thiscall juce::var::~var(var *this)

{
  undefined8 in_RAX;
  
                    /* try { // try from 00487298 to 0048729a has its CatchHandler @ 0048729d */
  (**(code **)(*(long *)this + 0x58))(this + 8);
  return in_RAX;
}



// Function : writeInt64
// Namespace: juce:OutputStream
// Entry    : 0048cdb0
// Prototype: undefined writeInt64(OutputStream * this, undefined8 param_1)
// Body     : 0048cdb0 - 0048cdc4


/* juce::OutputStream::writeInt64(long long) */

void __thiscall juce::OutputStream::writeInt64(OutputStream *this,undefined8 param_1)

{
  undefined8 local_8;
  
  local_8 = param_1;
  (**(code **)(*(long *)this + 0x28))(this,&local_8,8);
  return;
}



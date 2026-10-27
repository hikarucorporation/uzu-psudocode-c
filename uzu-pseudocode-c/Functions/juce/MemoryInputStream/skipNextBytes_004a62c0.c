// Function : skipNextBytes
// Namespace: juce:MemoryInputStream
// Entry    : 004a62c0
// Prototype: undefined skipNextBytes(MemoryInputStream * this, long param_1)
// Body     : 004a62c0 - 004a62f4


/* juce::MemoryInputStream::skipNextBytes(long long) */

void __thiscall juce::MemoryInputStream::skipNextBytes(MemoryInputStream *this,long param_1)

{
  long lVar1;
  
  if (param_1 < 1) {
    return;
  }
  lVar1 = (**(code **)(*(long *)this + 0xb0))();
                    /* WARNING: Could not recover jumptable at 0x004a62f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb8))(this,param_1 + lVar1);
  return;
}



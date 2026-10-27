// Function : writeInt64BigEndian
// Namespace: juce:OutputStream
// Entry    : 0048cdd0
// Prototype: undefined writeInt64BigEndian(OutputStream * this, undefined8 param_1)
// Body     : 0048cdd0 - 0048cdfb


/* juce::OutputStream::writeInt64BigEndian(long long) */

void __thiscall juce::OutputStream::writeInt64BigEndian(OutputStream *this,undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 local_8;
  
  uVar1 = (uint)param_1;
  uVar2 = (uint)((ulong)param_1 >> 0x20);
  local_8 = CONCAT44(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                     ,uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18);
  (**(code **)(*(long *)this + 0x28))(this,&local_8,8);
  return;
}



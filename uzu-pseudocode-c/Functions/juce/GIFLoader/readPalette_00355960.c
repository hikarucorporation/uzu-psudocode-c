// Function : readPalette
// Namespace: juce:GIFLoader
// Entry    : 00355960
// Prototype: undefined readPalette(GIFLoader * this, uint param_1)
// Body     : 00355960 - 003559cf


/* juce::GIFLoader::readPalette(int) */

void __thiscall juce::GIFLoader::readPalette(GIFLoader *this,uint param_1)

{
  undefined8 in_RAX;
  ulong uVar1;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_28 = in_RAX;
  do {
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),(long)&uStack_28 + 4,3);
    *(ushort *)(this + uVar1 * 4 + 0x114) = uStack_28._5_2_ << 8 | uStack_28._5_2_ >> 8;
    this[uVar1 * 4 + 0x116] = uStack_28._4_1_;
    this[uVar1 * 4 + 0x117] = (GIFLoader)0xff;
    uVar1 = uVar1 + 1;
  } while (param_1 != uVar1);
  return;
}



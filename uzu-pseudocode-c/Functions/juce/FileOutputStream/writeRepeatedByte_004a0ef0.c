// Function : writeRepeatedByte
// Namespace: juce:FileOutputStream
// Entry    : 004a0ef0
// Prototype: bool writeRepeatedByte(FileOutputStream * this, byte param_1, ulong param_2)
// Body     : 004a0ef0 - 004a0f84


/* juce::FileOutputStream::writeRepeatedByte(unsigned char, unsigned long) */

bool __thiscall
juce::FileOutputStream::writeRepeatedByte(FileOutputStream *this,byte param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  
  if (*(long *)(this + 0x38) + param_2 < *(ulong *)(this + 0x30)) {
    memset((void *)(*(long *)(this + 0x38) + *(long *)(this + 0x40)),(uint)param_1,param_2);
    *(ulong *)(this + 0x38) = *(long *)(this + 0x38) + param_2;
    *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + param_2;
    bVar3 = true;
  }
  else if (param_2 == 0) {
    bVar3 = true;
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x30))(this,(int)(char)param_1);
    if (cVar1 == '\0') {
      bVar3 = false;
    }
    else {
      uVar2 = 0;
      do {
        if (param_2 - 1 == uVar2) {
          uVar2 = param_2;
          break;
        }
        cVar1 = (**(code **)(*(long *)this + 0x30))(this,(int)(char)param_1);
        uVar2 = uVar2 + 1;
      } while (cVar1 != '\0');
      bVar3 = param_2 <= uVar2;
    }
  }
  return bVar3;
}



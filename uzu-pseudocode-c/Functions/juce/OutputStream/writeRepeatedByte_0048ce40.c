// Function : writeRepeatedByte
// Namespace: juce:OutputStream
// Entry    : 0048ce40
// Prototype: bool writeRepeatedByte(OutputStream * this, char param_1, ulong param_2)
// Body     : 0048ce40 - 0048cea4


/* juce::OutputStream::writeRepeatedByte(unsigned char, unsigned long) */

bool __thiscall juce::OutputStream::writeRepeatedByte(OutputStream *this,char param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    bVar3 = true;
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x30))(this,(int)param_1);
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
        cVar1 = (**(code **)(*(long *)this + 0x30))(this,(int)param_1);
        uVar2 = uVar2 + 1;
      } while (cVar1 != '\0');
      bVar3 = param_2 <= uVar2;
    }
  }
  return bVar3;
}



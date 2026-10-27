// Function : String
// Namespace: juce:String
// Entry    : 004a7190
// Prototype: undefined String(String * this, uint param_1)
// Body     : 004a7190 - 004a7234


/* juce::String::String(int) */

void __thiscall juce::String::String(String *this,uint param_1)

{
  undefined8 uVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  byte local_1b [11];
  
  if ((int)param_1 < 0) {
    pbVar3 = local_1b + 1;
    uVar2 = -param_1;
    do {
      *pbVar3 = (char)uVar2 + (char)(uVar2 / 10) * -10 | 0x30;
      pbVar3 = pbVar3 + -1;
      bVar4 = 9 < uVar2;
      uVar2 = uVar2 / 10;
    } while (bVar4);
    *pbVar3 = 0x2d;
  }
  else {
    pbVar3 = local_1b + 2;
    do {
      pbVar3[-1] = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
      pbVar3 = pbVar3 + -1;
      bVar4 = 9 < param_1;
      param_1 = param_1 / 10;
    } while (bVar4);
  }
  local_1b[2] = 0;
  uVar1 = StringHolderUtils::createFromFixedLength(pbVar3,(long)(local_1b + ~(ulong)pbVar3 + 3));
  *(undefined8 *)this = uVar1;
  return;
}



// Function : int64ToString
// Namespace: juce:var:VariantType
// Entry    : 004ade10
// Prototype: VariantType * int64ToString(VariantType * this, ulong * param_1)
// Body     : 004ade10 - 004adec9


/* juce::var::VariantType::int64ToString(juce::var::ValueUnion const&) */

VariantType * __thiscall juce::var::VariantType::int64ToString(VariantType *this,ulong *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  byte *pbVar3;
  bool bVar4;
  byte local_1b [11];
  
  uVar2 = *param_1;
  if ((long)uVar2 < 0) {
    pbVar3 = local_1b + 1;
    uVar2 = -uVar2;
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
      pbVar3[-1] = (char)uVar2 + (char)(uVar2 / 10) * -10 | 0x30;
      pbVar3 = pbVar3 + -1;
      bVar4 = 9 < uVar2;
      uVar2 = uVar2 / 10;
    } while (bVar4);
  }
  local_1b[2] = 0;
  uVar1 = StringHolderUtils::createFromFixedLength(pbVar3,(long)(local_1b + ~(ulong)pbVar3 + 3));
  *(undefined8 *)this = uVar1;
  return this;
}



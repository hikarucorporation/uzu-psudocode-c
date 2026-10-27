// Function : stringToBool
// Namespace: juce:var:VariantType
// Entry    : 00487e40
// Prototype: ulong stringToBool(long * param_1)
// Body     : 00487e40 - 00487f28


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::stringToBool(juce::var::ValueUnion const&) */

ulong __cdecl juce::var::VariantType::stringToBool(long *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  undefined8 unaff_RBP;
  undefined7 uVar6;
  ulong uVar5;
  byte *local_28;
  byte *local_20;
  
  lVar4 = strtol((char *)*param_1,(char **)0x0,10);
  uVar6 = (undefined7)((ulong)unaff_RBP >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if ((int)lVar4 == 0) {
                    /* try { // try from 00487e6c to 00487e76 has its CatchHandler @ 00487f5a */
    juce::String::trim((long *)&local_28,param_1);
    pbVar2 = local_28;
    uVar3 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (local_28,&DAT_005e640c);
    if (uVar3 == 0) {
      uVar5 = CONCAT71(uVar6,1);
      local_28 = pbVar2 + -0x10;
      if (local_28 == (byte *)&emptyString) goto LAB_00487e61;
    }
    else {
                    /* try { // try from 00487e8e to 00487e9a has its CatchHandler @ 00487f29 */
      juce::String::trim((long *)&local_20,param_1);
      uVar3 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (local_20,&DAT_0065485b);
      uVar5 = CONCAT71(uVar6,uVar3 == 0);
      local_20 = local_20 + -0x10;
      if (local_20 != (byte *)&emptyString) {
        LOCK();
        iVar1 = *(int *)local_20;
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(local_20);
        }
      }
      local_28 = local_28 + -0x10;
      if (local_28 == (byte *)&emptyString) goto LAB_00487e61;
    }
    LOCK();
    iVar1 = *(int *)local_28;
    *(int *)local_28 = *(int *)local_28 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(local_28);
    }
  }
LAB_00487e61:
  return uVar5 & 0xffffffff;
}



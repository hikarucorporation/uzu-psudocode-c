// Function : stringEquals
// Namespace: juce:var:VariantType
// Entry    : 00487fc0
// Prototype: ulong stringEquals(undefined8 * param_1, undefined8 param_2, long param_3)
// Body     : 00487fc0 - 0048802b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::stringEquals(juce::var::ValueUnion const&, juce::var::ValueUnion const&,
   juce::var::VariantType const&) */

ulong __cdecl
juce::var::VariantType::stringEquals(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte *in_RAX;
  undefined8 unaff_RBP;
  undefined7 uVar5;
  ulong uVar4;
  byte *local_18;
  
                    /* try { // try from 00487fc6 to 00487fcb has its CatchHandler @ 0048802c */
  local_18 = in_RAX;
  (**(code **)(param_3 + 0x28))(&local_18);
  pbVar2 = (byte *)*param_1;
  uVar5 = (undefined7)((ulong)unaff_RBP >> 8);
  if (local_18 == pbVar2) {
    uVar4 = CONCAT71(uVar5,1);
    local_18 = pbVar2 + -0x10;
    if (local_18 == (byte *)&emptyString) goto LAB_00488023;
  }
  else {
    uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (local_18,pbVar2);
    uVar4 = CONCAT71(uVar5,uVar3 == 0);
    local_18 = local_18 + -0x10;
    if (local_18 == (byte *)&emptyString) goto LAB_00488023;
  }
  LOCK();
  iVar1 = *(int *)local_18;
  *(int *)local_18 = *(int *)local_18 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(local_18);
  }
LAB_00488023:
  return uVar4 & 0xffffffff;
}



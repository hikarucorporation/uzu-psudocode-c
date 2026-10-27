// Function : valueChanged
// Namespace: juce:Label
// Entry    : 002385f0
// Prototype: undefined valueChanged(Label * param_1)
// Body     : 002385f0 - 002386f9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Label::valueChanged(juce::Value&) */

void __cdecl juce::Label::valueChanged(Label *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  byte *local_38;
  long local_30;
  undefined1 local_28 [8];
  
  (**(code **)(**(long **)(param_1 + 0x178) + 0x10))(&local_30);
                    /* try { // try from 00238619 to 00238621 has its CatchHandler @ 0023874c */
  (**(code **)(local_30 + 0x28))(&local_38,local_28);
                    /* try { // try from 00238627 to 0023862c has its CatchHandler @ 00238744 */
  (**(code **)(local_30 + 0x58))(local_28);
  pbVar3 = local_38;
  if (*(byte **)(param_1 + 0x1a8) == local_38) {
    bVar4 = false;
  }
  else {
    uVar2 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (*(byte **)(param_1 + 0x1a8),local_38);
    bVar4 = uVar2 != 0;
  }
  if (pbVar3 != &DAT_0061ac58) {
    pbVar3 = pbVar3 + -0x10;
    LOCK();
    iVar1 = *(int *)pbVar3;
    *(int *)pbVar3 = *(int *)pbVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar3);
    }
  }
  if (bVar4) {
    (**(code **)(**(long **)(param_1 + 0x178) + 0x10))(&local_30);
                    /* try { // try from 0023869d to 002386a5 has its CatchHandler @ 0023872c */
    (**(code **)(local_30 + 0x28))(&local_38,local_28);
                    /* try { // try from 002386ab to 002386b0 has its CatchHandler @ 00238724 */
    (**(code **)(local_30 + 0x58))(local_28);
                    /* try { // try from 002386b1 to 002386c0 has its CatchHandler @ 002386fa */
    setText(param_1,(long *)&local_38,1);
    local_38 = local_38 + -0x10;
    if (local_38 != (byte *)&emptyString) {
      LOCK();
      iVar1 = *(int *)local_38;
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(local_38);
      }
    }
  }
  return;
}



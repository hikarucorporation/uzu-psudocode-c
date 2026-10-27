// Function : withStyle
// Namespace: juce:FontOptions
// Entry    : 00304720
// Prototype: undefined withStyle(FontOptions * param_1, long * param_2, long * param_3)
// Body     : 00304720 - 0030480a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FontOptions::withStyle(juce::String) const */

void __cdecl juce::FontOptions::withStyle(FontOptions *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined6 uStack_28;
  undefined2 uStack_22;
  undefined6 uStack_20;
  undefined8 uStack_1a;
  
  if (param_2[2] != 0) {
    FontOptions(param_1,param_2);
    return;
  }
  FontOptions((FontOptions *)&local_78,param_2);
  lVar2 = *param_3;
  piVar3 = (int *)(lVar2 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    lVar2 = *param_3;
  }
  LOCK();
  UNLOCK();
  piVar3 = (int *)(lStack_70 + -0x10);
  lStack_70 = lVar2;
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  *(undefined8 *)param_1 = local_78;
  *(long *)(param_1 + 8) = lStack_70;
  *(undefined8 *)(param_1 + 0x10) = local_68;
  *(undefined8 *)(param_1 + 0x18) = local_60;
  *(undefined8 *)(param_1 + 0x20) = uStack_58;
  *(undefined8 *)(param_1 + 0x28) = local_50;
  *(undefined8 *)(param_1 + 0x30) = local_48;
  *(undefined8 *)(param_1 + 0x38) = uStack_40;
  *(undefined8 *)(param_1 + 0x40) = local_38;
  *(ulong *)(param_1 + 0x56) = CONCAT62(uStack_20,uStack_22);
  *(undefined8 *)(param_1 + 0x5e) = uStack_1a;
  *(undefined8 *)(param_1 + 0x48) = local_30;
  *(ulong *)(param_1 + 0x50) = CONCAT26(uStack_22,uStack_28);
  return;
}



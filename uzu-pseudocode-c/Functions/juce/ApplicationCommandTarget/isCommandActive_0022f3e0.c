// Function : isCommandActive
// Namespace: juce:ApplicationCommandTarget
// Entry    : 0022f3e0
// Prototype: bool isCommandActive(ApplicationCommandTarget * this, undefined4 param_1)
// Body     : 0022f3e0 - 0022f4a2


/* juce::ApplicationCommandTarget::isCommandActive(int) */

bool __thiscall
juce::ApplicationCommandTarget::isCommandActive(ApplicationCommandTarget *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  void *local_28;
  ulong uStack_20;
  uint local_18;
  
  local_40 = &DAT_0061ac58;
  local_38 = &DAT_0061ac58;
  local_30 = &DAT_0061ac58;
  local_28 = (void *)0x0;
  uStack_20 = 0;
  local_18 = 1;
                    /* try { // try from 0022f412 to 0022f417 has its CatchHandler @ 0022f4a3 */
  local_48[0] = param_1;
  (**(code **)(*(long *)this + 0x20))(this,param_1,local_48);
  uVar2 = local_18;
  uStack_20 = uStack_20 & 0xffffffff;
  free(local_28);
  piVar3 = (int *)(local_30 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  piVar3 = (int *)(local_38 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  piVar3 = (int *)(local_40 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  return (uVar2 & 1) == 0;
}



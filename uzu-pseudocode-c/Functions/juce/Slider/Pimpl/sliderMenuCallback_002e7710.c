// Function : sliderMenuCallback
// Namespace: juce:Slider:Pimpl
// Entry    : 002e7710
// Prototype: undefined sliderMenuCallback(undefined4 param_1, long param_2)
// Body     : 002e7710 - 002e77e7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Slider::Pimpl::sliderMenuCallback(int, juce::Slider*) */

void __cdecl juce::Slider::Pimpl::sliderMenuCallback(undefined4 param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return;
  }
  switch(param_1) {
  case 1:
    pbVar1 = (byte *)(*(long *)(param_2 + 0x1a0) + 0x232);
    *pbVar1 = *pbVar1 ^ 1;
    return;
  case 2:
    lVar3 = *(long *)(param_2 + 0x1a0);
    if (*(int *)(lVar3 + 0x20) == 4) {
      return;
    }
    *(undefined4 *)(lVar3 + 0x20) = 4;
    break;
  case 3:
    lVar3 = *(long *)(param_2 + 0x1a0);
    if (*(int *)(lVar3 + 0x20) == 5) {
      return;
    }
    *(undefined4 *)(lVar3 + 0x20) = 5;
    break;
  case 4:
    lVar3 = *(long *)(param_2 + 0x1a0);
    if (*(int *)(lVar3 + 0x20) == 6) {
      return;
    }
    *(undefined4 *)(lVar3 + 0x20) = 6;
    break;
  case 5:
    lVar3 = *(long *)(param_2 + 0x1a0);
    if (*(int *)(lVar3 + 0x20) == 7) {
      return;
    }
    *(undefined4 *)(lVar3 + 0x20) = 7;
    break;
  default:
    goto switchD_002e7734_default;
  }
  Component::internalRepaintUnchecked
            (*(long *)(lVar3 + 0x18),0,*(ulong *)(*(long *)(lVar3 + 0x18) + 0x40),'\x01');
  (**(code **)(**(long **)(lVar3 + 0x18) + 200))();
  plVar2 = *(long **)(*(long *)(lVar3 + 0x18) + 0xe0);
  *(undefined8 *)(*(long *)(lVar3 + 0x18) + 0xe0) = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002e77e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
switchD_002e7734_default:
  return;
}



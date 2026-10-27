// Function : getRange
// Namespace: juce:ScrollBar:createAccessibilityHandler__:ValueInterface
// Entry    : 00265ef0
// Prototype: undefined getRange(undefined8 * param_1, long param_2)
// Body     : 00265ef0 - 00265f32


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* getRange() const */

void __cdecl
juce::ScrollBar::createAccessibilityHandler()::ValueInterface::getRange
          (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  lVar2 = *(long *)(param_2 + 8);
  dVar3 = *(double *)(lVar2 + 0x128);
  dVar4 = *(double *)(lVar2 + 0x130);
  if ((dVar3 == dVar4) && (!NAN(dVar3) && !NAN(dVar4))) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x148);
  *(undefined1 *)param_1 = 1;
  param_1[1] = dVar3;
  param_1[2] = dVar4;
  param_1[3] = uVar1;
  return;
}



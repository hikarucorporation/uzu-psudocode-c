// Function : getTransform
// Namespace: juce:Component
// Entry    : 002d71d0
// Prototype: undefined getTransform(undefined8 * param_1, long param_2)
// Body     : 002d71d0 - 002d71fe


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::getTransform() const */

void __cdecl juce::Component::getTransform(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x50);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (*) [16])param_1 = ZEXT416(DAT_005d9038);
    param_1[2] = 0x3f800000;
    return;
  }
  param_1[2] = puVar1[2];
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  return;
}



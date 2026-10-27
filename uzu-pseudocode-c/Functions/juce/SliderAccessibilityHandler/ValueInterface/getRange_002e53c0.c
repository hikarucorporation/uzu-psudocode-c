// Function : getRange
// Namespace: juce:SliderAccessibilityHandler:ValueInterface
// Entry    : 002e53c0
// Prototype: undefined getRange(undefined1 * param_1, long param_2)
// Body     : 002e53c0 - 002e5447


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SliderAccessibilityHandler::ValueInterface::getRange() const */

void __cdecl
juce::SliderAccessibilityHandler::ValueInterface::getRange(undefined1 *param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x1a0);
  dVar2 = *(double *)(lVar1 + 0xf8);
  dVar3 = *(double *)(lVar1 + 0x100);
  dVar4 = *(double *)(lVar1 + 0x108);
  dVar5 = (double)(_DAT_005d91b0 & (ulong)dVar4);
  if (dVar5 == DAT_005d94e0) {
    if ((dVar4 != 0.0) || (NAN(dVar4))) goto LAB_002e543a;
  }
  else if ((DAT_005db368 < dVar5) && (DAT_005db370 * dVar5 < dVar5)) goto LAB_002e543a;
  dVar4 = dVar3;
  if (dVar3 <= dVar2) {
    dVar4 = dVar2;
  }
  dVar4 = (dVar4 - dVar2) * DAT_00651f48;
LAB_002e543a:
  *param_1 = 1;
  *(double *)(param_1 + 8) = dVar2;
  *(double *)(param_1 + 0x10) = dVar3;
  *(double *)(param_1 + 0x18) = dVar4;
  return;
}



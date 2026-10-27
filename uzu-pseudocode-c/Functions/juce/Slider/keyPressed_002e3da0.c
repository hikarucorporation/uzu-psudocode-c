// Function : keyPressed
// Namespace: juce:Slider
// Entry    : 002e3da0
// Prototype: undefined8 keyPressed(Slider * this, int * param_1)
// Body     : 002e3da0 - 002e3fd4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::keyPressed(juce::KeyPress const&) */

undefined8 __thiscall juce::Slider::keyPressed(Slider *this,int *param_1)

{
  int iVar1;
  Pimpl *this_00;
  long lVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  long local_48;
  undefined1 local_40 [16];
  double local_30;
  double local_28;
  undefined8 uStack_20;
  
  if ((*(byte *)(param_1 + 1) & 7) != 0) {
    return 0;
  }
  this_00 = *(Pimpl **)(this + 0x1a0);
  iVar1 = *param_1;
  if (iVar1 + 0xefffffaeU < 2) {
    lVar2 = Component::getAccessibilityHandler(*(Component **)(this_00 + 0x18));
    if ((lVar2 == 0) || (*(long **)(lVar2 + 0x50) == (long *)0x0)) {
      lVar2 = *(long *)(*(long *)(this_00 + 0x18) + 0x1a0);
      local_30 = *(double *)(lVar2 + 0x108);
      uStack_20 = 0;
      dVar4 = (double)(_DAT_005d91b0 & (ulong)local_30);
      if (dVar4 == DAT_005d94e0) {
        if ((local_30 == 0.0) && (!NAN(local_30))) goto LAB_002e3f0b;
      }
      else if ((dVar4 <= DAT_005db368) || (dVar4 <= DAT_005db370 * dVar4)) {
LAB_002e3f0b:
        dVar4 = *(double *)(lVar2 + 0xf8);
        uStack_20 = 0;
        dVar5 = *(double *)(lVar2 + 0x100);
        if (*(double *)(lVar2 + 0x100) <= dVar4) {
          dVar5 = dVar4;
        }
        local_30 = (dVar5 - dVar4) * DAT_00651f48;
      }
    }
    else {
      (**(code **)(**(long **)(lVar2 + 0x50) + 0x38))(&local_48);
      uStack_20 = 0;
    }
  }
  else {
    if ((iVar1 != 0x10000051) && (iVar1 != 0x10000054)) {
      return 0;
    }
    lVar2 = Component::getAccessibilityHandler(*(Component **)(this_00 + 0x18));
    if ((lVar2 == 0) || (*(long **)(lVar2 + 0x50) == (long *)0x0)) {
      lVar2 = *(long *)(*(long *)(this_00 + 0x18) + 0x1a0);
      local_30 = *(double *)(lVar2 + 0x108);
      dVar4 = (double)(_DAT_005d91b0 & (ulong)local_30);
      if (dVar4 == DAT_005d94e0) {
        if ((local_30 == 0.0) && (!NAN(local_30))) goto LAB_002e3ed5;
      }
      else if ((dVar4 <= DAT_005db368) || (dVar4 <= DAT_005db370 * dVar4)) {
LAB_002e3ed5:
        dVar4 = *(double *)(lVar2 + 0xf8);
        dVar5 = *(double *)(lVar2 + 0x100);
        if (*(double *)(lVar2 + 0x100) <= dVar4) {
          dVar5 = dVar4;
        }
        local_30 = (dVar5 - dVar4) * DAT_00651f48;
      }
    }
    else {
      (**(code **)(**(long **)(lVar2 + 0x50) + 0x38))(&local_48);
    }
    local_30 = (double)((ulong)local_30 ^ _DAT_00652d10);
    uStack_20 = _UNK_00652d18;
  }
  dVar4 = (double)(_DAT_005d91b0 & (ulong)local_30);
  if (dVar4 == DAT_005d94e0) {
    if ((local_30 != 0.0) || (NAN(local_30))) {
LAB_002e3f7c:
      local_28 = local_30;
      (**(code **)(**(long **)(this_00 + 0x50) + 0x10))(&local_48);
                    /* try { // try from 002e3f9b to 002e3fa6 has its CatchHandler @ 002e3fdd */
      dVar4 = (double)(**(code **)(local_48 + 0x20))(local_40);
                    /* try { // try from 002e3fac to 002e3fb1 has its CatchHandler @ 002e3fd5 */
      (**(code **)(local_48 + 0x58))(local_40);
      uVar3 = Pimpl::setValue(local_28 + dVar4,this_00,2);
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  else if ((DAT_005db368 < dVar4) && (DAT_005db370 * dVar4 < dVar4)) goto LAB_002e3f7c;
  return 0;
}



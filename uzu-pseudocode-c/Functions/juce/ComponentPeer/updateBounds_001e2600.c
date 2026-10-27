// Function : updateBounds
// Namespace: juce:ComponentPeer
// Entry    : 001e2600
// Prototype: undefined updateBounds(ComponentPeer * this)
// Body     : 001e2600 - 001e274c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ComponentPeer::updateBounds() */

void __thiscall juce::ComponentPeer::updateBounds(ComponentPeer *this)

{
  long *plVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_38 [16];
  ulong local_28;
  ulong uStack_20;
  
  plVar1 = *(long **)(this + 8);
  if ((float *)plVar1[10] == (float *)0x0) {
    local_38 = *(undefined1 (*) [16])(plVar1 + 7);
  }
  else {
    local_38 = Rectangle<int>::transformedBy((Rectangle<int> *)(plVar1 + 7),(float *)plVar1[10]);
  }
                    /* try { // try from 001e2641 to 001e2649 has its CatchHandler @ 001e274d */
  fVar4 = (float)(**(code **)(*plVar1 + 0x88))(plVar1);
  dVar3 = (double)(local_38._0_8_ >> 0x20);
  fVar6 = (float)(_DAT_005d91c0 & (uint)fVar4);
  iVar8 = local_38._4_4_;
  iVar9 = local_38._8_4_;
  iVar10 = local_38._12_4_;
  if (fVar6 == DAT_005d94c8) {
    if ((fVar4 != DAT_005d9038) || (NAN(fVar4) || NAN(DAT_005d9038))) {
LAB_001e26ad:
      local_38._0_8_ = (double)((float)local_38._0_4_ * fVar4) + _DAT_005d9a90;
      local_38._8_8_ = (double)((float)iVar9 * fVar4) + _UNK_005d9a98;
      dVar3 = (double)((float)iVar8 * fVar4) + _DAT_005d9a90;
      dVar5 = (double)((float)iVar10 * fVar4) + _UNK_005d9a98;
      goto LAB_001e271e;
    }
  }
  else {
    fVar7 = (float)((uint)(fVar4 + DAT_005d9054) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar7) {
      fVar2 = DAT_005d9038;
      if (DAT_005d9038 <= fVar6) {
        fVar2 = fVar6;
      }
      if (fVar2 * DAT_005d94d0 < fVar7) goto LAB_001e26ad;
    }
  }
  dVar5 = (double)(local_38._8_8_ >> 0x20);
LAB_001e271e:
  local_28 = local_38._0_8_ & _DAT_005d9aa0 | (long)dVar3 << 0x20;
  uStack_20 = local_38._8_8_ & _UNK_005d9aa8 | (long)dVar5 << 0x20;
  (**(code **)(*(long *)this + 0x40))(this,&local_28,0);
  return;
}



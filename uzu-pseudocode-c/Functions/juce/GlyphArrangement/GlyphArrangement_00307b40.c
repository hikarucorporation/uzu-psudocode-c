// Function : GlyphArrangement
// Namespace: juce:GlyphArrangement
// Entry    : 00307b40
// Prototype: undefined GlyphArrangement(GlyphArrangement * this, long * param_1)
// Body     : 00307b40 - 00307c67


/* juce::GlyphArrangement::GlyphArrangement(juce::GlyphArrangement const&) */

void __thiscall juce::GlyphArrangement::GlyphArrangement(GlyphArrangement *this,long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  bool bVar9;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar1 < 1) {
    iVar4 = 0;
    goto LAB_00307bed;
  }
  plVar8 = (long *)*param_1;
  uVar7 = uVar1 + (uVar1 >> 1) + 8 & 0xfffffff8;
  if ((ulong)uVar7 == 0) {
LAB_00307bd4:
    plVar5 = (long *)0x0;
    *(uint *)(this + 8) = uVar7;
  }
  else {
    if ((int)uVar7 < 1) {
      *(undefined8 *)this = 0;
      goto LAB_00307bd4;
    }
    plVar5 = malloc((ulong)uVar7 << 5);
    *(long **)this = plVar5;
    *(uint *)(this + 8) = uVar7;
  }
  uVar7 = uVar1;
  if ((uVar1 & 1) != 0) {
    lVar6 = *plVar8;
    *plVar5 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)((long)plVar5 + 0x15) = *(undefined8 *)((long)plVar8 + 0x15);
    lVar6 = plVar8[2];
    plVar5[1] = plVar8[1];
    plVar5[2] = lVar6;
    plVar5 = plVar5 + 4;
    plVar8 = plVar8 + 4;
    uVar7 = uVar1 - 1;
  }
  if (uVar1 != 1) {
    uVar7 = uVar7 - 1;
    lVar6 = 0;
    do {
      lVar2 = *(long *)((long)plVar8 + lVar6);
      *(long *)((long)plVar5 + lVar6) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)((long)plVar5 + lVar6 + 0x15) = *(undefined8 *)((long)plVar8 + lVar6 + 0x15);
      uVar3 = *(undefined8 *)((long)plVar8 + lVar6 + 0x10);
      *(undefined8 *)((long)plVar5 + lVar6 + 8) = *(undefined8 *)((long)plVar8 + lVar6 + 8);
      *(undefined8 *)((long)plVar5 + lVar6 + 0x10) = uVar3;
      lVar2 = *(long *)((long)plVar8 + lVar6 + 0x20);
      *(long *)((long)plVar5 + lVar6 + 0x20) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)((long)plVar5 + lVar6 + 0x35) = *(undefined8 *)((long)plVar8 + lVar6 + 0x35);
      uVar3 = *(undefined8 *)((long)plVar8 + lVar6 + 0x30);
      *(undefined8 *)((long)plVar5 + lVar6 + 0x28) = *(undefined8 *)((long)plVar8 + lVar6 + 0x28);
      *(undefined8 *)((long)plVar5 + lVar6 + 0x30) = uVar3;
      lVar6 = lVar6 + 0x40;
      bVar9 = 1 < uVar7;
      uVar7 = uVar7 - 2;
    } while (bVar9);
  }
  iVar4 = *(int *)(this + 0xc);
LAB_00307bed:
  *(uint *)(this + 0xc) = iVar4 + uVar1;
  return;
}



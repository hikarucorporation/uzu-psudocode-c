// Function : setHorizontalScale
// Namespace: juce:Font:SharedFontInternal
// Entry    : 0032b190
// Prototype: undefined setHorizontalScale(undefined4 param_1, SharedFontInternal * this)
// Body     : 0032b190 - 0032b380


/* juce::Font::SharedFontInternal::setHorizontalScale(float) */

void __thiscall
juce::Font::SharedFontInternal::setHorizontalScale(undefined4 param_1,SharedFontInternal *this)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int *piVar15;
  long *plVar16;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined6 uStack_88;
  undefined2 uStack_82;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined8 uStack_7a;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined8 uStack_52;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FontOptions::FontOptions((FontOptions *)&local_d8,(long *)(this + 0x18));
  uVar14 = local_98;
  uVar13 = local_b0;
  uVar12 = uStack_b8;
  uVar11 = local_c0;
  uVar10 = local_c8;
  puVar9 = puStack_d0;
  puVar8 = local_d8;
  local_d8 = &DAT_0061ac58;
  puStack_d0 = &DAT_0061ac58;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_48 = local_a8;
  uStack_40 = uStack_a0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_68 = local_90;
  uStack_60 = (undefined4)uStack_88;
  uStack_5c = (undefined2)((uint6)uStack_88 >> 0x20);
  uStack_5a = uStack_82;
  uStack_58 = (undefined6)(CONCAT26(uStack_7c,CONCAT42(param_1,uStack_82)) >> 0x10);
  uStack_52 = uStack_7a;
  puVar2 = *(undefined1 **)(this + 0x18);
  lVar3 = *(long *)(this + 0x20);
  plVar4 = *(long **)(this + 0x28);
  plVar5 = *(long **)(this + 0x30);
  plVar6 = *(long **)(this + 0x38);
  *(undefined1 **)(this + 0x18) = puVar8;
  *(undefined1 **)(this + 0x20) = puVar9;
  *(undefined8 *)(this + 0x28) = uVar10;
  *(undefined8 *)(this + 0x30) = uVar11;
  *(undefined8 *)(this + 0x38) = uVar12;
  *(undefined8 *)(this + 0x40) = uVar13;
  local_80 = param_1;
  if (plVar5 != plVar6) {
    plVar16 = plVar5;
    do {
      piVar15 = (int *)(*plVar16 + -0x10);
      if (piVar15 != &emptyString) {
        LOCK();
        iVar1 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar15);
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar6);
  }
  if (plVar5 != (long *)0x0) {
    operator_delete(plVar5);
  }
  pvVar7 = *(void **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = local_48;
  *(undefined8 *)(this + 0x50) = uStack_40;
  *(undefined8 *)(this + 0x58) = uVar14;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  *(ulong *)(this + 0x6e) = CONCAT62(uStack_58,uStack_5a);
  *(undefined8 *)(this + 0x76) = uStack_52;
  *(undefined4 *)(this + 0x60) = (undefined4)local_68;
  *(undefined4 *)(this + 100) = local_68._4_4_;
  *(undefined4 *)(this + 0x68) = uStack_60;
  *(uint *)(this + 0x6c) = CONCAT22(uStack_5a,uStack_5c);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  piVar15 = (int *)(lVar3 + -0x10);
  if (piVar15 != &emptyString) {
    LOCK();
    iVar1 = *piVar15;
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar15);
    }
  }
  if (puVar2 != &DAT_0061ac58) {
    piVar15 = (int *)(puVar2 + -0x10);
    LOCK();
    iVar1 = *piVar15;
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar15);
    }
  }
  return;
}



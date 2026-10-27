// Function : setUnderline
// Namespace: juce:Font:SharedFontInternal
// Entry    : 003ca830
// Prototype: undefined setUnderline(SharedFontInternal * this, undefined1 param_1)
// Body     : 003ca830 - 003caa39


/* juce::Font::SharedFontInternal::setUnderline(bool) */

void __thiscall
juce::Font::SharedFontInternal::setUnderline(SharedFontInternal *this,undefined1 param_1)

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
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  undefined4 local_5a;
  undefined2 local_56;
  undefined1 local_54;
  undefined1 local_53;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FontOptions::FontOptions((FontOptions *)&local_b8,(long *)(this + 0x18));
  uVar14 = local_78;
  uVar13 = local_90;
  uVar12 = uStack_98;
  uVar11 = local_a0;
  uVar10 = local_a8;
  puVar9 = puStack_b0;
  puVar8 = local_b8;
  local_b8 = &DAT_0061ac58;
  puStack_b0 = &DAT_0061ac58;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_48 = local_88;
  uStack_40 = uStack_80;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_f0 = (undefined4)uStack_68;
  uStack_ec = (undefined2)((uint6)uStack_68 >> 0x20);
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
  local_53 = param_1;
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
  *(ulong *)(this + 0x6e) = CONCAT62(uStack_60,uStack_62);
  *(ulong *)(this + 0x76) = CONCAT17(param_1,CONCAT16(local_54,CONCAT24(local_56,local_5a)));
  local_f8 = (undefined4)local_70;
  uStack_f4 = (undefined4)((ulong)local_70 >> 0x20);
  *(undefined4 *)(this + 0x60) = local_f8;
  *(undefined4 *)(this + 100) = uStack_f4;
  *(undefined4 *)(this + 0x68) = uStack_f0;
  *(uint *)(this + 0x6c) = CONCAT22(uStack_62,uStack_ec);
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



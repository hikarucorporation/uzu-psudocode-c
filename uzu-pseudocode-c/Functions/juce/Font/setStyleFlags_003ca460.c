// Function : setStyleFlags
// Namespace: juce:Font
// Entry    : 003ca460
// Prototype: undefined setStyleFlags(Font * this, uint param_1)
// Body     : 003ca460 - 003ca7e1


/* juce::Font::setStyleFlags(int) */

void __thiscall juce::Font::setStyleFlags(Font *this,uint param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  Font *pFVar7;
  byte bVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  byte *pbVar19;
  byte *local_a8;
  Font *local_a0;
  long *local_98;
  long lStack_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  undefined8 uStack_3a;
  
  uVar9 = getStyleFlags(this);
  if (uVar9 != param_1) {
    if (1 < *(int *)(*(long *)this + 8)) {
      SharedFontInternal::copy(&local_98,*(long *)this);
      plVar14 = *(long **)this;
      *(long **)this = local_98;
      local_98 = plVar14;
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar3 = plVar14 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
    }
    SharedFontInternal::setTypeface(*(SharedFontInternal **)this,(long *)0x0);
    lVar2 = *(long *)this;
    pcVar11 = &DAT_005e50a9;
    if ((~param_1 & 3) == 0) {
      pcVar11 = "Bold Italic";
    }
    pcVar13 = "Italic";
    if ((param_1 & 2) == 0) {
      pcVar13 = "Regular";
    }
    if ((param_1 & 1) != 0) {
      pcVar13 = pcVar11;
    }
    bVar8 = *pcVar13;
    local_a0 = this;
    if (bVar8 == 0) {
      local_a8 = &DAT_0061ac58;
    }
    else {
      lVar16 = 0;
      pbVar12 = (byte *)pcVar13;
      do {
        pbVar12 = pbVar12 + 1;
        lVar15 = lVar16 + (ulong)(bVar8 >> 7);
        lVar16 = lVar15 + 1;
        bVar8 = *pbVar12;
      } while (bVar8 != 0);
      uVar17 = lVar15 + 5U & 0xfffffffffffffffc;
      puVar10 = operator_new__(uVar17 + 0x17);
      LOCK();
      *puVar10 = 0;
      UNLOCK();
      *(ulong *)(puVar10 + 2) = uVar17;
      local_a8 = (byte *)(puVar10 + 4);
      bVar8 = *pcVar13;
      pbVar12 = local_a8;
      if (bVar8 != 0) {
        do {
          pcVar13 = pcVar13 + 1;
          if ((char)bVar8 < '\0') {
            *pbVar12 = bVar8 >> 6 | 0xc0;
            pbVar12[1] = bVar8 & 0x3f | 0x80;
            pbVar12 = pbVar12 + 1;
          }
          else {
            *pbVar12 = bVar8;
          }
          pbVar12 = pbVar12 + 1;
          bVar8 = *pcVar13;
        } while (bVar8 != 0);
      }
      *pbVar12 = 0;
    }
    pbVar12 = local_a8 + -0x10;
    if (pbVar12 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar12 = *(int *)pbVar12 + 1;
      UNLOCK();
    }
                    /* try { // try from 003ca5c7 to 003ca5dd has its CatchHandler @ 003ca7e2 */
    FontOptions::withStyle((FontOptions *)&local_98,(long *)(lVar2 + 0x18),(long *)&local_a8);
    plVar6 = *(long **)(lVar2 + 0x18);
    lVar16 = *(long *)(lVar2 + 0x20);
    *(long **)(lVar2 + 0x18) = local_98;
    *(long *)(lVar2 + 0x20) = lStack_90;
    plVar14 = *(long **)(lVar2 + 0x28);
    *(long **)(lVar2 + 0x28) = local_88;
    plVar3 = *(long **)(lVar2 + 0x30);
    plVar4 = *(long **)(lVar2 + 0x38);
    *(long **)(lVar2 + 0x30) = local_80;
    *(long **)(lVar2 + 0x38) = plStack_78;
    *(undefined8 *)(lVar2 + 0x40) = local_70;
    local_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    local_70 = 0;
    local_98 = plVar6;
    lStack_90 = lVar16;
    local_88 = plVar14;
    if (plVar3 != plVar4) {
      plVar14 = plVar3;
      do {
        piVar18 = (int *)(*plVar14 + -0x10);
        if (piVar18 != &emptyString) {
          LOCK();
          iVar1 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar18);
          }
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar4);
    }
    if (plVar3 != (long *)0x0) {
      operator_delete(plVar3);
    }
    pvVar5 = *(void **)(lVar2 + 0x48);
    *(undefined8 *)(lVar2 + 0x48) = local_68;
    *(undefined8 *)(lVar2 + 0x50) = uStack_60;
    *(undefined8 *)(lVar2 + 0x58) = local_58;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    plVar3 = plStack_78;
    *(ulong *)(lVar2 + 0x6e) = CONCAT62(uStack_40,uStack_42);
    *(undefined8 *)(lVar2 + 0x76) = uStack_3a;
    *(undefined8 *)(lVar2 + 0x60) = local_50;
    *(ulong *)(lVar2 + 0x68) = CONCAT26(uStack_42,uStack_48);
    pFVar7 = local_a0;
    for (plVar14 = local_80; local_a0 = pFVar7, plVar14 != plVar3; plVar14 = plVar14 + 1) {
      piVar18 = (int *)(*plVar14 + -0x10);
      if (piVar18 != &emptyString) {
        LOCK();
        iVar1 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar18);
        }
      }
      pFVar7 = local_a0;
    }
    if (local_80 != (long *)0x0) {
      operator_delete(local_80);
    }
    if (local_88 != (long *)0x0) {
      LOCK();
      plVar14 = local_88 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)(*local_88 + 8))();
      }
    }
    piVar18 = (int *)(lStack_90 + -0x10);
    if (piVar18 != &emptyString) {
      LOCK();
      iVar1 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar18);
      }
    }
    plVar14 = local_98 + -2;
    if (plVar14 != (long *)&emptyString) {
      LOCK();
      lVar2 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar2 == 0) {
        operator_delete__(plVar14);
      }
    }
    pbVar19 = local_a8 + -0x10;
    if (pbVar19 != (byte *)&emptyString) {
      LOCK();
      iVar1 = *(int *)pbVar19;
      *(int *)pbVar19 = *(int *)pbVar19 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(pbVar19);
      }
    }
    if (pbVar12 != (byte *)&emptyString) {
      LOCK();
      iVar1 = *(int *)pbVar12;
      *(int *)pbVar12 = *(int *)pbVar12 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(pbVar12);
      }
    }
    SharedFontInternal::setUnderline(*(SharedFontInternal **)pFVar7,(char)((param_1 & 4) >> 2));
  }
  return;
}



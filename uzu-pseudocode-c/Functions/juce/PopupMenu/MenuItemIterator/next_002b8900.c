// Function : next
// Namespace: juce:PopupMenu:MenuItemIterator
// Entry    : 002b8900
// Prototype: ulong next(MenuItemIterator * this)
// Body     : 002b8900 - 002b8b7a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::PopupMenu::MenuItemIterator::next() */

ulong __thiscall juce::PopupMenu::MenuItemIterator::next(MenuItemIterator *this)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  undefined7 uVar10;
  int iVar12;
  uint uVar11;
  
  iVar12 = *(int *)(this + 0x14);
  if ((long)iVar12 == 0) {
LAB_002b8930:
    plVar9 = (long *)0x0;
  }
  else {
    if (*(int *)(this + 0x24) < 1) {
      plVar9 = (long *)0x0;
      if (_DAT_0000000c == 0) goto LAB_002b8933;
    }
    else {
      plVar9 = *(long **)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x24) - 1) * 8);
      if (*(int *)((long)plVar9 + 0xc) == 0) goto LAB_002b8930;
    }
    if (iVar12 < 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = (long)*(int *)(*(long *)(this + 8) + (ulong)(iVar12 - 1) * 4);
    }
    lVar2 = *plVar9;
    lVar6 = lVar2 + lVar5 * 0x70;
    *(long *)(this + 0x28) = lVar6;
    if ((*this == (MenuItemIterator)0x0) || (*(long *)(lVar2 + 0x30 + lVar5 * 0x70) == 0)) {
      if (iVar12 < 1) {
        iVar7 = 1;
      }
      else {
        iVar7 = *(int *)(*(long *)(this + 8) + (ulong)(iVar12 - 1) * 4) + 1;
      }
      *(int *)(*(long *)(this + 8) + -4 + (long)iVar12 * 4) = iVar7;
      iVar12 = *(int *)(this + 0x14);
      uVar10 = (undefined7)((ulong)plVar9 >> 8);
    }
    else {
      if ((int)*(uint *)(this + 0x10) <= iVar12) {
        uVar8 = iVar12 + ((iVar12 - (iVar12 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
        if (*(uint *)(this + 0x10) != uVar8) {
          if ((int)uVar8 < 1) {
            free(*(void **)(this + 8));
            *(undefined8 *)(this + 8) = 0;
          }
          else {
            pvVar4 = realloc(*(void **)(this + 8),(ulong)uVar8 << 2);
            *(void **)(this + 8) = pvVar4;
          }
        }
        *(uint *)(this + 0x10) = uVar8;
        iVar12 = *(int *)(this + 0x14);
        lVar6 = *(long *)(this + 0x28);
      }
      *(int *)(this + 0x14) = iVar12 + 1;
      *(undefined4 *)(*(long *)(this + 8) + (long)iVar12 * 4) = 0;
      uVar3 = *(undefined8 *)(lVar6 + 0x30);
      iVar12 = *(int *)(this + 0x24);
      if ((int)*(uint *)(this + 0x20) <= iVar12) {
        uVar8 = iVar12 + ((iVar12 - (iVar12 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
        if (*(uint *)(this + 0x20) != uVar8) {
          if ((int)uVar8 < 1) {
            free(*(void **)(this + 0x18));
            *(undefined8 *)(this + 0x18) = 0;
          }
          else {
            pvVar4 = realloc(*(void **)(this + 0x18),(ulong)uVar8 << 3);
            *(void **)(this + 0x18) = pvVar4;
          }
        }
        *(uint *)(this + 0x20) = uVar8;
        iVar12 = *(int *)(this + 0x24);
      }
      *(int *)(this + 0x24) = iVar12 + 1;
      *(undefined8 *)(*(long *)(this + 0x18) + (long)iVar12 * 8) = uVar3;
      iVar12 = *(int *)(this + 0x14);
      uVar10 = (undefined7)((ulong)uVar3 >> 8);
    }
    plVar9 = (long *)CONCAT71(uVar10,1);
    if (0 < iVar12) {
      pvVar4 = *(void **)(this + 8);
      do {
        uVar11 = iVar12 - 1;
        uVar8 = *(int *)(this + 0x24) - 1;
        if (*(int *)((long)pvVar4 + (ulong)uVar11 * 4) <
            *(int *)(*(long *)(*(long *)(this + 0x18) + (ulong)uVar8 * 8) + 0xc)) break;
        *(uint *)(this + 0x14) = uVar11;
        iVar12 = uVar11 * 2;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        if (iVar12 < *(int *)(this + 0x10)) {
          if (uVar11 < 0x11) {
            uVar11 = 0x10;
          }
          if (*(int *)(this + 0x10) <= (int)uVar11) goto LAB_002b8b20;
          pvVar4 = realloc(pvVar4,(ulong)uVar11 << 2);
          *(void **)(this + 8) = pvVar4;
          *(uint *)(this + 0x10) = uVar11;
          uVar8 = *(uint *)(this + 0x24);
          if (0 < (int)uVar8) {
            uVar8 = uVar8 - 1;
            goto LAB_002b8b20;
          }
        }
        else {
LAB_002b8b20:
          *(uint *)(this + 0x24) = uVar8;
        }
        iVar12 = uVar8 * 2;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        if (iVar12 < *(int *)(this + 0x20)) {
          if ((int)uVar8 < 9) {
            uVar8 = 8;
          }
          if ((int)uVar8 < *(int *)(this + 0x20)) {
            pvVar4 = realloc(*(void **)(this + 0x18),(ulong)uVar8 << 3);
            *(void **)(this + 0x18) = pvVar4;
            *(uint *)(this + 0x20) = uVar8;
          }
        }
        if (*(int *)(this + 0x14) < 1) break;
        pvVar4 = *(void **)(this + 8);
        piVar1 = (int *)((long)pvVar4 + (ulong)(*(int *)(this + 0x14) - 1) * 4);
        *piVar1 = *piVar1 + 1;
        iVar12 = *(int *)(this + 0x14);
      } while (0 < iVar12);
    }
  }
LAB_002b8933:
  return (ulong)plVar9 & 0xffffffff;
}



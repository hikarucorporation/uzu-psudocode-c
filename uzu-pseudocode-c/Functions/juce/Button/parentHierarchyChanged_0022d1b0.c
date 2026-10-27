// Function : parentHierarchyChanged
// Namespace: juce:Button
// Entry    : 0022d1b0
// Prototype: undefined parentHierarchyChanged(Button * this)
// Body     : 0022d1b0 - 0022d468


/* juce::Button::parentHierarchyChanged() */

void __thiscall juce::Button::parentHierarchyChanged(Button *this)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  Button *pBVar6;
  int iVar7;
  long lVar8;
  Button *pBVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  
  if (*(int *)(this + 0x14c) == 0) {
    if (*(long *)(this + 0x150) == 0) {
      return;
    }
    pBVar9 = (Button *)0x0;
    pBVar6 = *(Button **)(*(long *)(this + 0x150) + 0x10);
    if (pBVar6 == (Button *)0x0) {
      return;
    }
LAB_0022d227:
    if (pBVar6 != (Button *)0x0) {
      lVar5 = *(long *)(this + 0x188) + 0x38;
      if (*(long *)(this + 0x188) == 0) {
        lVar5 = 0;
      }
      plVar2 = *(long **)(pBVar6 + 0x98);
      if (plVar2 != (long *)0x0) {
        uVar12 = *(uint *)((long)plVar2 + 0xc);
        if (0 < (int)uVar12) {
          lVar10 = *plVar2;
          uVar14 = 0;
          do {
            if (*(long *)(lVar10 + uVar14 * 8) == lVar5) {
              memmove((void *)(lVar10 + uVar14 * 8),(void *)(lVar10 + uVar14 * 8 + 8),
                      (long)(int)(~(uint)uVar14 + uVar12) << 3);
              iVar13 = *(int *)((long)plVar2 + 0xc);
              uVar12 = iVar13 - 1;
              *(uint *)((long)plVar2 + 0xc) = uVar12;
              iVar7 = iVar13 * 2 + -2;
              iVar13 = 0;
              if (-1 < iVar7) {
                iVar13 = iVar7;
              }
              if (iVar13 < (int)plVar2[1]) {
                uVar11 = 8;
                if (8 < (int)uVar12) {
                  uVar11 = uVar12;
                }
                if ((int)uVar11 < (int)plVar2[1]) {
                  pvVar4 = realloc((void *)*plVar2,(ulong)uVar11 << 3);
                  *plVar2 = (long)pvVar4;
                  *(uint *)(plVar2 + 1) = uVar11;
                }
              }
              break;
            }
            uVar14 = uVar14 + 1;
          } while (uVar12 != uVar14);
        }
      }
    }
    if (pBVar9 != (Button *)0x0) goto LAB_0022d2ed;
LAB_0022d35b:
    puVar3 = (undefined8 *)0x0;
    plVar2 = *(long **)(this + 0x150);
    *(undefined8 *)(this + 0x150) = 0;
  }
  else {
    pBVar6 = this;
    do {
      pBVar9 = pBVar6;
      pBVar6 = *(Button **)(pBVar9 + 0x30);
    } while (*(Button **)(pBVar9 + 0x30) != (Button *)0x0);
    if (*(long *)(this + 0x150) != 0) {
      pBVar6 = *(Button **)(*(long *)(this + 0x150) + 0x10);
      if (pBVar9 == pBVar6) {
        return;
      }
      goto LAB_0022d227;
    }
LAB_0022d2ed:
    puVar3 = *(undefined8 **)(pBVar9 + 0xd8);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = operator_new(0x18);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = &PTR__ReferenceCountedObject_00714b80;
      puVar3[2] = pBVar9;
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
      plVar2 = *(long **)(pBVar9 + 0xd8);
      *(undefined8 **)(pBVar9 + 0xd8) = puVar3;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
        puVar3 = *(undefined8 **)(pBVar9 + 0xd8);
        if (puVar3 == (undefined8 *)0x0) goto LAB_0022d35b;
      }
    }
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0x150);
    *(undefined8 **)(this + 0x150) = puVar3;
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    puVar3 = *(undefined8 **)(this + 0x150);
  }
  if ((puVar3 != (undefined8 *)0x0) && (lVar5 = puVar3[2], lVar5 != 0)) {
    lVar10 = *(long *)(this + 0x188) + 0x38;
    if (*(long *)(this + 0x188) == 0) {
      lVar10 = 0;
    }
    puVar3 = *(undefined8 **)(lVar5 + 0x98);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = operator_new(0x10);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined8 **)(lVar5 + 0x98) = puVar3;
      pvVar4 = (void *)*puVar3;
      iVar13 = *(int *)((long)puVar3 + 0xc);
    }
    else {
      pvVar4 = (void *)*puVar3;
      iVar13 = *(int *)((long)puVar3 + 0xc);
    }
    lVar5 = (long)iVar13;
    if (lVar5 != 0) {
      lVar8 = 0;
      do {
        if (*(long *)((long)pvVar4 + lVar8) == lVar10) {
          return;
        }
        lVar8 = lVar8 + 8;
      } while (lVar5 * 8 != lVar8);
    }
    if ((int)*(uint *)(puVar3 + 1) <= iVar13) {
      uVar12 = iVar13 + ((iVar13 - (iVar13 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar3 + 1) != uVar12) {
        if ((int)uVar12 < 1) {
          free(pvVar4);
          *puVar3 = 0;
          pvVar4 = (void *)0x0;
        }
        else {
          pvVar4 = realloc(pvVar4,(ulong)uVar12 << 3);
          *puVar3 = pvVar4;
        }
      }
      *(uint *)(puVar3 + 1) = uVar12;
      iVar13 = *(int *)((long)puVar3 + 0xc);
      lVar5 = (long)iVar13;
    }
    *(int *)((long)puVar3 + 0xc) = iVar13 + 1;
    *(long *)((long)pvVar4 + lVar5 * 8) = lVar10;
  }
  return;
}



// Function : removeListener
// Namespace: juce:Value
// Entry    : 004bfc40
// Prototype: undefined removeListener(Value * this, long param_1)
// Body     : 004bfc40 - 004bfdfb


/* juce::Value::removeListener(juce::Value::Listener*) */

void __thiscall juce::Value::removeListener(Value *this,long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  if (*(int *)(this + 0x28) == 2) {
    plVar2 = *(long **)(this + 8);
    uVar1 = *(uint *)((long)plVar2 + 0xc);
    if (0 < (int)uVar1) {
      lVar3 = *plVar2;
      uVar11 = 0;
      do {
        if (*(long *)(lVar3 + uVar11 * 8) == param_1) {
          uVar10 = (uint)uVar11;
          memmove((void *)(lVar3 + uVar11 * 8),(void *)(lVar3 + uVar11 * 8 + 8),
                  (long)(int)(~uVar10 + uVar1) << 3);
          iVar13 = *(int *)((long)plVar2 + 0xc);
          uVar1 = iVar13 - 1;
          *(uint *)((long)plVar2 + 0xc) = uVar1;
          iVar9 = iVar13 * 2 + -2;
          iVar13 = 0;
          if (-1 < iVar9) {
            iVar13 = iVar9;
          }
          if (iVar13 < (int)plVar2[1]) {
            uVar12 = 8;
            if (8 < (int)uVar1) {
              uVar12 = uVar1;
            }
            if ((int)uVar12 < (int)plVar2[1]) {
              pvVar8 = realloc((void *)*plVar2,(ulong)uVar12 << 3);
              *plVar2 = (long)pvVar8;
              *(uint *)(plVar2 + 1) = uVar12;
            }
          }
          if (-1 < (int)uVar10) {
            puVar4 = (undefined8 *)(*(undefined8 **)(this + 0x18))[1];
            for (puVar7 = (undefined8 *)**(undefined8 **)(this + 0x18); puVar7 != puVar4;
                puVar7 = puVar7 + 1) {
              piVar5 = (int *)*puVar7;
              if ((int)uVar10 < piVar5[1]) {
                piVar5[1] = piVar5[1] + -1;
              }
              if ((int)uVar10 <= *piVar5) {
                *piVar5 = *piVar5 + -1;
              }
            }
          }
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar11);
    }
  }
  if ((*(int *)(this + 0x28) != 2) || (*(int *)(*(long *)(this + 8) + 0xc) == 0)) {
    lVar3 = *(long *)this;
    uVar1 = *(uint *)(lVar3 + 0x2c);
    if (0 < (int)uVar1) {
      lVar6 = *(long *)(lVar3 + 0x20);
      uVar10 = uVar1;
      uVar12 = 0;
      do {
        while( true ) {
          if (*(Value **)(lVar6 + (long)(int)uVar12 * 8) == this) {
            if (uVar1 <= uVar12) {
              return;
            }
            pvVar8 = (void *)(lVar6 + (long)(int)uVar12 * 8);
            memmove(pvVar8,(void *)((long)pvVar8 + 8),(long)(int)(uVar1 + ~uVar12) << 3);
            iVar13 = *(int *)(lVar3 + 0x2c);
            uVar1 = iVar13 - 1;
            *(uint *)(lVar3 + 0x2c) = uVar1;
            iVar9 = iVar13 * 2 + -2;
            iVar13 = 0;
            if (-1 < iVar9) {
              iVar13 = iVar9;
            }
            if (*(int *)(lVar3 + 0x28) <= iVar13) {
              return;
            }
            uVar10 = 8;
            if (8 < (int)uVar1) {
              uVar10 = uVar1;
            }
            if ((int)uVar10 < *(int *)(lVar3 + 0x28)) {
              pvVar8 = realloc(*(void **)(lVar3 + 0x20),(ulong)uVar10 << 3);
              *(void **)(lVar3 + 0x20) = pvVar8;
              *(uint *)(lVar3 + 0x28) = uVar10;
              return;
            }
            return;
          }
          uVar14 = (int)(uVar12 + uVar10) / 2;
          if (uVar14 == uVar12) {
            return;
          }
          if (*(Value **)(lVar6 + (long)(int)uVar14 * 8) <= this) break;
          uVar10 = uVar14;
          if ((int)uVar14 <= (int)uVar12) {
            return;
          }
        }
        uVar12 = uVar14;
      } while ((int)uVar14 < (int)uVar10);
    }
  }
  return;
}



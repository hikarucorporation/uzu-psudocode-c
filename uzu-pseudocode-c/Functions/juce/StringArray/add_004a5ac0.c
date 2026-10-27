// Function : add
// Namespace: juce:StringArray
// Entry    : 004a5ac0
// Prototype: undefined add(StringArray * this, undefined8 * param_1)
// Body     : 004a5ac0 - 004a5ce1


/* juce::StringArray::add(juce::String) */

void __thiscall juce::StringArray::add(StringArray *this,undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  
  uVar10 = *(uint *)(this + 0xc);
  uVar11 = (ulong)uVar10;
  if ((int)uVar10 < (int)*(uint *)(this + 8)) goto LAB_004a5cbb;
  uVar15 = uVar10 + ((int)((uVar10 - ((int)(uVar10 + 1) >> 0x1f)) + 1) >> 1) + 9 & 0xfffffff8;
  if (*(uint *)(this + 8) != uVar15) {
    if ((int)uVar15 < 1) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    else {
      pvVar8 = malloc((ulong)uVar15 << 3);
      if (0 < (int)uVar10) {
        pvVar4 = *(void **)this;
        if ((uVar10 < 4) ||
           ((pvVar8 < (void *)((long)pvVar4 + uVar11 * 8) &&
            (pvVar4 < (void *)((long)pvVar8 + uVar11 * 8))))) {
          uVar9 = 0;
        }
        else {
          uVar9 = (ulong)(uVar10 & 0xfffffffc);
          uVar13 = (uVar9 - 4 >> 2) + 1;
          if (uVar9 - 4 == 0) {
            lVar12 = 0;
          }
          else {
            uVar14 = uVar13 & 0xfffffffffffffffe;
            lVar12 = 0;
            do {
              puVar1 = (undefined8 *)((long)pvVar4 + lVar12 * 8);
              uVar5 = puVar1[1];
              puVar3 = (undefined8 *)((long)pvVar4 + lVar12 * 8 + 0x10);
              uVar6 = *puVar3;
              uVar7 = puVar3[1];
              puVar3 = (undefined8 *)((long)pvVar8 + lVar12 * 8);
              *puVar3 = *puVar1;
              puVar3[1] = uVar5;
              puVar1 = (undefined8 *)((long)pvVar8 + lVar12 * 8 + 0x10);
              *puVar1 = uVar6;
              puVar1[1] = uVar7;
              puVar2 = (undefined4 *)((long)pvVar4 + lVar12 * 8);
              *puVar2 = 0x61ac58;
              puVar2[1] = 0;
              puVar2[2] = 0x61ac58;
              puVar2[3] = 0;
              puVar2 = (undefined4 *)((long)pvVar4 + lVar12 * 8 + 0x10);
              *puVar2 = 0x61ac58;
              puVar2[1] = 0;
              puVar2[2] = 0x61ac58;
              puVar2[3] = 0;
              puVar1 = (undefined8 *)((long)pvVar4 + lVar12 * 8 + 0x20);
              uVar5 = puVar1[1];
              puVar3 = (undefined8 *)((long)pvVar4 + lVar12 * 8 + 0x30);
              uVar6 = *puVar3;
              uVar7 = puVar3[1];
              puVar3 = (undefined8 *)((long)pvVar8 + lVar12 * 8 + 0x20);
              *puVar3 = *puVar1;
              puVar3[1] = uVar5;
              puVar1 = (undefined8 *)((long)pvVar8 + lVar12 * 8 + 0x30);
              *puVar1 = uVar6;
              puVar1[1] = uVar7;
              puVar2 = (undefined4 *)((long)pvVar4 + lVar12 * 8 + 0x20);
              *puVar2 = 0x61ac58;
              puVar2[1] = 0;
              puVar2[2] = 0x61ac58;
              puVar2[3] = 0;
              puVar2 = (undefined4 *)((long)pvVar4 + lVar12 * 8 + 0x30);
              *puVar2 = 0x61ac58;
              puVar2[1] = 0;
              puVar2[2] = 0x61ac58;
              puVar2[3] = 0;
              lVar12 = lVar12 + 8;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
          }
          if ((uVar13 & 1) != 0) {
            puVar1 = (undefined8 *)((long)pvVar4 + lVar12 * 8);
            uVar5 = puVar1[1];
            puVar3 = (undefined8 *)((long)pvVar4 + lVar12 * 8 + 0x10);
            uVar6 = *puVar3;
            uVar7 = puVar3[1];
            puVar3 = (undefined8 *)((long)pvVar8 + lVar12 * 8);
            *puVar3 = *puVar1;
            puVar3[1] = uVar5;
            puVar1 = (undefined8 *)((long)pvVar8 + lVar12 * 8 + 0x10);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar2 = (undefined4 *)((long)pvVar4 + lVar12 * 8);
            *puVar2 = 0x61ac58;
            puVar2[1] = 0;
            puVar2[2] = 0x61ac58;
            puVar2[3] = 0;
            puVar2 = (undefined4 *)((long)pvVar4 + lVar12 * 8 + 0x10);
            *puVar2 = 0x61ac58;
            puVar2[1] = 0;
            puVar2[2] = 0x61ac58;
            puVar2[3] = 0;
          }
          if (uVar9 == uVar11) goto LAB_004a5ca8;
        }
        uVar14 = ~uVar9;
        uVar13 = uVar11 & 3;
        if ((uVar10 & 3) != 0) {
          do {
            *(undefined8 *)((long)pvVar8 + uVar9 * 8) = *(undefined8 *)((long)pvVar4 + uVar9 * 8);
            *(undefined1 **)((long)pvVar4 + uVar9 * 8) = &DAT_0061ac58;
            uVar9 = uVar9 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if (2 < uVar14 + uVar11) {
          do {
            *(undefined8 *)((long)pvVar8 + uVar9 * 8) = *(undefined8 *)((long)pvVar4 + uVar9 * 8);
            *(undefined1 **)((long)pvVar4 + uVar9 * 8) = &DAT_0061ac58;
            *(undefined8 *)((long)pvVar8 + uVar9 * 8 + 8) =
                 *(undefined8 *)((long)pvVar4 + uVar9 * 8 + 8);
            *(undefined1 **)((long)pvVar4 + uVar9 * 8 + 8) = &DAT_0061ac58;
            *(undefined8 *)((long)pvVar8 + uVar9 * 8 + 0x10) =
                 *(undefined8 *)((long)pvVar4 + uVar9 * 8 + 0x10);
            *(undefined1 **)((long)pvVar4 + uVar9 * 8 + 0x10) = &DAT_0061ac58;
            *(undefined8 *)((long)pvVar8 + uVar9 * 8 + 0x18) =
                 *(undefined8 *)((long)pvVar4 + uVar9 * 8 + 0x18);
            *(undefined1 **)((long)pvVar4 + uVar9 * 8 + 0x18) = &DAT_0061ac58;
            uVar9 = uVar9 + 4;
          } while (uVar11 != uVar9);
        }
      }
LAB_004a5ca8:
      pvVar4 = *(void **)this;
      *(void **)this = pvVar8;
      free(pvVar4);
    }
  }
  *(uint *)(this + 8) = uVar15;
  uVar10 = *(uint *)(this + 0xc);
LAB_004a5cbb:
  *(uint *)(this + 0xc) = uVar10 + 1;
  *(undefined8 *)(*(long *)this + (long)(int)uVar10 * 8) = *param_1;
  *param_1 = &DAT_0061ac58;
  return;
}



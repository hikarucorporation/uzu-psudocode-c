// Function : addArray<juce::String>
// Namespace: juce:ArrayBase_juce__String_juce__DummyCriticalSection_
// Entry    : 004a90c0
// Prototype: void addArray<juce::String>(ArrayBase<juce::String,juce::DummyCriticalSection> * this, long * param_1, uint param_2)
// Body     : 004a90c0 - 004a9366


/* void juce::ArrayBase<juce::String,
   juce::DummyCriticalSection>::addArray<juce::String>(juce::String const*, int) */

void __thiscall
juce::ArrayBase<juce::String,juce::DummyCriticalSection>::addArray<juce::String>
          (ArrayBase<juce::String,juce::DummyCriticalSection> *this,long *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  bool bVar20;
  
  uVar12 = *(uint *)(this + 0xc);
  uVar18 = (ulong)uVar12;
  iVar11 = uVar12 + param_2;
  if (iVar11 <= (int)*(uint *)(this + 8)) goto LAB_004a92c7;
  uVar19 = iVar11 + iVar11 / 2 + 8U & 0xfffffff8;
  if (*(uint *)(this + 8) != uVar19) {
    if ((int)uVar19 < 1) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    else {
      pvVar9 = malloc((ulong)uVar19 << 3);
      if (0 < (int)uVar12) {
        pvVar4 = *(void **)this;
        if ((uVar12 < 4) ||
           ((pvVar9 < (void *)((long)pvVar4 + uVar18 * 8) &&
            (pvVar4 < (void *)((long)pvVar9 + uVar18 * 8))))) {
          uVar13 = 0;
        }
        else {
          uVar13 = (ulong)(uVar12 & 0xfffffffc);
          uVar15 = (uVar13 - 4 >> 2) + 1;
          if (uVar13 - 4 == 0) {
            lVar14 = 0;
          }
          else {
            uVar17 = uVar15 & 0xfffffffffffffffe;
            lVar14 = 0;
            do {
              puVar1 = (undefined8 *)((long)pvVar4 + lVar14 * 8);
              uVar6 = puVar1[1];
              puVar3 = (undefined8 *)((long)pvVar4 + lVar14 * 8 + 0x10);
              uVar7 = *puVar3;
              uVar8 = puVar3[1];
              puVar3 = (undefined8 *)((long)pvVar9 + lVar14 * 8);
              *puVar3 = *puVar1;
              puVar3[1] = uVar6;
              puVar1 = (undefined8 *)((long)pvVar9 + lVar14 * 8 + 0x10);
              *puVar1 = uVar7;
              puVar1[1] = uVar8;
              puVar2 = (undefined4 *)((long)pvVar4 + lVar14 * 8);
              *puVar2 = 0x61ac58;
              puVar2[1] = 0;
              puVar2[2] = 0x61ac58;
              puVar2[3] = 0;
              puVar2 = (undefined4 *)((long)pvVar4 + lVar14 * 8 + 0x10);
              *puVar2 = 0x61ac58;
              puVar2[1] = 0;
              puVar2[2] = 0x61ac58;
              puVar2[3] = 0;
              puVar1 = (undefined8 *)((long)pvVar4 + lVar14 * 8 + 0x20);
              uVar6 = puVar1[1];
              puVar3 = (undefined8 *)((long)pvVar4 + lVar14 * 8 + 0x30);
              uVar7 = *puVar3;
              uVar8 = puVar3[1];
              puVar3 = (undefined8 *)((long)pvVar9 + lVar14 * 8 + 0x20);
              *puVar3 = *puVar1;
              puVar3[1] = uVar6;
              puVar1 = (undefined8 *)((long)pvVar9 + lVar14 * 8 + 0x30);
              *puVar1 = uVar7;
              puVar1[1] = uVar8;
              puVar2 = (undefined4 *)((long)pvVar4 + lVar14 * 8 + 0x20);
              *puVar2 = 0x61ac58;
              puVar2[1] = 0;
              puVar2[2] = 0x61ac58;
              puVar2[3] = 0;
              puVar2 = (undefined4 *)((long)pvVar4 + lVar14 * 8 + 0x30);
              *puVar2 = 0x61ac58;
              puVar2[1] = 0;
              puVar2[2] = 0x61ac58;
              puVar2[3] = 0;
              lVar14 = lVar14 + 8;
              uVar17 = uVar17 - 2;
            } while (uVar17 != 0);
          }
          if ((uVar15 & 1) != 0) {
            puVar1 = (undefined8 *)((long)pvVar4 + lVar14 * 8);
            uVar6 = puVar1[1];
            puVar3 = (undefined8 *)((long)pvVar4 + lVar14 * 8 + 0x10);
            uVar7 = *puVar3;
            uVar8 = puVar3[1];
            puVar3 = (undefined8 *)((long)pvVar9 + lVar14 * 8);
            *puVar3 = *puVar1;
            puVar3[1] = uVar6;
            puVar1 = (undefined8 *)((long)pvVar9 + lVar14 * 8 + 0x10);
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            puVar2 = (undefined4 *)((long)pvVar4 + lVar14 * 8);
            *puVar2 = 0x61ac58;
            puVar2[1] = 0;
            puVar2[2] = 0x61ac58;
            puVar2[3] = 0;
            puVar2 = (undefined4 *)((long)pvVar4 + lVar14 * 8 + 0x10);
            *puVar2 = 0x61ac58;
            puVar2[1] = 0;
            puVar2[2] = 0x61ac58;
            puVar2[3] = 0;
          }
          if (uVar13 == uVar18) goto LAB_004a92b8;
        }
        uVar17 = ~uVar13;
        uVar15 = uVar18 & 3;
        if ((uVar12 & 3) != 0) {
          do {
            *(undefined8 *)((long)pvVar9 + uVar13 * 8) = *(undefined8 *)((long)pvVar4 + uVar13 * 8);
            *(undefined1 **)((long)pvVar4 + uVar13 * 8) = &DAT_0061ac58;
            uVar13 = uVar13 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if (2 < uVar17 + uVar18) {
          do {
            *(undefined8 *)((long)pvVar9 + uVar13 * 8) = *(undefined8 *)((long)pvVar4 + uVar13 * 8);
            *(undefined1 **)((long)pvVar4 + uVar13 * 8) = &DAT_0061ac58;
            *(undefined8 *)((long)pvVar9 + uVar13 * 8 + 8) =
                 *(undefined8 *)((long)pvVar4 + uVar13 * 8 + 8);
            *(undefined1 **)((long)pvVar4 + uVar13 * 8 + 8) = &DAT_0061ac58;
            *(undefined8 *)((long)pvVar9 + uVar13 * 8 + 0x10) =
                 *(undefined8 *)((long)pvVar4 + uVar13 * 8 + 0x10);
            *(undefined1 **)((long)pvVar4 + uVar13 * 8 + 0x10) = &DAT_0061ac58;
            *(undefined8 *)((long)pvVar9 + uVar13 * 8 + 0x18) =
                 *(undefined8 *)((long)pvVar4 + uVar13 * 8 + 0x18);
            *(undefined1 **)((long)pvVar4 + uVar13 * 8 + 0x18) = &DAT_0061ac58;
            uVar13 = uVar13 + 4;
          } while (uVar18 != uVar13);
        }
      }
LAB_004a92b8:
      pvVar4 = *(void **)this;
      *(void **)this = pvVar9;
      free(pvVar4);
    }
  }
  *(uint *)(this + 8) = uVar19;
LAB_004a92c7:
  if (0 < (int)param_2) {
    plVar10 = (long *)((long)*(int *)(this + 0xc) * 8 + *(long *)this);
    if ((param_2 & 1) == 0) {
      uVar12 = param_2;
    }
    else {
      uVar12 = param_2 - 1;
      lVar14 = *param_1;
      param_1 = param_1 + 1;
      *plVar10 = lVar14;
      plVar10 = plVar10 + 1;
      piVar16 = (int *)(lVar14 + -0x10);
      if (piVar16 != &emptyString) {
        LOCK();
        *piVar16 = *piVar16 + 1;
        UNLOCK();
      }
    }
    if (param_2 != 1) {
      uVar12 = uVar12 - 1;
      lVar14 = 0;
      do {
        lVar5 = *(long *)((long)param_1 + lVar14);
        *(long *)((long)plVar10 + lVar14) = lVar5;
        piVar16 = (int *)(lVar5 + -0x10);
        if (piVar16 != &emptyString) {
          LOCK();
          *piVar16 = *piVar16 + 1;
          UNLOCK();
        }
        lVar5 = *(long *)((long)param_1 + lVar14 + 8);
        *(long *)((long)plVar10 + lVar14 + 8) = lVar5;
        piVar16 = (int *)(lVar5 + -0x10);
        if (piVar16 != &emptyString) {
          LOCK();
          *piVar16 = *piVar16 + 1;
          UNLOCK();
        }
        lVar14 = lVar14 + 0x10;
        bVar20 = 1 < uVar12;
        uVar12 = uVar12 - 2;
      } while (bVar20);
    }
  }
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + param_2;
  return;
}



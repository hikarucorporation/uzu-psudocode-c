// Function : removeInternal
// Namespace: juce:Array_juce__String_juce__DummyCriticalSection_0_
// Entry    : 0048abe0
// Prototype: undefined removeInternal(Array<juce::String,juce::DummyCriticalSection,0> * this, long * param_1)
// Body     : 0048abe0 - 0048aec1


/* juce::Array<juce::String, juce::DummyCriticalSection, 0>::removeInternal(int) */

void __thiscall
juce::Array<juce::String,juce::DummyCriticalSection,0>::removeInternal
          (Array<juce::String,juce::DummyCriticalSection,0> *this,long *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
  
  uVar17 = (uint)param_1;
  uVar19 = ~uVar17 + *(int *)(this + 0xc);
  plVar13 = (long *)((long)(int)uVar17 * 8 + *(long *)this);
  if (0 < (int)uVar19) {
    lVar21 = *plVar13;
    uVar10 = uVar19 & 3;
    plVar14 = plVar13;
    if (2 < (*(int *)(this + 0xc) - uVar17) - 2) {
      uVar17 = (uVar19 - 4 >> 2) + 1;
      if (3 < uVar19 - 4) {
        uVar19 = uVar17 & 0xfffffffe;
        do {
          *plVar14 = plVar14[1];
          plVar14[1] = plVar14[2];
          plVar14[2] = plVar14[3];
          plVar14[3] = plVar14[4];
          plVar14[4] = lVar21;
          plVar14[4] = plVar14[5];
          plVar14[5] = plVar14[6];
          plVar13 = plVar14 + 8;
          plVar14[6] = plVar14[7];
          plVar14[7] = plVar14[8];
          plVar14[8] = lVar21;
          uVar19 = uVar19 - 2;
          plVar14 = plVar13;
        } while (uVar19 != 0);
      }
      plVar14 = plVar13;
      param_1 = plVar13;
      if ((uVar17 & 1) != 0) {
        *plVar13 = plVar13[1];
        plVar13[1] = plVar13[2];
        plVar13[2] = plVar13[3];
        plVar13[3] = plVar13[4];
        plVar13[4] = lVar21;
        plVar14 = plVar13 + 4;
        param_1 = plVar13 + 4;
      }
    }
    for (; plVar13 = param_1, uVar10 != 0; uVar10 = uVar10 - 1) {
      param_1 = plVar14 + 1;
      *plVar14 = plVar14[1];
      plVar14[1] = lVar21;
      plVar14 = param_1;
    }
  }
  piVar20 = (int *)(*plVar13 + -0x10);
  if (piVar20 != &emptyString) {
    LOCK();
    iVar4 = *piVar20;
    *piVar20 = *piVar20 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar20);
    }
  }
  iVar4 = *(int *)(this + 0xc);
  uVar17 = iVar4 - 1;
  *(uint *)(this + 0xc) = uVar17;
  iVar11 = iVar4 * 2 + -2;
  iVar12 = 0;
  if (-1 < iVar11) {
    iVar12 = iVar11;
  }
  if (*(int *)(this + 8) <= iVar12) {
    return;
  }
  uVar19 = 8;
  if (8 < (int)uVar17) {
    uVar19 = uVar17;
  }
  if (*(int *)(this + 8) <= (int)uVar19) {
    return;
  }
  pvVar9 = malloc((ulong)uVar19 << 3);
  if (1 < iVar4) {
    pvVar5 = *(void **)this;
    uVar16 = (ulong)uVar17;
    if ((uVar17 < 4) ||
       ((pvVar9 < (void *)((long)pvVar5 + uVar16 * 8) &&
        (pvVar5 < (void *)((long)pvVar9 + uVar16 * 8))))) {
      uVar18 = 0;
    }
    else {
      uVar18 = (ulong)(uVar17 & 0xfffffffc);
      uVar15 = (uVar18 - 4 >> 2) + 1;
      if (uVar18 - 4 == 0) {
        lVar21 = 0;
      }
      else {
        uVar22 = uVar15 & 0xfffffffffffffffe;
        lVar21 = 0;
        do {
          puVar1 = (undefined8 *)((long)pvVar5 + lVar21 * 8);
          uVar6 = puVar1[1];
          puVar3 = (undefined8 *)((long)pvVar5 + lVar21 * 8 + 0x10);
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          puVar3 = (undefined8 *)((long)pvVar9 + lVar21 * 8);
          *puVar3 = *puVar1;
          puVar3[1] = uVar6;
          puVar1 = (undefined8 *)((long)pvVar9 + lVar21 * 8 + 0x10);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar2 = (undefined4 *)((long)pvVar5 + lVar21 * 8);
          *puVar2 = 0x61ac58;
          puVar2[1] = 0;
          puVar2[2] = 0x61ac58;
          puVar2[3] = 0;
          puVar2 = (undefined4 *)((long)pvVar5 + lVar21 * 8 + 0x10);
          *puVar2 = 0x61ac58;
          puVar2[1] = 0;
          puVar2[2] = 0x61ac58;
          puVar2[3] = 0;
          puVar1 = (undefined8 *)((long)pvVar5 + lVar21 * 8 + 0x20);
          uVar6 = puVar1[1];
          puVar3 = (undefined8 *)((long)pvVar5 + lVar21 * 8 + 0x30);
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          puVar3 = (undefined8 *)((long)pvVar9 + lVar21 * 8 + 0x20);
          *puVar3 = *puVar1;
          puVar3[1] = uVar6;
          puVar1 = (undefined8 *)((long)pvVar9 + lVar21 * 8 + 0x30);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar2 = (undefined4 *)((long)pvVar5 + lVar21 * 8 + 0x20);
          *puVar2 = 0x61ac58;
          puVar2[1] = 0;
          puVar2[2] = 0x61ac58;
          puVar2[3] = 0;
          puVar2 = (undefined4 *)((long)pvVar5 + lVar21 * 8 + 0x30);
          *puVar2 = 0x61ac58;
          puVar2[1] = 0;
          puVar2[2] = 0x61ac58;
          puVar2[3] = 0;
          lVar21 = lVar21 + 8;
          uVar22 = uVar22 - 2;
        } while (uVar22 != 0);
      }
      if ((uVar15 & 1) != 0) {
        puVar1 = (undefined8 *)((long)pvVar5 + lVar21 * 8);
        uVar6 = puVar1[1];
        puVar3 = (undefined8 *)((long)pvVar5 + lVar21 * 8 + 0x10);
        uVar7 = *puVar3;
        uVar8 = puVar3[1];
        puVar3 = (undefined8 *)((long)pvVar9 + lVar21 * 8);
        *puVar3 = *puVar1;
        puVar3[1] = uVar6;
        puVar1 = (undefined8 *)((long)pvVar9 + lVar21 * 8 + 0x10);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        puVar2 = (undefined4 *)((long)pvVar5 + lVar21 * 8);
        *puVar2 = 0x61ac58;
        puVar2[1] = 0;
        puVar2[2] = 0x61ac58;
        puVar2[3] = 0;
        puVar2 = (undefined4 *)((long)pvVar5 + lVar21 * 8 + 0x10);
        *puVar2 = 0x61ac58;
        puVar2[1] = 0;
        puVar2[2] = 0x61ac58;
        puVar2[3] = 0;
      }
      if (uVar18 == uVar16) goto LAB_0048aea8;
    }
    uVar22 = ~uVar18;
    uVar15 = uVar16 & 3;
    if ((uVar17 & 3) != 0) {
      do {
        *(undefined8 *)((long)pvVar9 + uVar18 * 8) = *(undefined8 *)((long)pvVar5 + uVar18 * 8);
        *(undefined1 **)((long)pvVar5 + uVar18 * 8) = &DAT_0061ac58;
        uVar18 = uVar18 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (2 < uVar22 + uVar16) {
      do {
        *(undefined8 *)((long)pvVar9 + uVar18 * 8) = *(undefined8 *)((long)pvVar5 + uVar18 * 8);
        *(undefined1 **)((long)pvVar5 + uVar18 * 8) = &DAT_0061ac58;
        *(undefined8 *)((long)pvVar9 + uVar18 * 8 + 8) =
             *(undefined8 *)((long)pvVar5 + uVar18 * 8 + 8);
        *(undefined1 **)((long)pvVar5 + uVar18 * 8 + 8) = &DAT_0061ac58;
        *(undefined8 *)((long)pvVar9 + uVar18 * 8 + 0x10) =
             *(undefined8 *)((long)pvVar5 + uVar18 * 8 + 0x10);
        *(undefined1 **)((long)pvVar5 + uVar18 * 8 + 0x10) = &DAT_0061ac58;
        *(undefined8 *)((long)pvVar9 + uVar18 * 8 + 0x18) =
             *(undefined8 *)((long)pvVar5 + uVar18 * 8 + 0x18);
        *(undefined1 **)((long)pvVar5 + uVar18 * 8 + 0x18) = &DAT_0061ac58;
        uVar18 = uVar18 + 4;
      } while (uVar16 != uVar18);
    }
  }
LAB_0048aea8:
  pvVar5 = *(void **)this;
  *(void **)this = pvVar9;
  free(pvVar5);
  *(uint *)(this + 8) = uVar19;
  return;
}



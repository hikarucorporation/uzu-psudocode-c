// Function : HierarchyChecker
// Namespace: juce:HierarchyChecker
// Entry    : 0023b110
// Prototype: undefined HierarchyChecker(HierarchyChecker * this, long * param_1, undefined8 * param_2)
// Body     : 0023b110 - 0023b425


/* WARNING: Removing unreachable block (ram,0x0023b19b) */
/* juce::HierarchyChecker::HierarchyChecker(juce::Component::SafePointer<juce::Component>*,
   juce::MouseEvent const&) */

void __thiscall
juce::HierarchyChecker::HierarchyChecker(HierarchyChecker *this,long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  
  *(long **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  *(undefined8 *)(this + 0x20) = *param_2;
  *(undefined8 *)(this + 0x28) = uVar4;
  *(undefined8 *)(this + 0x30) = uVar5;
  *(undefined8 *)(this + 0x38) = uVar6;
  *(undefined8 *)(this + 0x40) = uVar7;
  *(undefined8 *)(this + 0x48) = uVar8;
  *(undefined8 *)(this + 0x50) = uVar9;
  *(undefined8 *)(this + 0x58) = uVar10;
  uVar4 = param_2[9];
  *(undefined8 *)(this + 0x60) = param_2[8];
  *(undefined8 *)(this + 0x68) = uVar4;
  *(undefined8 *)(this + 0x70) = param_2[10];
  *(undefined2 *)(this + 0x78) = *(undefined2 *)(param_2 + 0xb);
  if ((*param_1 == 0) || (lVar15 = *(long *)(*param_1 + 0x10), lVar15 == 0)) {
    return;
  }
  plVar20 = (long *)0x0;
  do {
    plVar2 = *(long **)(this + 8);
    lVar11 = (long)plVar20 - (long)plVar2;
    if (lVar11 == 0x7ffffffffffffff8) {
                    /* try { // try from 0023b41a to 0023b425 has its CatchHandler @ 0023b46a */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    uVar16 = lVar11 >> 3;
    uVar12 = uVar16;
    if (lVar11 == 0) {
      uVar12 = 1;
    }
    uVar18 = uVar12 + uVar16;
    if (0xfffffffffffffff < uVar18) {
      uVar18 = 0xfffffffffffffff;
    }
    if (CARRY8(uVar12,uVar16)) {
      uVar18 = 0xfffffffffffffff;
    }
    if (uVar18 == 0) {
      plVar13 = (long *)0x0;
      puVar14 = *(undefined8 **)(lVar15 + 0xd8);
      if (puVar14 == (undefined8 *)0x0) goto LAB_0023b2ef;
LAB_0023b360:
      plVar13[uVar16] = (long)puVar14;
LAB_0023b364:
      LOCK();
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      UNLOCK();
    }
    else {
                    /* try { // try from 0023b249 to 0023b279 has its CatchHandler @ 0023b46c */
      plVar13 = operator_new(uVar18 * 8);
      puVar14 = *(undefined8 **)(lVar15 + 0xd8);
      if (puVar14 != (undefined8 *)0x0) goto LAB_0023b360;
LAB_0023b2ef:
                    /* try { // try from 0023b2ef to 0023b2f8 has its CatchHandler @ 0023b426 */
      puVar14 = operator_new(0x18);
      *(undefined4 *)(puVar14 + 1) = 0;
      *puVar14 = &PTR__ReferenceCountedObject_00714b80;
      puVar14[2] = lVar15;
      LOCK();
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      UNLOCK();
      plVar19 = *(long **)(lVar15 + 0xd8);
      *(undefined8 **)(lVar15 + 0xd8) = puVar14;
      if (plVar19 == (long *)0x0) goto LAB_0023b360;
      LOCK();
      plVar17 = plVar19 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)(*plVar19 + 8))();
      }
      puVar14 = *(undefined8 **)(lVar15 + 0xd8);
      plVar13[uVar16] = (long)puVar14;
      if (puVar14 != (undefined8 *)0x0) goto LAB_0023b364;
    }
    plVar19 = plVar13;
    if (plVar2 != plVar20) {
      plVar17 = plVar2;
      do {
        lVar11 = *plVar17;
        *plVar19 = lVar11;
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
          plVar3 = (long *)*plVar17;
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar3 + 8))();
            }
          }
        }
        plVar17 = plVar17 + 1;
        plVar19 = plVar19 + 1;
      } while (plVar17 != plVar20);
    }
    plVar19 = plVar19 + 1;
    if (plVar2 != (long *)0x0) {
      operator_delete(plVar2);
    }
    *(long **)(this + 8) = plVar13;
    *(long **)(this + 0x10) = plVar19;
    *(long **)(this + 0x18) = plVar13 + uVar18;
    lVar15 = *(long *)(lVar15 + 0x30);
    while( true ) {
      if (lVar15 == 0) {
        return;
      }
      plVar20 = *(long **)(this + 0x18);
      if (plVar19 == plVar20) break;
      puVar14 = *(undefined8 **)(lVar15 + 0xd8);
      if (puVar14 == (undefined8 *)0x0) {
        puVar14 = operator_new(0x18);
        *(undefined4 *)(puVar14 + 1) = 0;
        *puVar14 = &PTR__ReferenceCountedObject_00714b80;
        puVar14[2] = lVar15;
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar20 = *(long **)(lVar15 + 0xd8);
        *(undefined8 **)(lVar15 + 0xd8) = puVar14;
        if (plVar20 == (long *)0x0) goto LAB_0023b1b0;
        LOCK();
        plVar2 = plVar20 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*plVar20 + 8))();
        }
        puVar14 = *(undefined8 **)(lVar15 + 0xd8);
        *plVar19 = (long)puVar14;
        if (puVar14 != (undefined8 *)0x0) goto LAB_0023b1b4;
      }
      else {
LAB_0023b1b0:
        *plVar19 = (long)puVar14;
LAB_0023b1b4:
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
      }
      plVar19 = (long *)(*(long *)(this + 0x10) + 8);
      *(long **)(this + 0x10) = plVar19;
      lVar15 = *(long *)(lVar15 + 0x30);
    }
  } while( true );
}



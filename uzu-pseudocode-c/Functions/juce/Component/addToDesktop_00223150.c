// Function : addToDesktop
// Namespace: juce:Component
// Entry    : 00223150
// Prototype: undefined addToDesktop(Component * this, uint param_1, undefined8 param_2)
// Body     : 00223150 - 00223987


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Component::addToDesktop(int, void*) */

void __thiscall juce::Component::addToDesktop(Component *this,uint param_1,undefined8 param_2)

{
  ushort uVar1;
  long *plVar2;
  float *pfVar3;
  float fVar4;
  bool bVar5;
  Desktop *pDVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  void *pvVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  Component *pCVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  int local_8c;
  undefined1 local_88 [16];
  long local_70;
  char local_68;
  char local_60;
  ulong local_58;
  undefined8 uStack_50;
  Component *local_48;
  ulong *puStack_40;
  undefined8 local_38;
  
  uVar1 = *(ushort *)(this + 0xe8);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0022317a to 00223183 has its CatchHandler @ 002239c3 */
    pDVar6 = operator_new(0x1d0);
                    /* try { // try from 00223187 to 0022318e has its CatchHandler @ 002239b0 */
    Desktop::Desktop(pDVar6);
    Desktop::instance = pDVar6;
  }
  uVar17 = ((uVar1 & 4) << 0x1c | param_1 & 0xbfffffff) ^ 0x40000000;
  if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
    lVar15 = 0;
    do {
      plVar10 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar15);
      if ((Component *)plVar10[1] == this) {
        if (uVar17 == *(uint *)(plVar10 + 2)) {
          return;
        }
        bVar5 = false;
        plVar7 = *(long **)(this + 0xd8);
        goto joined_r0x00223274;
      }
      lVar15 = lVar15 + 8;
    } while ((long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar15);
  }
  bVar5 = true;
  plVar10 = (long *)0x0;
  plVar7 = *(long **)(this + 0xd8);
joined_r0x00223274:
  if (plVar7 == (long *)0x0) {
    plVar7 = operator_new(0x18);
    *(undefined4 *)(plVar7 + 1) = 0;
    *plVar7 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar7[2] = (long)this;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar7;
    if (plVar2 == (long *)0x0) goto LAB_00223276;
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar7 = *(long **)(this + 0xd8);
    if (plVar7 != (long *)0x0) goto LAB_00223276;
    plVar7 = (long *)0x0;
  }
  else {
LAB_00223276:
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  iVar13 = *(int *)(this + 0x40);
  if (iVar13 < 1) {
    iVar13 = 1;
  }
  iVar14 = 1;
  if (0 < *(int *)(this + 0x44)) {
    iVar14 = *(int *)(this + 0x44);
  }
  local_38 = param_2;
                    /* try { // try from 002232a6 to 002232ad has its CatchHandler @ 002239d3 */
  setBounds(this,*(int *)(this + 0x38),*(int *)(this + 0x3c),iVar13,iVar14);
  uVar8 = 0;
  pCVar20 = this;
  do {
    local_58 = uVar8;
    local_48 = pCVar20;
    puStack_40 = &local_58;
                    /* try { // try from 002232d8 to 002232df has its CatchHandler @ 002239e6 */
    uVar8 = detail::ComponentHelpers::
            convertToParentSpace<juce::Point<int>>(juce::Component_const&,juce::Point<int>)::
            {lambda()#1}::operator()((_lambda___1_ *)&local_48);
    pfVar3 = *(float **)(pCVar20 + 0x50);
    if (pfVar3 != (float *)0x0) {
      fVar22 = (float)(int)(uVar8 >> 0x20);
      uVar8 = CONCAT44((int)((float)(int)uVar8 * pfVar3[3] + fVar22 * pfVar3[4] + pfVar3[5]),
                       (int)(*pfVar3 * (float)(int)uVar8 + pfVar3[1] * fVar22 + pfVar3[2]));
    }
    pCVar20 = *(Component **)(pCVar20 + 0x30);
  } while (pCVar20 != (Component *)0x0);
  uVar9 = detail::ScalingHelpers::scaledScreenPosToUnscaled<juce::Point<int>>(uVar8);
                    /* try { // try from 00223348 to 00223350 has its CatchHandler @ 002239cb */
  fVar22 = (float)(**(code **)(*(long *)this + 0x88))(this);
  fVar23 = (float)(_DAT_005d91c0 & (uint)fVar22);
  if (fVar23 == DAT_005d94c8) {
    if ((fVar22 != DAT_005d9038) || (NAN(fVar22) || NAN(DAT_005d9038))) {
LAB_002233a1:
      uVar9 = CONCAT44((int)((float)(int)((ulong)uVar9 >> 0x20) / fVar22),
                       (int)((float)(int)uVar9 / fVar22));
    }
  }
  else {
    fVar24 = (float)((uint)(DAT_005d9054 + fVar22) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar24) {
      fVar4 = DAT_005d9038;
      if (DAT_005d9038 <= fVar23) {
        fVar4 = fVar23;
      }
      if (fVar4 * DAT_005d94d0 < fVar24) goto LAB_002233a1;
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  if (bVar5) {
    local_8c = -1;
    local_60 = '\0';
    local_68 = '\0';
    local_70 = 0;
    pCVar20 = *(Component **)(this + 0x30);
joined_r0x0022358b:
    if (pCVar20 != (Component *)0x0) {
      uVar19 = 0xffffffff;
      if ((long)*(int *)(pCVar20 + 100) != 0) {
        lVar15 = (long)*(int *)(pCVar20 + 100) << 3;
        lVar16 = 0;
        do {
          if (*(Component **)(*(long *)(pCVar20 + 0x58) + lVar16 * 8) == this) {
            uVar19 = (uint)lVar16;
            break;
          }
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
                    /* try { // try from 002235d0 to 0022360f has its CatchHandler @ 002239d5 */
      removeChildComponent(pCVar20,uVar19,'\x01',1);
    }
    if (plVar7 == (long *)0x0) {
      return;
    }
    if (plVar7[2] != 0) {
      this[0xe8] = (Component)((byte)this[0xe8] | 1);
      plVar10 = (long *)(**(code **)(*(long *)this + 400))(this,uVar17,local_38);
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00223643 to 0022364c has its CatchHandler @ 002239d5 */
        pDVar6 = operator_new(0x1d0);
                    /* try { // try from 00223650 to 00223657 has its CatchHandler @ 0022398e */
        Desktop::Desktop(pDVar6);
        pvVar11 = *(void **)(pDVar6 + 0xc0);
        iVar13 = *(int *)(pDVar6 + 0xcc);
      }
      else {
        pvVar11 = *(void **)(Desktop::instance + 0xc0);
        iVar13 = *(int *)(Desktop::instance + 0xcc);
        pDVar6 = Desktop::instance;
      }
      lVar15 = (long)iVar13;
      Desktop::instance = pDVar6;
      if (lVar15 != 0) {
        lVar16 = 0;
        do {
          if (*(Component **)((long)pvVar11 + lVar16) == this) goto LAB_0022370a;
          lVar16 = lVar16 + 8;
        } while (lVar15 * 8 != lVar16);
      }
      if ((int)*(uint *)(pDVar6 + 200) <= iVar13) {
        uVar17 = iVar13 + ((iVar13 - (iVar13 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
        if (*(uint *)(pDVar6 + 200) != uVar17) {
          if ((int)uVar17 < 1) {
            free(pvVar11);
            *(undefined8 *)(pDVar6 + 0xc0) = 0;
            pvVar11 = (void *)0x0;
          }
          else {
            pvVar11 = realloc(pvVar11,(ulong)uVar17 << 3);
            *(void **)(pDVar6 + 0xc0) = pvVar11;
          }
        }
        *(uint *)(pDVar6 + 200) = uVar17;
        iVar13 = *(int *)(pDVar6 + 0xcc);
        lVar15 = (long)iVar13;
      }
      *(int *)(pDVar6 + 0xcc) = iVar13 + 1;
      *(Component **)((long)pvVar11 + lVar15 * 8) = this;
LAB_0022370a:
      *(undefined8 *)(this + 0x38) = uVar9;
      plVar2 = (long *)plVar10[1];
      if ((float *)plVar2[10] == (float *)0x0) {
        local_88 = *(undefined1 (*) [16])(plVar2 + 7);
      }
      else {
        local_88 = Rectangle<int>::transformedBy((Rectangle<int> *)(plVar2 + 7),(float *)plVar2[10])
        ;
      }
                    /* try { // try from 00223749 to 00223751 has its CatchHandler @ 002239a8 */
      fVar22 = (float)(**(code **)(*plVar2 + 0x88))(plVar2);
      dVar12 = (double)(local_88._0_8_ >> 0x20);
      fVar23 = (float)(_DAT_005d91c0 & (uint)fVar22);
      iVar13 = local_88._4_4_;
      iVar14 = local_88._8_4_;
      iVar25 = local_88._12_4_;
      if (fVar23 == DAT_005d94c8) {
        if ((fVar22 == DAT_005d9038) && (!NAN(fVar22) && !NAN(DAT_005d9038))) goto LAB_0022380b;
LAB_002237b6:
        local_88._0_8_ = (double)((float)local_88._0_4_ * fVar22) + _DAT_005d9a90;
        local_88._8_8_ = (double)((float)iVar14 * fVar22) + _UNK_005d9a98;
        dVar12 = (double)((float)iVar13 * fVar22) + _DAT_005d9a90;
        dVar21 = (double)((float)iVar25 * fVar22) + _UNK_005d9a98;
      }
      else {
        fVar24 = (float)((uint)(fVar22 + DAT_005d9054) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar24) {
          fVar4 = DAT_005d9038;
          if (DAT_005d9038 <= fVar23) {
            fVar4 = fVar23;
          }
          if (fVar4 * DAT_005d94d0 < fVar24) goto LAB_002237b6;
        }
LAB_0022380b:
        dVar21 = (double)(local_88._8_8_ >> 0x20);
      }
      local_48 = (Component *)(local_88._0_8_ & _DAT_005d9aa0 | (long)dVar12 << 0x20);
      puStack_40 = (ulong *)(local_88._8_8_ & _UNK_005d9aa8 | (long)dVar21 << 0x20);
                    /* try { // try from 00223842 to 0022387e has its CatchHandler @ 002239d5 */
      (**(code **)(*plVar10 + 0x40))(plVar10,&local_48,0);
      if (-1 < local_8c) {
        (**(code **)(*plVar10 + 0x128))(plVar10,local_8c);
      }
      (**(code **)(*plVar10 + 0x20))(plVar10);
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0022389c to 002238a5 has its CatchHandler @ 0022398c */
        pDVar6 = operator_new(0x1d0);
                    /* try { // try from 002238a9 to 002238b0 has its CatchHandler @ 0022398a */
        Desktop::Desktop(pDVar6);
        iVar13 = *(int *)(pDVar6 + 0xdc);
        Desktop::instance = pDVar6;
      }
      else {
        iVar13 = *(int *)(Desktop::instance + 0xdc);
      }
      if ((long)iVar13 != 0) {
        lVar15 = 0;
        do {
          plVar10 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar15);
          if ((Component *)plVar10[1] == this) {
            if (local_60 != '\0') {
                    /* try { // try from 00223900 to 00223960 has its CatchHandler @ 002239d5 */
              (**(code **)(*plVar10 + 0x88))(plVar10);
              *(ulong *)((long)plVar10 + 0x14) = local_58;
              *(undefined8 *)((long)plVar10 + 0x1c) = uStack_50;
            }
            if (local_68 != '\0') {
              (**(code **)(*plVar10 + 0x70))(plVar10);
            }
            plVar10[5] = local_70;
            internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
            (**(code **)(*plVar10 + 0x108))(plVar10);
            internalHierarchyChanged(this);
                    /* try { // try from 00223961 to 00223968 has its CatchHandler @ 00223988 */
            getAccessibilityHandler(this);
            break;
          }
          lVar15 = lVar15 + 8;
        } while ((long)iVar13 * 8 != lVar15);
      }
    }
  }
  else {
                    /* try { // try from 00223414 to 00223473 has its CatchHandler @ 002239d7 */
    local_60 = (**(code **)(*plVar10 + 0x90))(plVar10);
    local_68 = (**(code **)(*plVar10 + 0x78))(plVar10);
    local_70 = plVar10[5];
    local_58 = *(ulong *)((long)plVar10 + 0x14);
    uStack_50 = *(undefined8 *)((long)plVar10 + 0x1c);
    local_8c = (**(code **)(*plVar10 + 0x120))(plVar10);
    this[0xe8] = (Component)((byte)this[0xe8] & 0xfe);
    if (Desktop::instance == (Desktop *)0x0) {
      pDVar6 = operator_new(0x1d0);
                    /* try { // try from 00223477 to 0022347e has its CatchHandler @ 0022399b */
      Desktop::Desktop(pDVar6);
      Desktop::instance = pDVar6;
    }
    pDVar6 = Desktop::instance;
    uVar19 = *(uint *)(Desktop::instance + 0xcc);
    if (0 < (int)uVar19) {
      lVar15 = *(long *)(Desktop::instance + 0xc0);
      uVar8 = 0;
      do {
        if (*(Component **)(lVar15 + uVar8 * 8) == this) {
          memmove((void *)(lVar15 + uVar8 * 8),(void *)(lVar15 + uVar8 * 8 + 8),
                  (long)(int)(~(uint)uVar8 + uVar19) << 3);
          iVar13 = *(int *)(pDVar6 + 0xcc);
          uVar19 = iVar13 - 1;
          *(uint *)(pDVar6 + 0xcc) = uVar19;
          iVar14 = iVar13 * 2 + -2;
          iVar13 = 0;
          if (-1 < iVar14) {
            iVar13 = iVar14;
          }
          if (iVar13 < *(int *)(pDVar6 + 200)) {
            uVar18 = 8;
            if (8 < (int)uVar19) {
              uVar18 = uVar19;
            }
            if ((int)uVar18 < *(int *)(pDVar6 + 200)) {
              pvVar11 = realloc(*(void **)(pDVar6 + 0xc0),(ulong)uVar18 << 3);
              *(void **)(pDVar6 + 0xc0) = pvVar11;
              *(uint *)(pDVar6 + 200) = uVar18;
            }
          }
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar19 != uVar8);
    }
                    /* try { // try from 00223541 to 00223574 has its CatchHandler @ 002239d7 */
    internalHierarchyChanged(this);
    if (plVar7 == (long *)0x0) {
      lVar15 = *plVar10;
      goto LAB_00223976;
    }
    if (plVar7[2] != 0) {
      setBounds(this,(int)uVar9,(int)((ulong)uVar9 >> 0x20),*(int *)(this + 0x40),
                *(int *)(this + 0x44));
      (**(code **)(*plVar10 + 8))(plVar10);
      pCVar20 = *(Component **)(this + 0x30);
      goto joined_r0x0022358b;
    }
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  LOCK();
  plVar10 = plVar7 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 != 0) {
    return;
  }
  lVar15 = *plVar7;
  plVar10 = plVar7;
LAB_00223976:
  (**(code **)(lVar15 + 8))(plVar10);
  return;
}



// Function : createLayoutWithBalancedLineLengths
// Namespace: juce:TextLayout
// Entry    : 003cd010
// Prototype: undefined createLayoutWithBalancedLineLengths(float param_1, TextLayout * this, ulong * param_3)
// Body     : 003cd010 - 003cda35


/* juce::TextLayout::createLayoutWithBalancedLineLengths(juce::AttributedString const&, float) */

void __thiscall
juce::TextLayout::createLayoutWithBalancedLineLengths(float param_1,TextLayout *this,ulong *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int *piVar13;
  TextLayout *pTVar14;
  ulong uVar15;
  TextLayout *pTVar16;
  TextLayout *pTVar17;
  long lVar18;
  long *plVar19;
  TextLayout *pTVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  TextLayout *pTVar24;
  int iVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long lVar28;
  TextLayout *pTVar29;
  int iVar30;
  long *plVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float in_XMM5_Da;
  float fVar42;
  float local_b8;
  float local_b0;
  float local_ac;
  ulong local_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  float local_74;
  ulong local_70;
  undefined8 local_68;
  ulong *local_60;
  long *local_58;
  ulong local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_a0 = *param_3;
  piVar13 = (int *)(local_a0 - 0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    *piVar13 = *piVar13 + 1;
    UNLOCK();
  }
  local_98 = param_3[1];
  uStack_90 = param_3[2];
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uVar3 = *(uint *)((long)param_3 + 0x24);
  local_60 = param_3;
  if ((int)uVar3 < 1) {
    iVar30 = 0;
  }
  else {
    puVar26 = (undefined8 *)param_3[3];
    uVar32 = uVar3 + (uVar3 >> 1) + 8;
    uVar33 = uVar32 & 0xfffffff8;
    if (((ulong)uVar33 == 0) || ((int)uVar33 < 1)) {
      local_88 = (undefined8 *)0x0;
      uStack_80 = (ulong)uVar33;
      uVar15 = uStack_80;
    }
    else {
      local_88 = malloc((ulong)uVar33 * 0x18);
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar32) & 0xfffffffffffffff8;
      uVar15 = uStack_80;
    }
    uVar32 = uVar3;
    puVar1 = local_88;
    if ((uVar3 & 1) != 0) {
      *local_88 = *puVar26;
      lVar22 = puVar26[1];
      local_88[1] = lVar22;
      if (lVar22 != 0) {
        LOCK();
        *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
        UNLOCK();
      }
      puVar1 = puVar26 + 2;
      puVar26 = puVar26 + 3;
      *(undefined4 *)(local_88 + 2) = *(undefined4 *)puVar1;
      uVar32 = uVar3 - 1;
      puVar1 = local_88 + 3;
    }
    if (uVar3 != 1) {
      uVar32 = uVar32 - 1;
      lVar22 = 0;
      do {
        *(undefined8 *)((long)puVar1 + lVar22) = *(undefined8 *)((long)puVar26 + lVar22);
        lVar28 = *(long *)((long)puVar26 + lVar22 + 8);
        *(long *)((long)puVar1 + lVar22 + 8) = lVar28;
        if (lVar28 != 0) {
          LOCK();
          *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)((long)puVar1 + lVar22 + 0x10) =
             *(undefined4 *)((long)puVar26 + lVar22 + 0x10);
        *(undefined8 *)((long)puVar1 + lVar22 + 0x18) =
             *(undefined8 *)((long)puVar26 + lVar22 + 0x18);
        lVar28 = *(long *)((long)puVar26 + lVar22 + 0x20);
        *(long *)((long)puVar1 + lVar22 + 0x20) = lVar28;
        if (lVar28 != 0) {
          LOCK();
          *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)((long)puVar1 + lVar22 + 0x28) =
             *(undefined4 *)((long)puVar26 + lVar22 + 0x28);
        lVar22 = lVar22 + 0x30;
        bVar35 = 1 < uVar32;
        uVar32 = uVar32 - 2;
      } while (bVar35);
    }
    uStack_80._4_4_ = (int)(uVar15 >> 0x20);
    iVar30 = uStack_80._4_4_;
    uStack_80 = uVar15;
  }
  local_74 = DAT_005d9044 * param_1;
  uStack_80 = CONCAT44(iVar30 + uVar3,(undefined4)uStack_80);
  iVar30 = 1;
  if ((int)uStack_90 != 2) {
    iVar30 = (int)uStack_90;
  }
  uStack_90 = CONCAT44(uStack_90._4_4_,iVar30);
  local_68 = 0;
  local_ac = DAT_005de59c;
  local_b8 = param_1;
  local_b0 = param_1;
  do {
    if (local_b8 <= local_74) goto LAB_003cd884;
    uVar15 = (ulong)*(uint *)(this + 0xc);
    if (0 < (int)*(uint *)(this + 0xc)) {
      uVar23 = uVar15;
      while( true ) {
        lVar22 = *(long *)this;
        uVar27 = uVar23 - 1 & 0xffffffff;
        plVar31 = *(long **)(lVar22 + uVar27 * 8);
        memmove((void *)(lVar22 + uVar27 * 8),(void *)(lVar22 + uVar27 * 8 + 8),
                (long)((int)uVar15 - (int)uVar23) << 3);
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
        if (plVar31 != (long *)0x0) {
          uVar3 = *(uint *)((long)plVar31 + 0xc);
          uVar15 = (ulong)uVar3;
          if (0 < (int)uVar3) {
            iVar30 = -uVar3;
            uVar27 = uVar15;
            while( true ) {
              uVar34 = (ulong)((int)uVar27 - 1);
              lVar22 = *plVar31;
              plVar21 = *(long **)(lVar22 + uVar34 * 8);
              memmove((void *)(lVar22 + uVar34 * 8),(void *)(lVar22 + uVar34 * 8 + 8),
                      (long)((int)uVar15 + iVar30) << 3);
              *(int *)((long)plVar31 + 0xc) = *(int *)((long)plVar31 + 0xc) + -1;
              if (plVar21 != (long *)0x0) {
                *(undefined4 *)((long)plVar21 + 0x1c) = 0;
                free((void *)plVar21[2]);
                plVar4 = (long *)*plVar21;
                if (plVar4 != (long *)0x0) {
                  LOCK();
                  plVar2 = plVar4 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)(*plVar4 + 8))();
                  }
                }
                operator_delete(plVar21);
              }
              if (uVar27 < 2) break;
              uVar15 = (ulong)*(uint *)((long)plVar31 + 0xc);
              iVar30 = iVar30 + 1;
              uVar27 = uVar27 - 1;
            }
          }
          *(undefined4 *)((long)plVar31 + 0xc) = 0;
          free((void *)*plVar31);
          operator_delete(plVar31);
        }
        if ((long)uVar23 < 2) break;
        uVar15 = (ulong)*(uint *)(this + 0xc);
        uVar23 = uVar23 - 1;
      }
    }
    if (*(int *)(this + 8) != 0) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    *(undefined4 *)(this + 8) = 0;
    *(float *)(this + 0x10) = local_b8;
    *(undefined4 *)(this + 0x14) = 0x4b189680;
    *(undefined4 *)(this + 0x18) = local_98._4_4_;
                    /* try { // try from 003cd2d4 to 003cd2e0 has its CatchHandler @ 003cda3a */
    createStandardLayout(this,&local_a0);
    recalculateSize(this);
    uVar15 = (ulong)*(uint *)(this + 0xc);
    if ((int)*(uint *)(this + 0xc) < 2) goto LAB_003cd92d;
                    /* try { // try from 003cd2fd to 003cd301 has its CatchHandler @ 003cda38 */
    pTVar14 = operator_new(uVar15 * 4);
    fVar42 = 0.0;
    pTVar29 = (TextLayout *)0x0;
    fVar41 = DAT_005d9038;
    if ((long)*(int *)(this + 0xc) != 0) {
      plVar31 = *(long **)this;
      local_58 = plVar31 + *(int *)(this + 0xc);
      pTVar29 = pTVar14 + uVar15 * 4;
      pTVar17 = pTVar14;
      plVar21 = local_58;
      local_70 = uVar15;
LAB_003cd369:
      do {
        pTVar24 = pTVar17;
        plVar4 = (long *)*plVar31;
        if ((long)*(int *)((long)plVar4 + 0xc) == 0) {
          fVar42 = 0.0;
          fVar38 = 0.0;
        }
        else {
          plVar19 = (long *)*plVar4;
          plVar2 = plVar19 + *(int *)((long)plVar4 + 0xc);
          bVar35 = true;
          fVar37 = 0.0;
          fVar40 = 0.0;
LAB_003cd3bd:
          do {
            lVar22 = (long)*(int *)(*plVar19 + 0x1c);
            fVar42 = 0.0;
            fVar38 = 0.0;
            if (lVar22 != 0) {
              lVar28 = *(long *)(*plVar19 + 0x10);
              lVar22 = lVar22 * 0x10;
              bVar12 = true;
              lVar18 = 0;
              fVar36 = 0.0;
              fVar39 = 0.0;
              do {
                while( true ) {
                  fVar42 = *(float *)(lVar28 + 4 + lVar18);
                  fVar38 = *(float *)(lVar28 + 0xc + lVar18) + fVar42;
                  if (fVar38 <= fVar42) {
                    fVar38 = fVar42;
                  }
                  if (bVar12) break;
                  if (fVar36 <= fVar42) {
                    fVar42 = fVar36;
                  }
                  if (fVar38 <= fVar39) {
                    fVar38 = fVar39;
                  }
                  if (fVar38 <= fVar42) {
                    fVar38 = fVar42;
                  }
                  lVar18 = lVar18 + 0x10;
                  fVar36 = fVar42;
                  fVar39 = fVar38;
                  if (lVar22 == lVar18) goto LAB_003cd428;
                }
                bVar12 = false;
                lVar18 = lVar18 + 0x10;
                fVar36 = fVar42;
                fVar39 = fVar38;
              } while (lVar22 != lVar18);
            }
LAB_003cd428:
            if (!bVar35) {
              if (fVar37 <= fVar42) {
                fVar42 = fVar37;
              }
              if (fVar38 <= fVar40) {
                fVar38 = fVar40;
              }
              if (fVar38 <= fVar42) {
                fVar38 = fVar42;
              }
              plVar19 = plVar19 + 1;
              fVar37 = fVar42;
              fVar40 = fVar38;
              if (plVar19 == plVar2) break;
              goto LAB_003cd3bd;
            }
            bVar35 = false;
            plVar19 = plVar19 + 1;
            fVar37 = fVar42;
            fVar40 = fVar38;
          } while (plVar19 != plVar2);
        }
        fVar42 = *(float *)(plVar4 + 3) + fVar42;
        fVar38 = *(float *)(plVar4 + 3) + fVar38;
        fVar37 = fVar38;
        if (fVar38 <= fVar42) {
          fVar37 = fVar42;
        }
        fVar37 = fVar37 - fVar42;
        if (pTVar24 != pTVar29) {
          *(float *)pTVar24 = fVar37;
          pTVar17 = pTVar24 + 4;
          plVar31 = plVar31 + 1;
          if (plVar31 == plVar21) break;
          goto LAB_003cd369;
        }
        lVar22 = (long)pTVar29 - (long)pTVar14;
        if (lVar22 == 0x7ffffffffffffffc) {
                    /* try { // try from 003cda2a to 003cda35 has its CatchHandler @ 003cda41 */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        uVar23 = lVar22 >> 2;
        uVar15 = uVar23;
        if (lVar22 == 0) {
          uVar15 = 1;
        }
        local_50 = uVar15 + uVar23;
        if (0x1fffffffffffffff < local_50) {
          local_50 = 0x1fffffffffffffff;
        }
        if (CARRY8(uVar15,uVar23)) {
          local_50 = 0x1fffffffffffffff;
        }
        if (local_50 == 0) {
          pTVar16 = (TextLayout *)0x0;
          *(float *)(uVar23 * 4) = fVar37;
          if (0 < lVar22) goto LAB_003cd512;
LAB_003cd57a:
          pTVar24 = pTVar16 + uVar23 * 4;
        }
        else {
          local_48 = fVar37;
          fStack_44 = fVar38;
          fStack_40 = fVar38;
          fStack_3c = fVar38;
                    /* try { // try from 003cd4e5 to 003cd4e9 has its CatchHandler @ 003cda3f */
          pTVar16 = operator_new(local_50 * 4);
          fVar41 = DAT_005d9038;
          *(float *)(pTVar16 + uVar23 * 4) = local_48;
          if (lVar22 < 1) goto LAB_003cd57a;
LAB_003cd512:
          pTVar24 = pTVar16;
          if (pTVar14 != pTVar29) {
            pTVar17 = pTVar14;
            if (0x1b < lVar22 - 4U) {
              uVar34 = (lVar22 - 4U >> 2) + 1;
              uVar15 = uVar34 & 0x7ffffffffffffff8;
              uVar27 = (uVar15 - 8 >> 3) + 1;
              uVar23 = (ulong)((uint)uVar27 & 3);
              if (uVar15 - 8 < 0x18) {
                lVar22 = 0;
              }
              else {
                uVar27 = uVar27 & 0xfffffffffffffffc;
                lVar22 = 0;
                do {
                  uVar9 = *(undefined8 *)(pTVar14 + lVar22 * 4 + 8);
                  uVar10 = *(undefined8 *)(pTVar14 + lVar22 * 4 + 0x10);
                  uVar11 = *(undefined8 *)(pTVar14 + lVar22 * 4 + 0x10 + 8);
                  *(undefined8 *)(pTVar16 + lVar22 * 4) = *(undefined8 *)(pTVar14 + lVar22 * 4);
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 8) = uVar9;
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 0x10) = uVar10;
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 0x10 + 8) = uVar11;
                  uVar9 = *(undefined8 *)(pTVar14 + lVar22 * 4 + 0x20 + 8);
                  uVar10 = *(undefined8 *)(pTVar14 + lVar22 * 4 + 0x30);
                  uVar11 = *(undefined8 *)(pTVar14 + lVar22 * 4 + 0x30 + 8);
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 0x20) =
                       *(undefined8 *)(pTVar14 + lVar22 * 4 + 0x20);
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 0x20 + 8) = uVar9;
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 0x30) = uVar10;
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 0x30 + 8) = uVar11;
                  uVar9 = *(undefined8 *)(pTVar14 + lVar22 * 4 + 0x40 + 8);
                  uVar10 = *(undefined8 *)(pTVar14 + lVar22 * 4 + 0x50);
                  uVar11 = *(undefined8 *)(pTVar14 + lVar22 * 4 + 0x50 + 8);
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 0x40) =
                       *(undefined8 *)(pTVar14 + lVar22 * 4 + 0x40);
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 0x40 + 8) = uVar9;
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 0x50) = uVar10;
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 0x50 + 8) = uVar11;
                  uVar9 = *(undefined8 *)(pTVar14 + lVar22 * 4 + 0x60 + 8);
                  pTVar17 = pTVar14 + lVar22 * 4 + 0x70;
                  uVar5 = *(undefined4 *)pTVar17;
                  uVar6 = *(undefined4 *)(pTVar17 + 4);
                  uVar7 = *(undefined4 *)(pTVar17 + 8);
                  uVar8 = *(undefined4 *)(pTVar17 + 0xc);
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 0x60) =
                       *(undefined8 *)(pTVar14 + lVar22 * 4 + 0x60);
                  *(undefined8 *)(pTVar16 + lVar22 * 4 + 0x60 + 8) = uVar9;
                  pTVar17 = pTVar16 + lVar22 * 4 + 0x70;
                  *(undefined4 *)pTVar17 = uVar5;
                  *(undefined4 *)(pTVar17 + 4) = uVar6;
                  *(undefined4 *)(pTVar17 + 8) = uVar7;
                  *(undefined4 *)(pTVar17 + 0xc) = uVar8;
                  lVar22 = lVar22 + 0x20;
                  uVar27 = uVar27 - 4;
                } while (uVar27 != 0);
              }
              if (uVar23 != 0) {
                lVar28 = 0;
                do {
                  uVar9 = *(undefined8 *)(pTVar14 + lVar28 + lVar22 * 4 + 8);
                  pTVar17 = pTVar14 + lVar28 + lVar22 * 4 + 0x10;
                  uVar5 = *(undefined4 *)pTVar17;
                  uVar6 = *(undefined4 *)(pTVar17 + 4);
                  uVar7 = *(undefined4 *)(pTVar17 + 8);
                  uVar8 = *(undefined4 *)(pTVar17 + 0xc);
                  *(undefined8 *)(pTVar16 + lVar28 + lVar22 * 4) =
                       *(undefined8 *)(pTVar14 + lVar28 + lVar22 * 4);
                  *(undefined8 *)(pTVar16 + lVar28 + lVar22 * 4 + 8) = uVar9;
                  pTVar17 = pTVar16 + lVar28 + lVar22 * 4 + 0x10;
                  *(undefined4 *)pTVar17 = uVar5;
                  *(undefined4 *)(pTVar17 + 4) = uVar6;
                  *(undefined4 *)(pTVar17 + 8) = uVar7;
                  *(undefined4 *)(pTVar17 + 0xc) = uVar8;
                  lVar28 = lVar28 + 0x20;
                } while (uVar23 * 0x20 != lVar28);
              }
              pTVar24 = pTVar16 + uVar15 * 4;
              if (uVar34 == uVar15) goto LAB_003cd665;
              pTVar17 = pTVar14 + uVar15 * 4;
            }
            do {
              *(float *)pTVar24 = *(float *)pTVar17;
              pTVar17 = pTVar17 + 4;
              pTVar24 = pTVar24 + 4;
            } while (pTVar17 != pTVar29);
          }
        }
LAB_003cd665:
        if (pTVar14 != (TextLayout *)0x0) {
          operator_delete(pTVar14);
          fVar41 = DAT_005d9038;
        }
        pTVar29 = pTVar16 + local_50 * 4;
        pTVar17 = pTVar24 + 4;
        plVar31 = plVar31 + 1;
        plVar21 = local_58;
        pTVar14 = pTVar16;
      } while (plVar31 != local_58);
      fVar42 = 0.0;
      pTVar29 = pTVar14;
      if ((pTVar14 != pTVar17) && (pTVar14 != pTVar24)) {
        pTVar20 = pTVar14;
        pTVar16 = pTVar14;
        do {
          pTVar16 = pTVar16 + 4;
          pTVar29 = pTVar16;
          if (*(float *)pTVar16 < *(float *)pTVar20 || *(float *)pTVar16 == *(float *)pTVar20) {
            pTVar29 = pTVar20;
          }
          pTVar20 = pTVar29;
        } while (pTVar16 != pTVar24);
      }
      if (pTVar14 != pTVar17) {
        fVar38 = *(float *)pTVar29;
        pTVar29 = pTVar14 + -4;
        fVar42 = 0.0;
        do {
          pTVar17 = pTVar29 + 4;
          pTVar29 = pTVar29 + 4;
          fVar37 = fVar41 - *(float *)pTVar17 / fVar38;
          fVar42 = fVar42 + fVar37 * fVar37;
        } while (pTVar29 != pTVar24);
      }
      uVar15 = local_70;
    }
    fVar42 = fVar42 / (float)(int)uVar15;
    if (local_ac <= fVar42) {
LAB_003cd790:
      if ((char)local_68 == '\0') {
        pTVar29 = this;
        in_XMM5_Da = DAT_005de59c;
        if ((long)*(int *)(this + 0xc) != 0) {
          pTVar29 = *(TextLayout **)this;
          pTVar17 = pTVar29 + (long)*(int *)(this + 0xc) * 8;
          do {
            lVar22 = (long)*(int *)((long)*(long **)pTVar29 + 0xc);
            if (lVar22 != 0) {
              plVar21 = (long *)**(long **)pTVar29;
              plVar31 = plVar21 + lVar22;
              do {
                lVar22 = (long)*(int *)(*plVar21 + 0x1c);
                if (lVar22 != 0) {
                  lVar28 = 0;
                  do {
                    fVar42 = *(float *)(*(long *)(*plVar21 + 0x10) + 0xc + lVar28);
                    fVar38 = fVar41;
                    if (fVar41 <= fVar42) {
                      fVar38 = fVar42;
                    }
                    if (in_XMM5_Da <= fVar38) {
                      fVar38 = in_XMM5_Da;
                    }
                    in_XMM5_Da = fVar38;
                    lVar28 = lVar28 + 0x10;
                  } while (lVar22 * 0x10 != lVar28);
                }
                plVar21 = plVar21 + 1;
              } while (plVar21 != plVar31);
            }
            pTVar29 = pTVar29 + 8;
          } while (pTVar29 != pTVar17);
        }
      }
      local_b8 = local_b8 - in_XMM5_Da;
      iVar25 = 0;
      iVar30 = 0;
      local_68 = CONCAT71((int7)((ulong)pTVar29 >> 8),1);
    }
    else {
      iVar25 = 3;
      iVar30 = 3;
      local_b0 = local_b8;
      local_ac = fVar42;
      if (DAT_005d98f0 <= fVar42) goto LAB_003cd790;
    }
    if (pTVar14 != (TextLayout *)0x0) {
      operator_delete(pTVar14);
      iVar30 = iVar25;
    }
  } while (iVar30 == 0);
  if (iVar30 == 3) {
LAB_003cd884:
    uVar3 = *(uint *)(this + 0xc);
    uVar15 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      iVar30 = -uVar3;
      uVar23 = uVar15;
      while( true ) {
        uVar27 = (ulong)((int)uVar23 - 1);
        lVar22 = *(long *)this;
        plVar31 = *(long **)(lVar22 + uVar27 * 8);
        memmove((void *)(lVar22 + uVar27 * 8),(void *)(lVar22 + uVar27 * 8 + 8),
                (long)((int)uVar15 + iVar30) << 3);
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
        ContainerDeletePolicy<juce::TextLayout::Line>::destroy(plVar31);
        if ((long)uVar23 < 2) break;
        uVar15 = (ulong)*(uint *)(this + 0xc);
        iVar30 = iVar30 + 1;
        uVar23 = uVar23 - 1;
      }
    }
    if (*(int *)(this + 8) != 0) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    *(undefined4 *)(this + 8) = 0;
    *(float *)(this + 0x10) = local_b0;
    *(undefined4 *)(this + 0x14) = 0x4b189680;
    *(undefined4 *)(this + 0x18) = *(undefined4 *)((long)local_60 + 0xc);
                    /* try { // try from 003cd91d to 003cd924 has its CatchHandler @ 003cda36 */
    createStandardLayout(this,local_60);
    recalculateSize(this);
  }
LAB_003cd92d:
  if (0 < uStack_80._4_4_) {
    lVar22 = 8;
    lVar28 = 0;
    do {
      plVar31 = *(long **)((long)local_88 + lVar22);
      if (plVar31 != (long *)0x0) {
        LOCK();
        plVar21 = plVar31 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)(*plVar31 + 8))();
        }
      }
      lVar28 = lVar28 + 1;
      lVar22 = lVar22 + 0x18;
    } while (lVar28 < uStack_80._4_4_);
  }
  uStack_80 = uStack_80 & 0xffffffff;
  free(local_88);
  piVar13 = (int *)(local_a0 - 0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar30 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar30 == 0) {
      operator_delete__(piVar13);
    }
  }
  return;
}



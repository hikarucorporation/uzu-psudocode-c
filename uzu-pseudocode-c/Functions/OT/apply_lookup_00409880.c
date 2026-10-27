// Function : apply_lookup
// Namespace: OT
// Entry    : 00409880
// Prototype: undefined apply_lookup(long param_1, ulong param_2, void * param_3, uint param_4, long param_5, ulong param_6)
// Body     : 00409880 - 0040a00a


/* WARNING: Removing unreachable block (ram,0x004099d7) */
/* WARNING: Removing unreachable block (ram,0x00409f17) */
/* WARNING: Removing unreachable block (ram,0x00409f29) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::apply_lookup(OT::hb_ot_apply_context_t*, unsigned int, unsigned int*, unsigned int,
   OT::LookupRecord const*, unsigned int) */

void __cdecl
OT::apply_lookup(long param_1,ulong param_2,void *param_3,uint param_4,long param_5,ulong param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  hb_buffer_t hVar4;
  undefined4 uVar5;
  hb_buffer_t *this;
  code *pcVar6;
  long lVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  void *pvVar13;
  void *__dest;
  ushort uVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  hb_buffer_t *phVar26;
  int iVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  int iVar28;
  int iVar29;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  int iVar30;
  undefined8 extraout_XMM1_Qa;
  undefined1 in_XMM1 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 in_XMM2 [16];
  undefined1 auVar31 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar32 [16];
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 in_XMM4 [16];
  int iVar36;
  undefined1 in_XMM5 [16];
  undefined1 in_XMM6 [16];
  undefined1 in_XMM7 [16];
  undefined1 in_stack_ffffffffffffff78;
  uint local_70;
  uint local_6c;
  ulong local_48;
  
  this = *(hb_buffer_t **)(param_1 + 0xa0);
  uVar19 = *(uint *)(this + 0x5c);
  local_70 = uVar19;
  if (this[0x5a] != (hb_buffer_t)0x0) {
    local_70 = *(uint *)(this + 100);
  }
  uVar22 = (ulong)local_70;
  iVar10 = (int)param_6;
  uVar15 = (uint)param_2;
  if (uVar15 != 0) {
    iVar18 = local_70 - uVar19;
    if (uVar15 < 8) {
      uVar20 = 0;
    }
    else {
      uVar20 = (ulong)(uVar15 & 0xfffffff8);
      param_6 = (uVar20 - 8 >> 3) + 1;
      if (uVar20 - 8 == 0) {
        lVar21 = 0;
LAB_0040995e:
        piVar1 = (int *)((long)param_3 + lVar21 * 4);
        piVar2 = (int *)((long)param_3 + lVar21 * 4 + 0x10);
        in_XMM1._0_4_ = *piVar1 + iVar18;
        in_XMM1._4_4_ = piVar1[1] + iVar18;
        in_XMM1._8_4_ = piVar1[2] + iVar18;
        in_XMM1._12_4_ = piVar1[3] + iVar18;
        in_XMM2._0_4_ = *piVar2 + iVar18;
        in_XMM2._4_4_ = piVar2[1] + iVar18;
        in_XMM2._8_4_ = piVar2[2] + iVar18;
        in_XMM2._12_4_ = piVar2[3] + iVar18;
        *(undefined1 (*) [16])((long)param_3 + lVar21 * 4) = in_XMM1;
        *(undefined1 (*) [16])((long)param_3 + lVar21 * 4 + 0x10) = in_XMM2;
      }
      else {
        uVar12 = param_6 & 0xfffffffffffffffe;
        lVar21 = 0;
        do {
          piVar1 = (int *)((long)param_3 + lVar21 * 4);
          piVar2 = (int *)((long)param_3 + lVar21 * 4 + 0x10);
          piVar3 = (int *)((long)param_3 + lVar21 * 4 + 0x20);
          iVar27 = *piVar3;
          iVar28 = piVar3[1];
          iVar29 = piVar3[2];
          iVar30 = piVar3[3];
          piVar3 = (int *)((long)param_3 + lVar21 * 4 + 0x30);
          iVar33 = *piVar3;
          iVar34 = piVar3[1];
          iVar35 = piVar3[2];
          iVar36 = piVar3[3];
          in_XMM1._0_4_ = *piVar1 + iVar18;
          in_XMM1._4_4_ = piVar1[1] + iVar18;
          in_XMM1._8_4_ = piVar1[2] + iVar18;
          in_XMM1._12_4_ = piVar1[3] + iVar18;
          in_XMM2._0_4_ = *piVar2 + iVar18;
          in_XMM2._4_4_ = piVar2[1] + iVar18;
          in_XMM2._8_4_ = piVar2[2] + iVar18;
          in_XMM2._12_4_ = piVar2[3] + iVar18;
          *(undefined1 (*) [16])((long)param_3 + lVar21 * 4) = in_XMM1;
          *(undefined1 (*) [16])((long)param_3 + lVar21 * 4 + 0x10) = in_XMM2;
          in_XMM3._0_4_ = iVar27 + iVar18;
          in_XMM3._4_4_ = iVar28 + iVar18;
          in_XMM3._8_4_ = iVar29 + iVar18;
          in_XMM3._12_4_ = iVar30 + iVar18;
          in_XMM4._0_4_ = iVar33 + iVar18;
          in_XMM4._4_4_ = iVar34 + iVar18;
          in_XMM4._8_4_ = iVar35 + iVar18;
          in_XMM4._12_4_ = iVar36 + iVar18;
          *(undefined1 (*) [16])((long)param_3 + lVar21 * 4 + 0x20) = in_XMM3;
          *(undefined1 (*) [16])((long)param_3 + lVar21 * 4 + 0x30) = in_XMM4;
          lVar21 = lVar21 + 0x10;
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
        if ((param_6 & 1) != 0) goto LAB_0040995e;
      }
      if (uVar20 == (param_2 & 0xffffffff)) goto LAB_0040999c;
    }
    do {
      piVar1 = (int *)((long)param_3 + uVar20 * 4);
      *piVar1 = *piVar1 + iVar18;
      uVar20 = uVar20 + 1;
    } while ((param_2 & 0xffffffff) != uVar20);
  }
LAB_0040999c:
  local_70 = (iVar10 - uVar19) + local_70;
  if (param_4 == 0) {
LAB_00409fe7:
    hb_buffer_t::move_to(this,local_70);
    return;
  }
  uVar20 = 0;
  local_48 = param_2 & 0xffffffff;
  __dest = param_3;
LAB_004099fa:
  if (this[0x58] == (hb_buffer_t)0x0) goto LAB_00409fd6;
  uVar9 = *(ushort *)(param_5 + uVar20 * 4);
  uVar9 = uVar9 << 8 | uVar9 >> 8;
  uVar19 = (uint)param_2;
  if (uVar9 < uVar19) {
    iVar10 = *(int *)(this + 0x5c);
    if (this[0x5a] != (hb_buffer_t)0x0) {
      iVar10 = *(int *)(this + 100);
    }
    uVar25 = (*(int *)(this + 0x60) - *(int *)(this + 0x5c)) + iVar10;
    uVar12 = (ulong)(uint)uVar9;
    uVar15 = *(uint *)((long)__dest + uVar12 * 4);
    if (uVar15 < uVar25) {
      uVar11 = hb_buffer_t::move_to(this,uVar15);
      if (((char)uVar11 == '\0') || (*(int *)(this + 200) < 1)) goto LAB_00409fd6;
      phVar26 = *(hb_buffer_t **)(param_1 + 0xa0);
      if (*(long *)(phVar26 + 0xd0) != 0) {
        uVar11 = extraout_XMM0_Qa;
        if (this[0x5a] != (hb_buffer_t)0x0) {
          hVar4 = phVar26[0x5a];
          uVar5 = *(undefined4 *)(phVar26 + 0x5c);
          uVar17 = *(undefined4 *)(phVar26 + 100);
          uVar11 = hb_buffer_t::sync(phVar26);
          if ((char)uVar11 == '\0') {
            uVar17 = uVar5;
          }
          *(undefined4 *)(phVar26 + 0x5c) = uVar17;
          uVar11 = extraout_XMM0_Qa_00;
          if (hVar4 != (hb_buffer_t)0x0) {
            phVar26[0x5a] = (hb_buffer_t)0x1;
            *(undefined4 *)(phVar26 + 100) = uVar17;
          }
        }
        uVar14 = *(ushort *)(param_5 + 2 + uVar20 * 4);
        uVar22 = (ulong)*(uint *)(this + 0x5c);
        hb_buffer_t::message
                  (uVar11,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                   in_XMM6._0_8_,in_XMM7._0_8_,*(hb_buffer_t **)(param_1 + 0xa0),
                   *(undefined8 *)(param_1 + 0x90),"recursing to lookup %u at %u",
                   (ulong)(ushort)(uVar14 << 8 | uVar14 >> 8),uVar22,param_6,
                   in_stack_ffffffffffffff78);
        phVar26 = *(hb_buffer_t **)(param_1 + 0xa0);
      }
      iVar10 = *(int *)(param_1 + 0x138);
      if ((iVar10 != 0) && (pcVar6 = *(code **)(param_1 + 0xe8), pcVar6 != (code *)0x0)) {
        uVar14 = *(ushort *)(param_5 + 2 + uVar20 * 4);
        iVar18 = *(int *)(phVar26 + 200);
        *(int *)(phVar26 + 200) = iVar18 + -1;
        if (0 < iVar18) {
          uVar14 = uVar14 << 8 | uVar14 >> 8;
          *(int *)(param_1 + 0x138) = iVar10 + -1;
          cVar8 = (*pcVar6)(param_1,uVar14,uVar14);
          in_XMM1._8_8_ = extraout_XMM1_Qb;
          in_XMM1._0_8_ = (double)extraout_XMM1_Qa;
          *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
          if (cVar8 == '\0') goto LAB_004099ed;
          phVar26 = *(hb_buffer_t **)(param_1 + 0xa0);
          uVar24 = extraout_XMM0_Qb;
          if (*(long *)(phVar26 + 0xd0) != 0) {
            uVar11 = extraout_XMM0_Qa_01;
            if (this[0x5a] != (hb_buffer_t)0x0) {
              hVar4 = phVar26[0x5a];
              uVar5 = *(undefined4 *)(phVar26 + 0x5c);
              uVar17 = *(undefined4 *)(phVar26 + 100);
              uVar11 = hb_buffer_t::sync(phVar26);
              if ((char)uVar11 == '\0') {
                uVar17 = uVar5;
              }
              *(undefined4 *)(phVar26 + 0x5c) = uVar17;
              uVar11 = extraout_XMM0_Qa_02;
              if (hVar4 != (hb_buffer_t)0x0) {
                phVar26[0x5a] = (hb_buffer_t)0x1;
                *(undefined4 *)(phVar26 + 100) = uVar17;
              }
            }
            uVar14 = *(ushort *)(param_5 + 2 + uVar20 * 4);
            hb_buffer_t::message
                      (uVar11,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                       in_XMM6._0_8_,in_XMM7._0_8_,*(hb_buffer_t **)(param_1 + 0xa0),
                       *(undefined8 *)(param_1 + 0x90),"recursed to lookup %u",
                       (ulong)(ushort)(uVar14 << 8 | uVar14 >> 8),uVar22,param_6,
                       in_stack_ffffffffffffff78);
            uVar24 = extraout_XMM0_Qb_00;
          }
          iVar10 = *(int *)(this + 0x5c);
          if (this[0x5a] != (hb_buffer_t)0x0) {
            iVar10 = *(int *)(this + 100);
          }
          iVar10 = (iVar10 - (*(int *)(this + 0x5c) + uVar25)) + *(int *)(this + 0x60);
          if (iVar10 != 0) {
            uVar15 = local_70 + iVar10;
            local_70 = *(uint *)((long)__dest + uVar12 * 4);
            iVar18 = local_70 - uVar15;
            if (iVar18 == 0 || (int)local_70 < (int)uVar15) {
              iVar18 = 0;
              local_70 = uVar15;
            }
            iVar18 = iVar18 + iVar10;
            uVar15 = uVar9 + 1;
            iVar10 = iVar18;
            if (iVar18 < 1) {
              iVar10 = uVar15 - uVar19;
              if ((int)(uVar15 - uVar19) <= iVar18) {
                iVar10 = iVar18;
              }
              uVar25 = uVar15 - iVar10;
              local_6c = iVar10 + uVar19;
            }
            else {
              local_6c = iVar18 + uVar19;
              if (0x40 < local_6c) goto LAB_00409fd6;
              uVar25 = uVar15;
              if ((uint)local_48 < local_6c) {
                uVar23 = local_48 & 0xffffffff;
                if ((uint)local_48 < 5) {
                  uVar23 = 4;
                }
                in_XMM1._0_8_ = (double)local_6c;
                uVar16 = -(ulong)((double)uVar23 * DAT_006533a0 <= in_XMM1._0_8_);
                auVar32._0_8_ = ~uVar16 & (ulong)((double)uVar23 * DAT_006533a0);
                auVar32._8_8_ = 0;
                auVar31._0_8_ = uVar16 & (ulong)in_XMM1._0_8_;
                auVar31._8_8_ = uVar24 & in_XMM1._8_8_;
                in_XMM2 = auVar31 | auVar32;
                local_48 = (ulong)in_XMM2._0_8_;
                if (__dest == param_3) {
                  __dest = malloc((local_48 & 0xffffffff) << 2);
                  if (__dest == (void *)0x0) {
                    __dest = (void *)0x0;
                    if (param_3 != (void *)0x0) goto LAB_00409fdd;
                    goto LAB_00409fe7;
                  }
                  memcpy(__dest,param_3,(param_2 & 0xffffffff) << 2);
                }
                else {
                  pvVar13 = realloc(__dest,(local_48 & 0xffffffff) << 2);
                  if (pvVar13 == (void *)0x0) goto LAB_00409fd6;
                  __dest = pvVar13;
                }
              }
              else {
              }
            }
            pvVar13 = (void *)((long)__dest + (ulong)uVar25 * 4);
            memmove((void *)((long)pvVar13 + (long)iVar10 * 4),pvVar13,(ulong)(uVar19 - uVar25) << 2
                   );
            in_XMM7 = _DAT_0065d590;
            in_XMM6 = _DAT_005de0b0;
            in_XMM5 = _DAT_005de0a0;
            in_XMM4 = _DAT_005de090;
            uVar25 = uVar25 + iVar10;
            in_XMM3._8_4_ = 0xffffffff;
            in_XMM3._0_8_ = 0xffffffffffffffff;
            in_XMM3._12_4_ = 0xffffffff;
            if (uVar15 < uVar25) {
              uVar22 = uVar12 + 1;
              iVar18 = *(int *)((long)__dest + uVar12 * 4);
              uVar24 = ~uVar12 + (ulong)uVar25;
              if (7 < uVar24) {
                param_6 = uVar24 & 0xfffffffffffffff8;
                iVar27 = iVar18 + juce::jpeglibNamespace::jpeg_zigzag_order2._0_4_;
                iVar28 = iVar18 + juce::jpeglibNamespace::jpeg_zigzag_order2._4_4_;
                iVar29 = iVar18 + juce::jpeglibNamespace::jpeg_zigzag_order2._8_4_;
                iVar30 = iVar18 + juce::jpeglibNamespace::jpeg_zigzag_order2._12_4_;
                uVar23 = (param_6 - 8 >> 3) + 1;
                iVar33 = (int)DAT_005de090;
                iVar34 = DAT_005de090._4_4_;
                iVar35 = DAT_005de090._8_4_;
                iVar36 = DAT_005de090._12_4_;
                if (param_6 - 8 == 0) {
                  lVar21 = 0;
LAB_00409d9b:
                  in_XMM1._0_4_ = iVar27 + 1;
                  in_XMM1._4_4_ = iVar28 + 1;
                  in_XMM1._8_4_ = iVar29 + 1;
                  in_XMM1._12_4_ = iVar30 + 1;
                  *(undefined1 (*) [16])((long)__dest + (lVar21 + uVar22) * 4) = in_XMM1;
                  piVar1 = (int *)((long)__dest + (lVar21 + uVar22) * 4 + 0x10);
                  *piVar1 = iVar27 + iVar33;
                  piVar1[1] = iVar28 + iVar34;
                  piVar1[2] = iVar29 + iVar35;
                  piVar1[3] = iVar30 + iVar36;
                }
                else {
                  uVar16 = uVar23 & 0xfffffffffffffffe;
                  lVar21 = 0;
                  do {
                    piVar1 = (int *)((long)__dest + lVar21 * 4 + uVar12 * 4 + 4);
                    *piVar1 = iVar27 + 1;
                    piVar1[1] = iVar28 + 1;
                    piVar1[2] = iVar29 + 1;
                    piVar1[3] = iVar30 + 1;
                    piVar1 = (int *)((long)__dest + lVar21 * 4 + uVar12 * 4 + 0x14);
                    *piVar1 = iVar27 + iVar33;
                    piVar1[1] = iVar28 + iVar34;
                    piVar1[2] = iVar29 + iVar35;
                    piVar1[3] = iVar30 + iVar36;
                    in_XMM1._0_4_ = iVar27 + in_XMM5._0_4_;
                    in_XMM1._4_4_ = iVar28 + in_XMM5._4_4_;
                    in_XMM1._8_4_ = iVar29 + in_XMM5._8_4_;
                    in_XMM1._12_4_ = iVar30 + in_XMM5._12_4_;
                    in_XMM2._0_4_ = iVar27 + in_XMM6._0_4_;
                    in_XMM2._4_4_ = iVar28 + in_XMM6._4_4_;
                    in_XMM2._8_4_ = iVar29 + in_XMM6._8_4_;
                    in_XMM2._12_4_ = iVar30 + in_XMM6._12_4_;
                    *(undefined1 (*) [16])((long)__dest + lVar21 * 4 + uVar12 * 4 + 0x24) = in_XMM1;
                    *(undefined1 (*) [16])((long)__dest + lVar21 * 4 + uVar12 * 4 + 0x34) = in_XMM2;
                    lVar21 = lVar21 + 0x10;
                    iVar27 = iVar27 + in_XMM7._0_4_;
                    iVar28 = iVar28 + in_XMM7._4_4_;
                    iVar29 = iVar29 + in_XMM7._8_4_;
                    iVar30 = iVar30 + in_XMM7._12_4_;
                    uVar16 = uVar16 - 2;
                  } while (uVar16 != 0);
                  if ((uVar23 & 1) != 0) goto LAB_00409d9b;
                }
                if (uVar24 == param_6) goto LAB_00409def;
                iVar18 = iVar18 + (int)param_6;
                uVar22 = uVar22 + param_6;
              }
              lVar21 = 0;
              do {
                *(int *)((long)__dest + lVar21 * 4 + uVar22 * 4) = iVar18 + 1 + (int)lVar21;
                lVar21 = lVar21 + 1;
              } while (uVar25 - uVar22 != lVar21);
            }
LAB_00409def:
            param_2 = (ulong)local_6c;
            if (uVar25 < local_6c) {
              uVar12 = (ulong)uVar25;
              uVar24 = local_6c - uVar12;
              if (7 < uVar24) {
                uVar22 = uVar24 & 0xfffffffffffffff8;
                param_6 = (uVar22 - 8 >> 3) + 1;
                if (uVar22 - 8 == 0) {
                  lVar21 = 0;
LAB_00409ec3:
                  lVar21 = lVar21 + uVar12;
                  piVar1 = (int *)((long)__dest + lVar21 * 4);
                  piVar2 = (int *)((long)__dest + lVar21 * 4 + 0x10);
                  in_XMM1._0_4_ = *piVar1 + iVar10;
                  in_XMM1._4_4_ = piVar1[1] + iVar10;
                  in_XMM1._8_4_ = piVar1[2] + iVar10;
                  in_XMM1._12_4_ = piVar1[3] + iVar10;
                  in_XMM2._0_4_ = *piVar2 + iVar10;
                  in_XMM2._4_4_ = piVar2[1] + iVar10;
                  in_XMM2._8_4_ = piVar2[2] + iVar10;
                  in_XMM2._12_4_ = piVar2[3] + iVar10;
                  *(undefined1 (*) [16])((long)__dest + lVar21 * 4) = in_XMM1;
                  *(undefined1 (*) [16])((long)__dest + lVar21 * 4 + 0x10) = in_XMM2;
                }
                else {
                  uVar23 = param_6 & 0xfffffffffffffffe;
                  lVar7 = uVar12 * 4 + 0x30;
                  lVar21 = 0;
                  do {
                    piVar2 = (int *)((long)__dest + lVar21 * 4 + uVar12 * 4);
                    piVar3 = (int *)((long)__dest + lVar21 * 4 + uVar12 * 4 + 0x10);
                    piVar1 = (int *)((long)__dest + lVar21 * 4 + uVar12 * 4 + 0x20);
                    iVar18 = *piVar1;
                    iVar27 = piVar1[1];
                    iVar28 = piVar1[2];
                    iVar29 = piVar1[3];
                    piVar1 = (int *)((long)__dest + lVar21 * 4 + lVar7);
                    iVar30 = *piVar1;
                    iVar33 = piVar1[1];
                    iVar34 = piVar1[2];
                    iVar35 = piVar1[3];
                    in_XMM1._0_4_ = *piVar2 + iVar10;
                    in_XMM1._4_4_ = piVar2[1] + iVar10;
                    in_XMM1._8_4_ = piVar2[2] + iVar10;
                    in_XMM1._12_4_ = piVar2[3] + iVar10;
                    in_XMM2._0_4_ = *piVar3 + iVar10;
                    in_XMM2._4_4_ = piVar3[1] + iVar10;
                    in_XMM2._8_4_ = piVar3[2] + iVar10;
                    in_XMM2._12_4_ = piVar3[3] + iVar10;
                    *(undefined1 (*) [16])((long)__dest + lVar21 * 4 + uVar12 * 4) = in_XMM1;
                    *(undefined1 (*) [16])((long)__dest + lVar21 * 4 + uVar12 * 4 + 0x10) = in_XMM2;
                    in_XMM3._0_4_ = iVar18 + iVar10;
                    in_XMM3._4_4_ = iVar27 + iVar10;
                    in_XMM3._8_4_ = iVar28 + iVar10;
                    in_XMM3._12_4_ = iVar29 + iVar10;
                    in_XMM4._0_4_ = iVar30 + iVar10;
                    in_XMM4._4_4_ = iVar33 + iVar10;
                    in_XMM4._8_4_ = iVar34 + iVar10;
                    in_XMM4._12_4_ = iVar35 + iVar10;
                    *(undefined1 (*) [16])((long)__dest + lVar21 * 4 + uVar12 * 4 + 0x20) = in_XMM3;
                    *(undefined1 (*) [16])((long)__dest + lVar21 * 4 + lVar7) = in_XMM4;
                    lVar21 = lVar21 + 0x10;
                    uVar23 = uVar23 - 2;
                  } while (uVar23 != 0);
                  if ((param_6 & 1) != 0) goto LAB_00409ec3;
                }
                if (uVar24 == uVar22) goto LAB_004099ed;
                uVar12 = uVar12 + uVar22;
              }
              do {
                piVar1 = (int *)((long)__dest + uVar12 * 4);
                *piVar1 = *piVar1 + iVar10;
                uVar12 = uVar12 + 1;
              } while (local_6c != uVar12);
            }
          }
          goto LAB_004099ed;
        }
      }
      phVar26[0x59] = (hb_buffer_t)0x1;
    }
  }
LAB_004099ed:
  uVar20 = uVar20 + 1;
  if (uVar20 == param_4) goto LAB_00409fd6;
  goto LAB_004099fa;
LAB_00409fd6:
  if (__dest != param_3) {
LAB_00409fdd:
    free(__dest);
  }
  goto LAB_00409fe7;
}



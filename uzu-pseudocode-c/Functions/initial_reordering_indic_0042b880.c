// Function : initial_reordering_indic
// Namespace: 
// Entry    : 0042b880
// Prototype: ulong initial_reordering_indic(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, hb_buffer_t * param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0042b880 - 0042be61


/* WARNING: Unknown calling convention: __cdecl */
/* initial_reordering_indic(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

ulong __cdecl
initial_reordering_indic
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          long param_10,hb_buffer_t *param_11,undefined8 param_12,undefined8 param_13,
          undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  undefined7 extraout_var_06;
  ulong uVar10;
  long lVar11;
  undefined1 uVar12;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 uVar21;
  undefined1 in_stack_ffffffffffffff78;
  uint local_64;
  uint local_60;
  uint local_5c;
  long local_58;
  long local_50;
  uint local_44;
  ulong local_40;
  ulong local_38;
  
  uVar10 = 0;
  bVar7 = hb_buffer_t::message
                    (param_1_00,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,
                     param_11,param_10,"start reordering indic initial",param_12,param_13,param_14,
                     in_stack_ffffffffffffff78);
  if (bVar7) {
    plVar3 = *(long **)(param_9 + 0x88);
    local_44 = *(uint *)((long)plVar3 + 0xc);
    uVar21 = extraout_XMM0_Qa;
    local_58 = param_10;
    if (local_44 == 0xffffffff) {
      if (*(int *)(*plVar3 + 8) == 0) {
        local_44 = 0;
      }
      else {
        local_64 = 0;
        lVar4 = *(long *)(*(long *)(param_10 + 0x90) + 0x10);
        if (lVar4 == 0) {
          uVar21 = 0;
        }
        else {
          uVar21 = *(undefined8 *)(lVar4 + 0x10);
        }
        iVar8 = (**(code **)(*(long *)(param_10 + 0x90) + 0x30))
                          (param_10,*(undefined8 *)(param_10 + 0x98),*(int *)(*plVar3 + 8),&local_64
                           ,uVar21);
        uVar21 = extraout_XMM0_Qa_08;
        local_44 = 0;
        if (iVar8 != 0) {
          local_44 = local_64;
        }
      }
      *(uint *)((long)plVar3 + 0xc) = local_44;
    }
    local_50 = param_9;
    if ((local_44 != 0) && (uVar10 = (ulong)*(uint *)(param_11 + 0x60), uVar10 != 0)) {
      lVar4 = *(long *)(local_58 + 0x20);
      lVar11 = *(long *)(param_11 + 0x70);
      uVar9 = 0;
      local_40 = uVar10;
      do {
        if (*(char *)(lVar11 + 0x13 + uVar9 * 0x14) == '\x04') {
          local_60 = *(uint *)(lVar11 + uVar9 * 0x14);
          local_64 = local_44;
          local_5c = local_44;
          uVar1 = *(uint *)(plVar3 + 9);
          local_38 = uVar9;
          if ((ulong)uVar1 == 0) {
LAB_0042ba50:
            uVar1 = *(uint *)(plVar3 + 0xf);
            if ((ulong)uVar1 != 0) {
              lVar5 = plVar3[0xe];
              lVar15 = 0;
              do {
                bVar7 = hb_ot_layout_lookup_would_substitute
                                  (lVar4,(uint)*(ushort *)(lVar5 + lVar15),&local_64,2,
                                   (uint)*(byte *)(plVar3 + 0x10));
                iVar8 = (int)CONCAT71(extraout_var_01,bVar7);
                if (iVar8 != 0) break;
                bVar7 = (ulong)uVar1 * 0xc + -0xc != lVar15;
                lVar15 = lVar15 + 0xc;
              } while (bVar7);
              uVar12 = 8;
              uVar21 = extraout_XMM0_Qa_02;
              if (iVar8 != 0) goto LAB_0042b92f;
              uVar1 = *(uint *)(plVar3 + 0xf);
              if ((ulong)uVar1 != 0) {
                lVar5 = plVar3[0xe];
                lVar15 = 0;
                do {
                  bVar7 = hb_ot_layout_lookup_would_substitute
                                    (lVar4,(uint)*(ushort *)(lVar5 + lVar15),&local_60,2,
                                     (uint)*(byte *)(plVar3 + 0x10));
                  iVar8 = (int)CONCAT71(extraout_var_02,bVar7);
                  if (iVar8 != 0) break;
                  bVar7 = (ulong)uVar1 * 0xc + -0xc != lVar15;
                  lVar15 = lVar15 + 0xc;
                } while (bVar7);
                uVar12 = 8;
                uVar21 = extraout_XMM0_Qa_03;
                if (iVar8 != 0) goto LAB_0042b92f;
              }
            }
            uVar1 = *(uint *)(plVar3 + 0xc);
            if ((ulong)uVar1 != 0) {
              lVar5 = plVar3[0xb];
              lVar15 = 0;
              do {
                bVar7 = hb_ot_layout_lookup_would_substitute
                                  (lVar4,(uint)*(ushort *)(lVar5 + lVar15),&local_64,2,
                                   (uint)*(byte *)(plVar3 + 0xd));
                iVar8 = (int)CONCAT71(extraout_var_03,bVar7);
                if (iVar8 != 0) break;
                bVar7 = (ulong)uVar1 * 0xc + -0xc != lVar15;
                lVar15 = lVar15 + 0xc;
              } while (bVar7);
              uVar12 = 0xb;
              uVar21 = extraout_XMM0_Qa_04;
              if (iVar8 != 0) goto LAB_0042b92f;
              uVar1 = *(uint *)(plVar3 + 0xc);
              if ((ulong)uVar1 != 0) {
                lVar5 = plVar3[0xb];
                lVar15 = 0;
                do {
                  bVar7 = hb_ot_layout_lookup_would_substitute
                                    (lVar4,(uint)*(ushort *)(lVar5 + lVar15),&local_60,2,
                                     (uint)*(byte *)(plVar3 + 0xd));
                  iVar8 = (int)CONCAT71(extraout_var_04,bVar7);
                  if (iVar8 != 0) break;
                  bVar7 = (ulong)uVar1 * 0xc + -0xc != lVar15;
                  lVar15 = lVar15 + 0xc;
                } while (bVar7);
                uVar12 = 0xb;
                uVar21 = extraout_XMM0_Qa_05;
                if (iVar8 != 0) goto LAB_0042b92f;
              }
            }
            uVar1 = *(uint *)(plVar3 + 6);
            uVar12 = 4;
            if ((ulong)uVar1 != 0) {
              lVar5 = plVar3[5];
              lVar15 = 0;
              do {
                bVar7 = hb_ot_layout_lookup_would_substitute
                                  (lVar4,(uint)*(ushort *)(lVar5 + lVar15),&local_64,2,
                                   (uint)*(byte *)(plVar3 + 7));
                iVar8 = (int)CONCAT71(extraout_var_05,bVar7);
                if (iVar8 != 0) break;
                bVar7 = (ulong)uVar1 * 0xc + -0xc != lVar15;
                lVar15 = lVar15 + 0xc;
              } while (bVar7);
              uVar12 = 0xb;
              uVar21 = extraout_XMM0_Qa_06;
              if (iVar8 == 0) {
                uVar1 = *(uint *)(plVar3 + 6);
                uVar12 = 4;
                if ((ulong)uVar1 != 0) {
                  lVar5 = plVar3[5];
                  lVar15 = 0;
                  do {
                    bVar7 = hb_ot_layout_lookup_would_substitute
                                      (lVar4,(uint)*(ushort *)(lVar5 + lVar15),&local_60,2,
                                       (uint)*(byte *)(plVar3 + 7));
                    iVar8 = (int)CONCAT71(extraout_var_06,bVar7);
                    if (iVar8 != 0) break;
                    bVar7 = (ulong)uVar1 * 0xc + -0xc != lVar15;
                    lVar15 = lVar15 + 0xc;
                  } while (bVar7);
                  uVar12 = 4;
                  uVar21 = extraout_XMM0_Qa_07;
                  if (iVar8 != 0) {
                    uVar12 = 0xb;
                  }
                }
              }
            }
          }
          else {
            lVar5 = plVar3[8];
            lVar15 = 0;
            do {
              bVar7 = hb_ot_layout_lookup_would_substitute
                                (lVar4,(uint)*(ushort *)(lVar5 + lVar15),&local_64,2,
                                 (uint)*(byte *)(plVar3 + 10));
              iVar8 = (int)CONCAT71(extraout_var,bVar7);
              if (iVar8 != 0) break;
              bVar7 = (ulong)uVar1 * 0xc + -0xc != lVar15;
              lVar15 = lVar15 + 0xc;
            } while (bVar7);
            uVar12 = 8;
            uVar21 = extraout_XMM0_Qa_00;
            if (iVar8 == 0) {
              uVar1 = *(uint *)(plVar3 + 9);
              if ((ulong)uVar1 != 0) {
                lVar5 = plVar3[8];
                lVar15 = 0;
                do {
                  bVar7 = hb_ot_layout_lookup_would_substitute
                                    (lVar4,(uint)*(ushort *)(lVar5 + lVar15),&local_60,2,
                                     (uint)*(byte *)(plVar3 + 10));
                  iVar8 = (int)CONCAT71(extraout_var_00,bVar7);
                  if (iVar8 != 0) break;
                  bVar7 = (ulong)uVar1 * 0xc + -0xc != lVar15;
                  lVar15 = lVar15 + 0xc;
                } while (bVar7);
                uVar12 = 8;
                uVar21 = extraout_XMM0_Qa_01;
                if (iVar8 != 0) goto LAB_0042b92f;
              }
              goto LAB_0042ba50;
            }
          }
LAB_0042b92f:
          *(undefined1 *)(lVar11 + uVar9 * 0x14 + 0x13) = uVar12;
          uVar9 = local_38;
          uVar10 = local_40;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar10);
    }
    lVar4 = local_58;
    uVar9 = 0xb;
    uVar19 = 0xe;
    uVar20 = 0xe;
    uVar10 = hb_syllabic_insert_dotted_circles
                       (uVar21,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,
                        local_58,param_11,4,0xb,0xe,0xe);
    uVar10 = uVar10 & 0xffffffff;
    uVar1 = *(uint *)(param_11 + 0x60);
    uVar21 = extraout_XMM0_Qa_09;
    if (uVar1 != 0) {
      lVar11 = *(long *)(param_11 + 0x70);
      bVar14 = *(byte *)(lVar11 + 0xf);
      uVar18 = 0;
      do {
        if (uVar1 - 1 == uVar18) {
          uVar18 = (ulong)uVar1;
          break;
        }
        uVar18 = uVar18 + 1;
      } while (bVar14 == *(byte *)(lVar11 + 0xf + (uVar18 & 0xffffffff) * 0x14));
      uVar13 = 0;
      do {
        uVar9 = uVar18 & 0xffffffff;
        bVar14 = bVar14 & 0xf;
        uVar16 = (uint)uVar18;
        if ((bVar14 < 2) ||
           (((bVar14 == 2 || (bVar14 == 4)) &&
            ((*(char *)(*(long *)(local_50 + 0x88) + 9) == '\0' ||
             (*(char *)(lVar11 + 0x12 + (ulong)(uVar16 - 1) * 0x14) != '\v')))))) {
          uVar19 = uVar18 & 0xffffffff;
          uVar21 = initial_reordering_consonant_syllable
                             (local_50,*(long *)(lVar4 + 0x20),param_11,(uint)uVar13,uVar19);
        }
        uVar2 = *(uint *)(param_11 + 0x60);
        lVar11 = *(long *)(param_11 + 0x70);
        bVar14 = *(byte *)(lVar11 + 0xf + (uVar18 & 0xffffffff) * 0x14);
        uVar6 = uVar16 + 1;
        if (uVar16 + 1 < uVar2) {
          uVar6 = uVar2;
        }
        uVar18 = uVar18 & 0xffffffff;
        do {
          uVar17 = (int)uVar18 + 1;
          uVar18 = (ulong)uVar17;
          if (uVar2 <= uVar17) {
            uVar18 = (ulong)uVar6;
            break;
          }
        } while (bVar14 == *(byte *)(lVar11 + 0xf + (ulong)uVar17 * 0x14));
        uVar13 = uVar9;
      } while (uVar16 < uVar1);
    }
    hb_buffer_t::message
              (uVar21,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,param_11,lVar4,
               "end reordering indic initial",uVar9,uVar19,uVar20,in_stack_ffffffffffffff78);
  }
  return uVar10;
}



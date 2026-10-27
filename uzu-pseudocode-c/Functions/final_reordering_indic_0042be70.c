// Function : final_reordering_indic
// Namespace: 
// Entry    : 0042be70
// Prototype: undefined8 final_reordering_indic(undefined8 param_1_00, undefined8 param_2_00, long param_3, undefined8 param_4, hb_buffer_t * param_5, ulong param_6, byte * param_7, long * param_8)
// Body     : 0042be70 - 0042ce5e


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* final_reordering_indic(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 __cdecl
final_reordering_indic
          (undefined8 param_1_00,undefined8 param_2_00,long param_3,undefined8 param_4,
          hb_buffer_t *param_5,ulong param_6,byte *param_7,long *param_8)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined1 auVar35 [16];
  undefined8 uVar36;
  undefined4 uVar38;
  undefined1 in_XMM2 [16];
  undefined1 auVar37 [16];
  undefined8 uVar39;
  undefined1 in_XMM3 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar45;
  undefined1 in_XMM4 [16];
  undefined8 uVar46;
  undefined1 in_XMM5 [16];
  undefined8 uVar47;
  undefined1 in_XMM6 [16];
  undefined8 in_XMM7_Qa;
  undefined1 in_stack_ffffffffffffff38;
  
  if (*(int *)(param_5 + 0x60) != 0) {
    bVar6 = hb_buffer_t::message
                      (param_1_00,param_2_00,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_
                       ,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"start reordering indic final",
                       param_6,param_7,param_8,in_stack_ffffffffffffff38);
    auVar32._8_8_ = param_2_00;
    auVar32._0_8_ = extraout_XMM0_Qa;
    uVar47 = in_XMM6._0_8_;
    uVar46 = in_XMM5._0_8_;
    uVar45 = in_XMM4._0_8_;
    uVar39 = in_XMM3._0_8_;
    uVar36 = in_XMM2._0_8_;
    if (bVar6) {
      uVar4 = *(uint *)(param_5 + 0x60);
      if (uVar4 != 0) {
        lVar30 = *(long *)(param_5 + 0x70);
        uVar8 = 0;
        do {
          if (uVar4 - 1 == uVar8) {
            uVar8 = (ulong)uVar4;
            break;
          }
          uVar8 = uVar8 + 1;
        } while (*(char *)(lVar30 + 0xf) == *(char *)(lVar30 + 0xf + (uVar8 & 0xffffffff) * 0x14));
        uVar23 = 0;
LAB_0042bf20:
        uVar27 = uVar8 & 0xffffffff;
        param_8 = *(long **)(param_3 + 0x88);
        iVar12 = *(int *)((long)param_8 + 0xc);
        uVar28 = (uint)uVar23;
        uVar26 = (uint)uVar8;
        if ((uVar28 < uVar26) && (iVar12 != 0)) {
          lVar14 = uVar27 - uVar23;
          puVar17 = (undefined1 *)(uVar23 * 0x14 + 0x12 + lVar30);
          do {
            if ((*(int *)(puVar17 + -0x12) == iVar12) && ((~*(uint *)(puVar17 + -6) & 0x60) == 0)) {
              *puVar17 = 4;
              *(ushort *)(puVar17 + -6) = (ushort)*(uint *)(puVar17 + -6) & 0xff9f;
            }
            puVar17 = puVar17 + 0x14;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        uVar7 = *(uint *)(param_8 + 0x13);
        bVar6 = uVar7 != 0;
        uVar11 = uVar26 - uVar28;
        uVar25 = uVar23;
        if (uVar28 <= uVar26 && uVar11 != 0) {
          param_7 = (byte *)(uVar23 * 0x14 + 0x13 + lVar30);
          iVar12 = uVar11 - 2;
          pbVar22 = param_7;
          uVar19 = uVar28;
          do {
            uVar19 = uVar19 + 1;
            if (3 < *pbVar22) {
              uVar16 = (int)uVar25 + 1;
              if ((uVar7 == 0) || (uVar26 <= uVar16)) goto LAB_0042c11c;
              puVar20 = (uint *)((ulong)uVar19 * 0x14 + 4 + lVar30);
              goto LAB_0042c070;
            }
            uVar16 = (int)uVar25 + 1;
            uVar25 = (ulong)uVar16;
            pbVar22 = pbVar22 + 0x14;
            iVar12 = iVar12 + -1;
          } while (uVar26 != uVar16);
          goto LAB_0042c007;
        }
        uVar8 = (ulong)(uVar28 + 1);
        if (uVar28 + 1 < uVar26) {
          cVar2 = *(char *)(lVar30 + 0x13 + uVar23 * 0x14);
          goto joined_r0x0042cbca;
        }
        if (bVar6) goto LAB_0042c2e9;
        goto LAB_0042c5a0;
      }
LAB_0042ce2c:
      hb_buffer_t::message
                (auVar32._0_8_,auVar32._8_8_,uVar36,uVar39,uVar45,uVar46,uVar47,in_XMM7_Qa,param_5,
                 param_4,"end reordering indic final",param_6,param_7,param_8,
                 in_stack_ffffffffffffff38);
    }
    param_5[0xb8] = (hb_buffer_t)((byte)param_5[0xb8] & 0x3f);
  }
  return 0;
  while( true ) {
    uVar16 = uVar16 + 1;
    puVar20 = puVar20 + 5;
    iVar12 = iVar12 + -1;
    if (uVar26 == uVar16) break;
LAB_0042c070:
    if ((*puVar20 & uVar7) != 0) {
      uVar15 = (ulong)uVar16;
      uVar3 = *(ushort *)(lVar30 + 0xc + uVar15 * 0x14);
      if ((uVar3 & 0x70) != 0x30) {
        if (uVar26 <= uVar16) goto LAB_0042c10b;
        lVar14 = uVar15 * 0x14 + 0x10 + lVar30;
        if ((uVar3 & 0x20) != 0) goto LAB_0042c107;
        cVar2 = *(char *)(lVar30 + 0x12 + uVar15 * 0x14);
        goto joined_r0x0042c0d4;
      }
      break;
    }
  }
LAB_0042c110:
  if ((uint)uVar25 == uVar26) {
LAB_0042c007:
    uVar25 = uVar8 & 0xffffffff;
  }
  else {
    uVar16 = (uint)uVar25 + 1;
LAB_0042c11c:
    uVar7 = (uint)uVar25;
    if ((*(int *)(param_5 + 0x3c) == 0x4d6c796d) && (uVar16 < uVar26)) {
      do {
        uVar7 = (uint)uVar25;
        if (uVar16 < uVar26) {
          while ((((*(byte *)(lVar30 + 0xc + (ulong)uVar16 * 0x14) & 0x20) == 0 &&
                  (bVar1 = *(byte *)(lVar30 + 0x12 + (ulong)uVar16 * 0x14), bVar1 < 0x20)) &&
                 ((1 << (bVar1 & 0x1f) & 0x60U) != 0))) {
            uVar16 = uVar16 + 1;
            if (uVar26 == uVar16) goto LAB_0042c4b5;
          }
        }
        if (((uVar16 == uVar26) || ((*(byte *)(lVar30 + 0xc + (ulong)uVar16 * 0x14) & 0x20) != 0))
           || (*(char *)(lVar30 + 0x12 + (ulong)uVar16 * 0x14) != '\x04')) goto LAB_0042c4b5;
        uVar7 = uVar16 + 1;
        if (uVar16 + 1 < uVar26) {
          uVar7 = uVar26;
        }
        do {
          uVar31 = uVar16;
          uVar16 = uVar31 + 1;
          uVar19 = uVar7 - 1;
          if (uVar26 <= uVar16) goto LAB_0042c225;
          uVar15 = (ulong)uVar16;
          uVar19 = uVar31;
          if ((*(byte *)(lVar30 + 0xc + uVar15 * 0x14) & 0x20) != 0) goto LAB_0042c225;
          bVar1 = *(byte *)(lVar30 + 0x12 + uVar15 * 0x14);
          uVar31 = 1 << (bVar1 & 0x1f);
        } while ((bVar1 < 0x20) && ((uVar31 & 0x60) != 0));
        if ((bVar1 < 0x20) &&
           (((uVar31 & 0x58c06) != 0 &&
            (lVar14 = uVar15 * 0x14 + 0x10 + lVar30, *(char *)(lVar14 + 3) == '\b')))) {
          *(undefined1 *)(lVar14 + 3) = 4;
          uVar25 = (ulong)uVar16;
        }
LAB_0042c225:
        uVar16 = uVar19 + 2;
        uVar7 = (uint)uVar25;
      } while (uVar16 < uVar26);
    }
    else {
LAB_0042c4b5:
      uVar25 = (ulong)uVar7;
    }
    if (uVar28 < uVar7) {
      uVar25 = (ulong)((int)uVar25 + -1 + (uint)(*(byte *)(lVar30 + 0x13 + uVar25 * 0x14) < 5));
    }
  }
  if (((uint)uVar25 == uVar26) && (uVar28 < (uint)uVar25)) {
    uVar7 = uVar26 - 1;
    uVar25 = uVar8 & 0xffffffff;
    if ((*(byte *)(lVar30 + 0xc + (ulong)uVar7 * 0x14) & 0x20) == 0) {
      if (*(char *)(lVar30 + 0x12 + (ulong)uVar7 * 0x14) != '\x06') {
        uVar7 = uVar26;
      }
      uVar25 = (ulong)uVar7;
      goto LAB_0042c27d;
    }
LAB_0042c350:
    uVar8 = (ulong)(uVar28 + 1);
    if ((uVar28 + 1 < uVar26) && (uVar7 = (uint)uVar25, uVar28 < uVar7)) {
      uVar19 = ~(uint)(uVar7 == uVar26) + uVar7;
      if ((*(int *)(param_5 + 0x3c) != 0x4d6c796d) && (*(int *)(param_5 + 0x3c) != 0x54616d6c)) {
        do {
          if (uVar28 < uVar19) {
            pbVar22 = (byte *)(lVar30 + 0x12 + (ulong)uVar19 * 0x14);
            do {
              if ((((pbVar22[-6] & 0x20) == 0) && (*pbVar22 < 0x20)) &&
                 ((1 << (*pbVar22 & 0x1f) & 0x2090U) != 0)) {
                bVar5 = 1;
                uVar15 = (ulong)uVar19;
                bVar1 = *(byte *)(lVar30 + 0xc + uVar15 * 0x14);
                goto joined_r0x0042c8c6;
              }
              uVar19 = uVar19 - 1;
              pbVar22 = pbVar22 + -0x14;
            } while (uVar28 < uVar19);
            bVar1 = *(byte *)(lVar30 + 0xc + uVar23 * 0x14);
            uVar19 = uVar28;
            uVar15 = uVar23;
          }
          else {
            uVar15 = (ulong)uVar19;
            bVar1 = *(byte *)(lVar30 + 0xc + uVar15 * 0x14);
          }
          bVar5 = 0;
joined_r0x0042c8c6:
          if ((((bVar1 & 0x20) != 0) || (*(char *)(lVar30 + 0x12 + uVar15 * 0x14) != '\x04')) ||
             (*(char *)(uVar15 * 0x14 + lVar30 + 0x13) == '\x02')) goto LAB_0042c3aa;
          if ((uVar26 <= uVar19 + 1) ||
             ((bool)(bVar5 ^ 1) || *(char *)(lVar30 + 0x12 + (ulong)(uVar19 + 1) * 0x14) != '\x06'))
          break;
          uVar19 = uVar19 - 1;
        } while( true );
      }
      if ((uVar28 < uVar19) &&
         (uVar15 = (ulong)uVar19, *(char *)(lVar30 + 0x13 + uVar15 * 0x14) != '\x02')) {
        lVar14 = (ulong)(uVar19 - 1) * 0x14;
        iVar12 = -uVar19;
        lVar29 = lVar30;
        uVar7 = uVar19;
        do {
          uVar36 = auVar32._8_8_;
          iVar12 = iVar12 + 1;
          uVar19 = uVar19 - 1;
          if (*(char *)(lVar29 + 0x13 + lVar14) == '\x02') {
            uVar13 = (uint)uVar25;
            uVar31 = (uint)(uVar13 <= uVar7 && uVar19 < uVar13);
            uVar38 = *(undefined4 *)(lVar29 + 0x10 + lVar14);
            uVar39 = *(undefined8 *)(lVar29 + lVar14);
            uVar45 = ((undefined8 *)(lVar29 + lVar14))[1];
            memmove((void *)(lVar29 + lVar14),(void *)(lVar29 + uVar15 * 0x14),
                    (ulong)(uVar7 + iVar12) * 0x14);
            auVar32._8_8_ = uVar36;
            auVar32._0_8_ = uVar39;
            puVar10 = (undefined8 *)(lVar30 + (ulong)uVar7 * 0x14);
            *puVar10 = uVar39;
            puVar10[1] = uVar45;
            *(undefined4 *)(lVar30 + 0x10 + (ulong)uVar7 * 0x14) = uVar38;
            uVar16 = (uVar13 - uVar31) + 1;
            if (uVar26 <= uVar16) {
              uVar16 = uVar26;
            }
            if (1 < uVar16 - uVar7) {
              auVar32 = hb_buffer_t::merge_clusters_impl(param_5,uVar7,uVar16);
            }
            uVar25 = (ulong)(uVar13 - uVar31);
            uVar7 = uVar7 - 1;
          }
          lVar29 = lVar29 + -0x14;
        } while (uVar28 < uVar19);
      }
      else {
LAB_0042c3aa:
        uVar15 = uVar23;
        do {
          uVar19 = (uint)uVar15;
          if (*param_7 == 2) {
            uVar16 = uVar7 + 1;
            if (uVar26 <= uVar7 + 1) {
              uVar16 = uVar26;
            }
            if (1 < uVar16 - uVar19) {
              auVar32 = hb_buffer_t::merge_clusters_impl(param_5,uVar19,uVar16);
              cVar2 = *(char *)(lVar30 + 0x13 + uVar23 * 0x14);
              goto joined_r0x0042cbca;
            }
            break;
          }
          uVar15 = (ulong)(uVar19 + 1);
          param_7 = param_7 + 0x14;
        } while (uVar7 != uVar19 + 1);
      }
    }
    if (uVar26 <= (uint)uVar8) goto joined_r0x0042c2e3;
LAB_0042c4fb:
    cVar2 = *(char *)(lVar30 + 0x13 + uVar23 * 0x14);
joined_r0x0042cbca:
    if (cVar2 != '\x01') goto joined_r0x0042c2e3;
    uVar36 = auVar32._8_8_;
    uVar7 = (uint)uVar25;
    if ((*(char *)(uVar23 * 0x14 + lVar30 + 0x12) == '\x0e') ==
        ((*(ushort *)(lVar30 + 0xc + uVar23 * 0x14) & 0x60) == 0x20)) goto joined_r0x0042c2e3;
    iVar12 = *(int *)(*param_8 + 0xc);
    param_7 = (byte *)(uVar8 & 0xffffffff);
    if (iVar12 == 0xc) {
LAB_0042c54e:
      if ((uint)uVar8 < uVar7) {
        pcVar9 = (char *)((long)param_7 * 0x14 + 0x12 + lVar30);
        uVar25 = uVar8;
        do {
          uVar19 = (uint)uVar25;
          if (((pcVar9[-6] & 0x20U) == 0) && (*pcVar9 == '\x04')) goto LAB_0042c9b4;
          uVar25 = (ulong)(uVar19 + 1);
          pcVar9 = pcVar9 + 0x14;
        } while (uVar7 != uVar19 + 1);
      }
      uVar19 = uVar26 - 1;
      if (uVar28 < uVar26 - 1) {
        uVar19 = uVar28;
      }
      uVar25 = uVar27;
      do {
        uVar31 = (int)uVar25 - 1;
        uVar25 = (ulong)uVar31;
        if (uVar31 <= uVar28) {
          uVar25 = (ulong)uVar19;
          cVar2 = *(char *)((long)param_8 + 9);
          uVar31 = uVar19;
          goto joined_r0x0042cbdd;
        }
      } while (*(char *)(lVar30 + 0x13 + (ulong)uVar31 * 0x14) == '\r');
      cVar2 = *(char *)((long)param_8 + 9);
joined_r0x0042cbdd:
      if ((((cVar2 == '\0') &&
           (uVar31 = (uint)uVar25, (*(byte *)(lVar30 + 0xc + uVar25 * 0x14) & 0x20) == 0)) &&
          (*(char *)(lVar30 + 0x12 + uVar25 * 0x14) == '\x04')) && (uVar7 + 1 < uVar31)) {
        uVar15 = (ulong)(uVar7 + 1);
        pbVar22 = (byte *)(uVar15 * 0x14 + 0x12 + lVar30);
        do {
          uVar31 = (int)uVar25 - (uint)((0x2080U >> (*pbVar22 & 0x1f) & 1) != 0 && *pbVar22 < 0x20);
          uVar25 = (ulong)uVar31;
          uVar15 = uVar15 + 1;
          pbVar22 = pbVar22 + 0x14;
        } while (uVar15 < uVar25);
      }
    }
    else {
      if ((uint)uVar8 < uVar7) {
        uVar25 = uVar8;
        do {
          uVar19 = (uint)uVar25;
          if (((*(byte *)(lVar30 + 0xc + (uVar25 & 0xffffffff) * 0x14) & 0x20) == 0) &&
             (*(char *)(lVar30 + 0x12 + (uVar25 & 0xffffffff) * 0x14) == '\x04')) goto LAB_0042c9b4;
          uVar25 = (ulong)(uVar19 + 1);
        } while (uVar7 != uVar19 + 1);
      }
      if (iVar12 == 9) {
        uVar19 = uVar7 + 1;
        if (uVar7 + 1 < uVar26) {
          uVar19 = uVar26;
        }
        uVar16 = uVar7 - 1;
        do {
          uVar31 = uVar19 - 1;
          if (uVar26 <= uVar16 + 2) break;
          bVar1 = *(byte *)(lVar30 + 0x13 + (ulong)(uVar16 + 2) * 0x14);
          uVar16 = uVar16 + 1;
        } while ((0x1f < bVar1) || (uVar31 = uVar16, (1 << (bVar1 & 0x1f) & 0x3800U) == 0));
      }
      else {
        if (iVar12 != 5) goto LAB_0042c54e;
        uVar19 = uVar7 + 1;
        if (uVar7 + 1 < uVar26) {
          uVar19 = uVar26;
        }
        uVar16 = uVar7 - 1;
        do {
          uVar13 = uVar16 + 2;
          uVar31 = uVar19 - 1;
          if (uVar26 <= uVar13) break;
          uVar16 = uVar16 + 1;
          uVar31 = uVar16;
        } while (*(byte *)(lVar30 + 0x13 + (ulong)uVar13 * 0x14) < 6);
      }
      if (uVar26 <= uVar31) goto LAB_0042c54e;
    }
LAB_0042cd63:
    if (1 < (uVar31 + 1) - uVar28) {
      hb_buffer_t::merge_clusters_impl(param_5,uVar28,uVar31 + 1);
      uVar36 = extraout_XMM1_Qa_00;
    }
    puVar10 = (undefined8 *)(uVar23 * 0x14 + lVar30);
    uVar38 = *(undefined4 *)(puVar10 + 2);
    uVar39 = *puVar10;
    uVar45 = puVar10[1];
    memmove(puVar10,(void *)((long)param_7 * 0x14 + lVar30),(ulong)(uVar31 - uVar28) * 0x14);
    auVar32._8_8_ = uVar36;
    auVar32._0_8_ = uVar39;
    puVar10 = (undefined8 *)(lVar30 + (ulong)uVar31 * 0x14);
    *puVar10 = uVar39;
    puVar10[1] = uVar45;
    *(undefined4 *)(lVar30 + 0x10 + (ulong)uVar31 * 0x14) = uVar38;
    uVar25 = (ulong)(uVar7 - (uVar7 <= uVar31 && uVar28 < uVar7));
    if (bVar6) goto LAB_0042c2e9;
  }
  else {
LAB_0042c27d:
    if ((uVar26 <= (uint)uVar25) || ((uint)uVar25 <= uVar28)) goto LAB_0042c350;
    do {
      if (((*(byte *)(lVar30 + 0xc + uVar25 * 0x14) & 0x20) != 0) ||
         ((bVar1 = *(byte *)(lVar30 + 0x12 + uVar25 * 0x14), 0x1f < bVar1 ||
          ((1 << (bVar1 & 0x1f) & 0x18U) == 0)))) goto LAB_0042c350;
      uVar7 = (int)uVar25 - 1;
      uVar25 = (ulong)uVar7;
    } while (uVar28 < uVar7);
    uVar8 = (ulong)(uVar28 + 1);
    uVar25 = uVar23;
    if (uVar28 + 1 < uVar26) goto LAB_0042c4fb;
joined_r0x0042c2e3:
    if (bVar6) {
LAB_0042c2e9:
      uVar36 = auVar32._8_8_;
      uVar7 = (uint)uVar25;
      if (uVar7 + 1 < uVar26) {
        param_7 = (byte *)(ulong)*(uint *)(param_8 + 0x13);
        uVar15 = (ulong)(uVar7 + 1);
        puVar20 = (uint *)(uVar15 * 0x14 + 4 + lVar30);
        iVar18 = 1;
        iVar12 = -2;
        do {
          if ((*puVar20 & *(uint *)(param_8 + 0x13)) != 0) {
            if ((*(ushort *)(lVar30 + 0xc + (uVar15 & 0xffffffff) * 0x14) & 0x60) == 0x20) {
              if (((*(int *)(param_5 + 0x3c) == 0x4d6c796d) ||
                  (*(int *)(param_5 + 0x3c) == 0x54616d6c)) || (uVar7 <= uVar28)) goto LAB_0042c44d;
              pbVar22 = (byte *)((ulong)(uVar7 - 1) * 0x14 + 0x12 + lVar30);
              goto LAB_0042c430;
            }
            break;
          }
          uVar15 = uVar15 + 1;
          iVar18 = iVar18 + 1;
          iVar12 = iVar12 + -1;
          puVar20 = puVar20 + 5;
        } while ((uVar7 - uVar26) + iVar18 != 0);
      }
    }
  }
LAB_0042c5a0:
  cVar2 = *(char *)(lVar30 + 0x13 + uVar23 * 0x14);
  goto joined_r0x0042cd3e;
joined_r0x0042c0d4:
  if (cVar2 != '\x04') goto LAB_0042c107;
  bVar6 = iVar12 == 0;
  iVar12 = iVar12 + -1;
  if (bVar6) {
    bVar6 = false;
    goto LAB_0042c007;
  }
  uVar16 = uVar16 + 1;
  uVar25 = (ulong)uVar16;
  lVar14 = lVar30 + 0x10 + uVar25 * 0x14;
  if ((*(byte *)(lVar30 + 0xc + uVar25 * 0x14) & 0x20) != 0) goto LAB_0042c107;
  cVar2 = *(char *)(lVar30 + 0x12 + uVar25 * 0x14);
  goto joined_r0x0042c0d4;
LAB_0042c107:
  *(undefined1 *)(lVar14 + 3) = 4;
LAB_0042c10b:
  bVar6 = false;
  uVar25 = (ulong)uVar16;
  goto LAB_0042c110;
LAB_0042c9b4:
  uVar16 = uVar19 + 1;
  uVar31 = uVar19;
  if ((uVar16 < uVar7) && ((*(byte *)(lVar30 + 0xc + (ulong)uVar16 * 0x14) & 0x20) == 0)) {
    bVar1 = *(byte *)(lVar30 + 0x12 + (ulong)uVar16 * 0x14);
    if ((0x60U >> (bVar1 & 0x1f) & 1) == 0) {
      uVar16 = uVar19;
    }
    uVar31 = uVar16;
    if (0x1f < bVar1) {
      uVar31 = uVar19;
    }
  }
  goto LAB_0042cd63;
  while( true ) {
    uVar19 = (int)uVar25 - 1;
    uVar25 = (ulong)uVar19;
    pbVar22 = pbVar22 + -0x14;
    if (uVar19 <= uVar28) break;
LAB_0042c430:
    if ((((pbVar22[-6] & 0x20) == 0) && (*pbVar22 < 0x20)) &&
       ((1 << (*pbVar22 & 0x1f) & 0x2090U) != 0)) goto LAB_0042c44d;
  }
  uVar25 = uVar23;
LAB_0042cca2:
  uVar19 = (uint)uVar25;
  if (1 < (uVar7 - uVar19) - iVar12) {
    hb_buffer_t::merge_clusters_impl(param_5,uVar19,uVar7 - iVar12);
    uVar36 = extraout_XMM1_Qa;
  }
  puVar10 = (undefined8 *)((uVar15 & 0xffffffff) * 0x14 + lVar30);
  uVar38 = *(undefined4 *)(puVar10 + 2);
  uVar39 = *puVar10;
  uVar45 = puVar10[1];
  memmove((void *)(lVar30 + (ulong)(uVar19 + 1) * 0x14),(void *)(uVar25 * 0x14 + lVar30),
          (ulong)((uVar7 - uVar19) + iVar18) * 0x14);
  auVar32._8_8_ = uVar36;
  auVar32._0_8_ = uVar39;
  puVar10 = (undefined8 *)(lVar30 + uVar25 * 0x14);
  *puVar10 = uVar39;
  puVar10[1] = uVar45;
  *(undefined4 *)(lVar30 + 0x10 + uVar25 * 0x14) = uVar38;
  cVar2 = *(char *)(lVar30 + 0x13 + uVar23 * 0x14);
joined_r0x0042cd3e:
  if (cVar2 == '\x02') {
    if (uVar28 != 0) {
      uVar7 = uVar28 - 1;
      uVar25 = (ulong)uVar7;
      if ((0x1ffeU >> (*(uint *)(lVar30 + 0x10 + uVar25 * 0x14) & 0x1f) & 1) != 0) {
        uVar23 = uVar8 & 0xffffffff;
        if (*(uint *)(param_5 + 0x60) < (uint)uVar8) {
          uVar23 = (ulong)*(uint *)(param_5 + 0x60);
        }
        uVar19 = (uint)uVar23;
        if (1 < uVar19 - uVar7) {
          param_5[0xc0] = (hb_buffer_t)((byte)param_5[0xc0] | 0x20);
          lVar30 = *(long *)(param_5 + 0x70);
          param_7 = (byte *)0xffffffff;
          if (uVar19 != uVar7) {
            if (*(int *)(param_5 + 0x1c) == 2) {
              if (uVar7 < uVar19) {
                uVar15 = uVar23 - uVar25;
                param_7 = (byte *)0xffffffff;
                if (8 < uVar15) {
                  uVar24 = (ulong)((uint)uVar15 & 7);
                  if (uVar24 == 0) {
                    uVar24 = 8;
                  }
                  lVar14 = (uVar24 + uVar25) - uVar23;
                  puVar21 = (undefined4 *)(lVar30 + uVar25 * 0x14 + 0x94);
                  auVar33._8_4_ = 0xffffffff;
                  auVar33._0_8_ = 0xffffffffffffffff;
                  auVar33._12_4_ = 0xffffffff;
                  auVar35._8_4_ = 0xffffffff;
                  auVar35._0_8_ = 0xffffffffffffffff;
                  auVar35._12_4_ = 0xffffffff;
                  do {
                    in_XMM4._12_4_ = puVar21[-0x14];
                    in_XMM4._8_4_ = puVar21[-0x19];
                    in_XMM4._4_4_ = puVar21[-0x1e];
                    in_XMM4._0_4_ = puVar21[-0x23];
                    in_XMM5._12_4_ = *puVar21;
                    in_XMM5._8_4_ = puVar21[-5];
                    in_XMM5._4_4_ = puVar21[-10];
                    in_XMM5._0_4_ = puVar21[-0xf];
                    auVar40 = in_XMM4 ^ _DAT_006524b0;
                    auVar32 = auVar33 ^ _DAT_006524b0;
                    auVar41._0_4_ = -(uint)(auVar32._0_4_ < auVar40._0_4_);
                    auVar41._4_4_ = -(uint)(auVar32._4_4_ < auVar40._4_4_);
                    auVar41._8_4_ = -(uint)(auVar32._8_4_ < auVar40._8_4_);
                    auVar41._12_4_ = -(uint)(auVar32._12_4_ < auVar40._12_4_);
                    auVar33 = ~auVar41 & in_XMM4 | auVar33 & auVar41;
                    auVar40 = in_XMM5 ^ _DAT_006524b0;
                    auVar32 = auVar35 ^ _DAT_006524b0;
                    auVar42._0_4_ = -(uint)(auVar32._0_4_ < auVar40._0_4_);
                    auVar42._4_4_ = -(uint)(auVar32._4_4_ < auVar40._4_4_);
                    auVar42._8_4_ = -(uint)(auVar32._8_4_ < auVar40._8_4_);
                    auVar42._12_4_ = -(uint)(auVar32._12_4_ < auVar40._12_4_);
                    auVar35 = ~auVar42 & in_XMM5 | auVar35 & auVar42;
                    puVar21 = puVar21 + 0x28;
                    lVar14 = lVar14 + 8;
                  } while (lVar14 != 0);
                  uVar25 = (uVar15 - uVar24) + uVar25;
                  auVar32 = auVar33 ^ _DAT_006524b0;
                  auVar40 = auVar35 ^ _DAT_006524b0;
                  auVar43._0_4_ = -(uint)(auVar32._0_4_ < auVar40._0_4_);
                  auVar43._4_4_ = -(uint)(auVar32._4_4_ < auVar40._4_4_);
                  auVar43._8_4_ = -(uint)(auVar32._8_4_ < auVar40._8_4_);
                  auVar43._12_4_ = -(uint)(auVar32._12_4_ < auVar40._12_4_);
                  auVar35 = ~auVar43 & auVar35 | auVar33 & auVar43;
                  auVar40._0_8_ = auVar35._8_8_;
                  auVar40._8_4_ = auVar35._8_4_;
                  auVar40._12_4_ = auVar35._12_4_;
                  auVar32 = auVar35 ^ _DAT_006524b0;
                  auVar33 = auVar40 ^ _DAT_006524b0;
                  auVar37._0_4_ = -(uint)(auVar32._0_4_ < auVar33._0_4_);
                  auVar37._4_4_ = -(uint)(auVar32._4_4_ < auVar33._4_4_);
                  auVar37._8_4_ = -(uint)(auVar32._8_4_ < auVar33._8_4_);
                  auVar37._12_4_ = -(uint)(auVar32._12_4_ < auVar33._12_4_);
                  auVar33 = ~auVar37 & auVar40 | auVar35 & auVar37;
                  uVar38 = auVar33._4_4_;
                  auVar34._4_4_ = uVar38;
                  auVar34._0_4_ = uVar38;
                  auVar34._8_4_ = uVar38;
                  auVar34._12_4_ = uVar38;
                  auVar32 = auVar33 ^ _DAT_006524b0;
                  auVar35 = auVar34 ^ _DAT_006524b0;
                  auVar44._0_4_ = -(uint)(auVar32._0_4_ < auVar35._0_4_);
                  auVar44._4_4_ = -(uint)(auVar32._4_4_ < auVar35._4_4_);
                  auVar44._8_4_ = -(uint)(auVar32._8_4_ < auVar35._8_4_);
                  auVar44._12_4_ = -(uint)(auVar32._12_4_ < auVar35._12_4_);
                  in_XMM2 = auVar33 & auVar44;
                  in_XMM3 = ~auVar44 & auVar34 | in_XMM2;
                  param_7 = (byte *)(ulong)in_XMM3._0_4_;
                  in_XMM6 = _DAT_006524b0;
                }
                lVar14 = uVar23 - uVar25;
                puVar20 = (uint *)(lVar30 + uVar25 * 0x14 + 8);
                do {
                  if (*puVar20 < (uint)param_7) {
                    param_7 = (byte *)(ulong)*puVar20;
                  }
                  puVar20 = puVar20 + 5;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
            }
            else {
              uVar16 = *(uint *)(lVar30 + 8 + uVar25 * 0x14);
              uVar31 = *(uint *)(lVar30 + 8 + (ulong)(uVar19 - 1) * 0x14);
              param_7 = (byte *)(ulong)uVar16;
              if (uVar31 < uVar16) {
                param_7 = (byte *)(ulong)uVar31;
              }
            }
          }
          auVar32 = hb_buffer_t::_infos_set_glyph_flags(param_5,lVar30,uVar7,uVar19,(uint)param_7,3)
          ;
          in_stack_ffffffffffffff38 = (undefined1)uVar8;
          cVar2 = *(char *)((long)param_8 + 9);
          goto joined_r0x0042ca2c;
        }
        goto LAB_0042c7cc;
      }
    }
    puVar20 = (uint *)(lVar30 + 4 + uVar23 * 0x14);
    *puVar20 = *puVar20 | *(uint *)((long)param_8 + 0xb4);
  }
LAB_0042c7cc:
  in_stack_ffffffffffffff38 = (undefined1)uVar8;
  cVar2 = *(char *)((long)param_8 + 9);
joined_r0x0042ca2c:
  if (((cVar2 != '\0') && (1 < uVar11)) && (*(int *)(param_3 + 4) != 0x54616d6c)) {
    auVar32 = hb_buffer_t::merge_clusters_impl(param_5,uVar28,uVar26);
  }
  uVar47 = in_XMM6._0_8_;
  uVar46 = in_XMM5._0_8_;
  uVar45 = in_XMM4._0_8_;
  uVar39 = in_XMM3._0_8_;
  uVar36 = in_XMM2._0_8_;
  uVar28 = *(uint *)(param_5 + 0x60);
  param_6 = (ulong)uVar28;
  lVar30 = *(long *)(param_5 + 0x70);
  uVar7 = uVar26 + 1;
  if (uVar26 + 1 < uVar28) {
    uVar7 = uVar28;
  }
  uVar8 = uVar27;
  do {
    uVar11 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar11;
    if (uVar28 <= uVar11) {
      uVar8 = (ulong)uVar7;
      break;
    }
  } while (*(char *)(lVar30 + 0xf + uVar27 * 0x14) == *(char *)(lVar30 + 0xf + (ulong)uVar11 * 0x14)
          );
  uVar23 = uVar27;
  if (uVar4 <= uVar26) goto LAB_0042ce2c;
  goto LAB_0042bf20;
LAB_0042c44d:
  uVar19 = (uint)uVar25;
  if (uVar28 < uVar19) {
    if (((((*(byte *)(lVar30 + 0xc + (ulong)(uVar19 - 1) * 0x14) & 0x20) == 0) &&
         (*(char *)(lVar30 + 0x12 + (ulong)(uVar19 - 1) * 0x14) == '\x04')) && (uVar19 < uVar26)) &&
       ((*(byte *)(lVar30 + 0xc + uVar25 * 0x14) & 0x20) == 0)) {
      bVar1 = *(byte *)(lVar30 + 0x12 + uVar25 * 0x14);
      uVar25 = (ulong)(uVar19 + ((0x60U >> (bVar1 & 0x1f) & 1) != 0 && bVar1 < 0x20));
    }
  }
  goto LAB_0042cca2;
}



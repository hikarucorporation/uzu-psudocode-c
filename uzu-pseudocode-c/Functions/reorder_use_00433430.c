// Function : reorder_use
// Namespace: 
// Entry    : 00433430
// Prototype: undefined4 reorder_use(undefined8 param_1, undefined8 param_2_00, undefined8 param_3_00, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long param_10, hb_buffer_t * param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00433430 - 00433809


/* WARNING: Unknown calling convention: __cdecl */
/* reorder_use(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined4 __cdecl
reorder_use(undefined8 param_1,undefined8 param_2_00,undefined8 param_3_00,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
           undefined8 param_9,long param_10,hb_buffer_t *param_11,undefined8 param_12,
           undefined8 param_13,undefined8 param_14)

{
  undefined8 *__dest;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined1 uVar21;
  long in_stack_ffffffffffffff78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar7 = 0;
  bVar5 = hb_buffer_t::message
                    (param_1,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,param_11,
                     param_10,"start reordering USE",param_12,param_13,param_14,
                     (char)in_stack_ffffffffffffff78);
  if (bVar5) {
    uVar11 = 1;
    uVar15 = 0x12;
    uVar16 = 0xffffffff;
    uVar8 = hb_syllabic_insert_dotted_circles
                      (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2_00,param_3_00,param_4,
                       param_5,param_6,param_7,param_8,param_10,param_11,7,1,0x12,0xffffffff);
    uVar21 = (undefined1)in_stack_ffffffffffffff78;
    uVar7 = (undefined4)uVar8;
    uVar2 = *(uint *)(param_11 + 0x60);
    local_58 = extraout_XMM0_Da_00;
    uStack_54 = extraout_XMM0_Db_00;
    if (uVar2 != 0) {
      lVar20 = *(long *)(param_11 + 0x70);
      bVar6 = *(byte *)(lVar20 + 0xf);
      uVar11 = 0;
      do {
        if (uVar2 - 1 == uVar11) {
          uVar11 = (ulong)uVar2;
          break;
        }
        uVar11 = uVar11 + 1;
      } while (bVar6 == *(byte *)(lVar20 + 0xf + (uVar11 & 0xffffffff) * 0x14));
      uVar13 = 0;
      do {
        uVar15 = uVar11 & 0xffffffff;
        uVar14 = (uint)uVar11;
        if ((0xa7U >> (bVar6 & 0xf) & 1) != 0) {
          uVar18 = (uint)uVar13;
          lVar17 = uVar13 * 5;
          if ((1 < uVar14 - uVar18) && (*(char *)(lVar20 + 0x12 + uVar13 * 0x14) == '\x12')) {
            if (uVar18 + 1 < uVar14) {
              __dest = (undefined8 *)(lVar20 + uVar13 * 0x14);
              uVar19 = uVar14 - 1;
              uVar9 = (ulong)(uVar18 + 1);
              pbVar12 = (byte *)(lVar20 + uVar9 * 0x14 + 0x12);
              uVar11 = uVar9;
              do {
                bVar6 = *pbVar12;
                if ((bVar6 < 0x40) && ((1L << (bVar6 & 0x3f) & 0xe0ee7fc00000U) != 0)) {
LAB_004335d6:
                  uVar19 = (uint)uVar11 - 1;
LAB_004335dd:
                  if (1 < (uVar19 + 1) - uVar18) {
                    hb_buffer_t::merge_clusters_impl(param_11,uVar18,uVar19 + 1);
                  }
                  uVar3 = *(undefined4 *)(__dest + 2);
                  uVar8 = *__dest;
                  uVar16 = __dest[1];
                  memmove(__dest,(void *)(lVar20 + uVar9 * 0x14),(ulong)(uVar19 - uVar18) * 0x14);
                  local_58 = (undefined4)uVar8;
                  uStack_54 = (undefined4)((ulong)uVar8 >> 0x20);
                  uStack_50 = (undefined4)uVar16;
                  uStack_4c = (undefined4)((ulong)uVar16 >> 0x20);
                  puVar1 = (undefined4 *)(lVar20 + (ulong)uVar19 * 0x14);
                  *puVar1 = local_58;
                  puVar1[1] = uStack_54;
                  puVar1[2] = uStack_50;
                  puVar1[3] = uStack_4c;
                  *(undefined4 *)(lVar20 + 0x10 + (ulong)uVar19 * 0x14) = uVar3;
                  in_stack_ffffffffffffff78 = lVar17;
                  break;
                }
                if ((bVar6 < 0x36) && ((0x20100000001000U >> ((ulong)bVar6 & 0x3f) & 1) != 0)) {
                  if (((*(ushort *)(pbVar12 + -6) & 0x20) == 0) || (uVar19 == uVar11)) {
                    if ((*(ushort *)(pbVar12 + -6) & 0x20) == 0) goto LAB_004335d6;
                    uVar19 = (uint)uVar11;
                    goto LAB_004335dd;
                  }
                }
                else if (uVar19 == uVar11) goto LAB_004335dd;
                uVar11 = uVar11 + 1;
                pbVar12 = pbVar12 + 0x14;
              } while (uVar14 != (uint)uVar11);
            }
          }
          if (uVar18 < uVar14) {
            pbVar12 = (byte *)(lVar20 + lVar17 * 4 + 0x12);
            uVar11 = uVar13;
            do {
              bVar6 = *pbVar12;
              iVar4 = (int)uVar13;
              if ((((ulong)bVar6 < 0x36) && ((0x20100000001000U >> ((ulong)bVar6 & 0x3f) & 1) != 0))
                 && ((pbVar12[-6] & 0x20) == 0)) {
                uVar11 = (ulong)(iVar4 + 1);
              }
              else if (((bVar6 < 0x20) && ((1 << (bVar6 & 0x1f) & 0xc00000U) != 0)) &&
                      (((pbVar12[-4] & 0x10) != 0 || (pbVar12[-4] & 0xf) == 0 &&
                       (uVar18 = (uint)uVar11, uVar11 < uVar13)))) {
                if (1 < (iVar4 - uVar18) + 1) {
                  hb_buffer_t::merge_clusters_impl(param_11,uVar18,iVar4 + 1);
                }
                uVar3 = *(undefined4 *)(pbVar12 + -2);
                uVar8 = *(undefined8 *)(pbVar12 + -0x12);
                uVar16 = *(undefined8 *)(pbVar12 + -10);
                memmove((void *)(lVar20 + (ulong)(uVar18 + 1) * 0x14),
                        (void *)(lVar20 + uVar11 * 0x14),(ulong)(iVar4 - uVar18) * 0x14);
                local_58 = (undefined4)uVar8;
                uStack_54 = (undefined4)((ulong)uVar8 >> 0x20);
                uStack_50 = (undefined4)uVar16;
                uStack_4c = (undefined4)((ulong)uVar16 >> 0x20);
                puVar1 = (undefined4 *)(lVar20 + uVar11 * 0x14);
                *puVar1 = local_58;
                puVar1[1] = uStack_54;
                puVar1[2] = uStack_50;
                puVar1[3] = uStack_4c;
                *(undefined4 *)(lVar20 + 0x10 + uVar11 * 0x14) = uVar3;
              }
              uVar13 = uVar13 + 1;
              pbVar12 = pbVar12 + 0x14;
            } while (uVar15 != uVar13);
          }
        }
        uVar21 = (undefined1)in_stack_ffffffffffffff78;
        uVar16 = 0x20100000001000;
        uVar18 = *(uint *)(param_11 + 0x60);
        lVar20 = *(long *)(param_11 + 0x70);
        bVar6 = *(byte *)(lVar20 + 0xf + uVar15 * 0x14);
        uVar19 = uVar14 + 1;
        if (uVar14 + 1 < uVar18) {
          uVar19 = uVar18;
        }
        uVar11 = uVar15;
        do {
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulong)uVar10;
          if (uVar18 <= uVar10) {
            uVar11 = (ulong)uVar19;
            break;
          }
        } while (bVar6 == *(byte *)(lVar20 + 0xf + (ulong)uVar10 * 0x14));
        uVar13 = uVar15;
      } while (uVar14 < uVar2);
    }
    hb_buffer_t::message
              (CONCAT44(uStack_54,local_58),param_2_00,param_3_00,param_4,param_5,param_6,param_7,
               param_8,param_11,param_10,"end reordering USE",uVar11,uVar15,uVar16,uVar21);
  }
  param_11[0xb8] = (hb_buffer_t)((byte)param_11[0xb8] & 0xbf);
  return uVar7;
}



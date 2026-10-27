// Function : add_lookups
// Namespace: hb_ot_map_builder_t
// Entry    : 0041dac0
// Prototype: undefined add_lookups(hb_ot_map_builder_t * this, long param_1, uint param_2, uint param_3, uint param_4, undefined4 param_5, byte param_6, char param_7, char param_8, char param_9, undefined4 param_10)
// Body     : 0041dac0 - 0041df56


/* hb_ot_map_builder_t::add_lookups(hb_ot_map_t&, unsigned int, unsigned int, unsigned int, unsigned
   int, bool, bool, bool, bool, unsigned int) */

void __thiscall
hb_ot_map_builder_t::add_lookups
          (hb_ot_map_builder_t *this,long param_1,uint param_2,uint param_3,uint param_4,
          undefined4 param_5,byte param_6,char param_7,char param_8,char param_9,undefined4 param_10
          )

{
  long lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  short *psVar6;
  ushort *puVar7;
  uint *puVar8;
  ushort *puVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ushort uVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar19;
  uint uVar18;
  int iVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  uint *puVar24;
  ulong uVar25;
  uint uVar26;
  uint local_b8 [34];
  
  iVar2 = *(int *)((long)&table_tags + (ulong)param_2 * 4);
  psVar6 = (short *)get_gsubgpos_table(*(long *)this,iVar2);
  uVar23 = 0;
  if (*psVar6 == 0x100) {
    uVar13 = psVar6[4];
    if (uVar13 == 0) {
      puVar7 = (ushort *)&_hb_NullPool;
    }
    else {
      puVar7 = (ushort *)((long)psVar6 + (ulong)(ushort)(uVar13 << 8 | uVar13 >> 8));
    }
    uVar23 = (uint)(ushort)(*puVar7 << 8 | *puVar7 >> 8);
  }
  lVar1 = param_1 + (ulong)param_2 * 0x10;
  puVar24 = (uint *)(lVar1 + 0x24);
  uVar16 = 0;
  do {
    puVar8 = get_gsubgpos_table(*(long *)this,iVar2);
    if ((param_4 != 0xffffffff) &&
       (0x10000 < (((uint)*(ushort *)((long)puVar8 + 2) |
                   (*(ushort *)((long)puVar8 + 2) & 0xff) << 0x10) >> 8 | (*puVar8 & 0xff00) << 8 |
                  *puVar8 << 0x18))) {
      puVar15 = &_hb_NullPool;
      if ((short)*puVar8 == 0x100) {
        uVar19 = *puVar8;
        puVar15 = &_hb_NullPool;
        if (0x10000 < (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                      uVar19 << 0x18)) {
          uVar19 = *(uint *)((long)puVar8 + 10);
          puVar15 = &_hb_NullPool;
          if (uVar19 != 0) {
            puVar15 = (undefined4 *)
                      ((ulong)(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                              uVar19 << 0x18) + (long)puVar8);
          }
        }
      }
      uVar19 = puVar15[1];
      puVar11 = &_hb_NullPool;
      if (param_4 < (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                    uVar19 << 0x18)) {
        puVar11 = puVar15 + (ulong)param_4 * 2 + 2;
      }
      uVar19 = puVar11[1];
      puVar11 = &_hb_NullPool;
      if (uVar19 != 0) {
        puVar11 = (undefined4 *)
                  ((long)puVar15 +
                  (ulong)(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                         uVar19 << 0x18));
      }
      uVar13 = *(ushort *)(puVar11 + 1);
      if (uVar13 != 0) {
        uVar13 = uVar13 << 8 | uVar13 >> 8;
        uVar19 = 1;
        if (1 < uVar13) {
          uVar19 = (uint)uVar13;
        }
        lVar21 = 0;
        do {
          uVar13 = *(ushort *)((long)puVar11 + lVar21 + 6);
          if ((ushort)(uVar13 << 8 | uVar13 >> 8) == param_3) {
            uVar19 = *(uint *)((long)puVar11 + lVar21 + 8);
            puVar15 = &_hb_NullPool;
            if (uVar19 != 0) {
              puVar15 = (undefined4 *)
                        ((long)puVar11 +
                        (ulong)(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                               uVar19 << 0x18));
            }
            if (puVar15 != (undefined4 *)0x0) goto LAB_0041dd33;
            break;
          }
          lVar21 = lVar21 + 6;
        } while ((ulong)uVar19 * 6 != lVar21);
      }
    }
    puVar7 = (ushort *)&_hb_NullPool;
    if ((short)*puVar8 == 0x100) {
      uVar13 = *(ushort *)((long)puVar8 + 6);
      puVar7 = (ushort *)&_hb_NullPool;
      if (uVar13 != 0) {
        puVar7 = (ushort *)((long)puVar8 + (ulong)(ushort)(uVar13 << 8 | uVar13 >> 8));
      }
    }
    puVar9 = (ushort *)&_hb_NullPool;
    if (param_3 < (ushort)(*puVar7 << 8 | *puVar7 >> 8)) {
      puVar9 = puVar7 + (ulong)param_3 * 3 + 1;
    }
    uVar13 = puVar9[2];
    puVar15 = &_hb_NullPool;
    if (uVar13 != 0) {
      puVar15 = (undefined4 *)((long)puVar7 + (ulong)(ushort)(uVar13 << 8 | uVar13 >> 8));
    }
LAB_0041dd33:
    uVar19 = (uint)(ushort)(*(ushort *)((long)puVar15 + 2) << 8 |
                           *(ushort *)((long)puVar15 + 2) >> 8);
    uVar18 = uVar19 - uVar16;
    if (uVar19 < uVar16) {
      uVar18 = 0;
    }
    uVar19 = 0x20;
    if (uVar18 < 0x20) {
      uVar19 = uVar18;
    }
    if (uVar19 != 0) {
      uVar22 = 1;
      lVar21 = 0;
      puVar8 = local_b8;
      uVar25 = (ulong)uVar19;
      do {
        uVar13 = *(ushort *)((long)puVar15 + lVar21 * 2 + (ulong)uVar16 * 2 + 4);
        puVar17 = puVar8;
        if ((int)uVar22 == 0) {
          _hb_CrapPool = _hb_CrapPool & 0xffffffff00000000;
          puVar17 = (uint *)&_hb_CrapPool;
        }
        *puVar17 = (uint)(ushort)(uVar13 << 8 | uVar13 >> 8);
        iVar20 = (int)uVar25;
        uVar22 = (ulong)(iVar20 - 1);
        if (iVar20 == 0) {
          uVar22 = 0;
        }
        else {
          uVar25 = uVar22;
        }
        puVar8 = puVar8 + (iVar20 != 0);
        lVar21 = lVar21 + 1;
      } while (uVar19 != (uint)lVar21);
      uVar25 = 0;
      do {
        uVar3 = local_b8[uVar25];
        if (uVar3 < uVar23) {
          uVar26 = *puVar24 + 1;
          if ((int)uVar26 < 0) {
            uVar26 = 0;
          }
          uVar5 = *(uint *)(lVar1 + 0x20);
          if ((int)uVar5 < 0) {
LAB_0041def4:
            DAT_0071cd88 = 0;
            _hb_CrapPool = 0;
            bVar4 = 0;
            puVar12 = &_hb_CrapPool;
          }
          else {
            if (uVar5 < uVar26) {
              uVar14 = uVar5;
              do {
                uVar14 = uVar14 + (uVar14 >> 1) + 8;
              } while (uVar14 < uVar26);
              if (0x15555555 < uVar14) {
LAB_0041deee:
                *(uint *)(lVar1 + 0x20) = ~uVar5;
                goto LAB_0041def4;
              }
              if (uVar14 == 0) {
                free(*(void **)(lVar1 + 0x28));
                pvVar10 = (void *)0x0;
              }
              else {
                pvVar10 = realloc(*(void **)(lVar1 + 0x28),(ulong)uVar14 * 0xc);
                if (pvVar10 == (void *)0x0) {
                  uVar5 = *(uint *)(lVar1 + 0x20);
                  if (uVar14 <= uVar5) goto LAB_0041de59;
                  goto LAB_0041deee;
                }
              }
              *(void **)(lVar1 + 0x28) = pvVar10;
              *(uint *)(lVar1 + 0x20) = uVar14;
            }
LAB_0041de59:
            uVar5 = *puVar24;
            if ((uVar5 < uVar26) && (uVar14 = (uVar26 - uVar5) * 0xc, uVar14 != 0)) {
              memset((void *)((ulong)uVar5 * 0xc + *(long *)(lVar1 + 0x28)),0,(ulong)uVar14);
            }
            *puVar24 = uVar26;
            puVar12 = (undefined8 *)(*(long *)(lVar1 + 0x28) + (ulong)(uVar26 - 1) * 0xc);
            bVar4 = *(byte *)(*(long *)(lVar1 + 0x28) + 2 + (ulong)(uVar26 - 1) * 0xc);
          }
          *(undefined4 *)((long)puVar12 + 4) = param_5;
          *(short *)puVar12 = (short)uVar3;
          *(byte *)((long)puVar12 + 2) =
               (bVar4 & 0xf0) + (param_9 << 3 | param_8 << 2 | param_7 * '\x02' | param_6);
          *(undefined4 *)(puVar12 + 1) = param_10;
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar19);
    }
    uVar16 = uVar16 + uVar19;
    if (uVar18 < 0x20) {
      return;
    }
  } while( true );
}



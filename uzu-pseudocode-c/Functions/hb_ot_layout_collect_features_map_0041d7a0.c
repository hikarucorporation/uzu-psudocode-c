// Function : hb_ot_layout_collect_features_map
// Namespace: 
// Entry    : 0041d7a0
// Prototype: undefined hb_ot_layout_collect_features_map(long param_1, int param_2, uint param_3, uint param_4, hb_hashmap_t<unsigned_int,unsigned_int,true> * param_5)
// Body     : 0041d7a0 - 0041da94


void hb_ot_layout_collect_features_map
               (long param_1,int param_2,uint param_3,uint param_4,
               hb_hashmap_t<unsigned_int,unsigned_int,true> *param_5)

{
  hb_hashmap_t<unsigned_int,unsigned_int,true> hVar1;
  ushort uVar2;
  long lVar3;
  bool bVar4;
  ushort uVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  uint *puVar10;
  ushort *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  ulong uVar17;
  ushort *puVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  
  psVar6 = (short *)get_gsubgpos_table(param_1,param_2);
  puVar18 = (ushort *)&_hb_NullPool;
  puVar9 = (ushort *)&_hb_NullPool;
  if (*psVar6 == 0x100) {
    uVar2 = psVar6[2];
    if (uVar2 == 0) {
      puVar9 = (ushort *)&_hb_NullPool;
    }
    else {
      puVar9 = (ushort *)((ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) + (long)psVar6);
    }
  }
  puVar11 = (ushort *)&_hb_NullPool;
  if (param_3 < (ushort)(*puVar9 << 8 | *puVar9 >> 8)) {
    puVar11 = puVar9 + (ulong)param_3 * 3 + 1;
  }
  uVar2 = puVar11[2];
  if (uVar2 != 0) {
    puVar18 = (ushort *)((long)puVar9 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  if (param_4 == 0xffff) {
    puVar9 = puVar18;
  }
  else {
    if (param_4 < (ushort)(puVar18[1] << 8 | puVar18[1] >> 8)) {
      puVar9 = puVar18 + (ulong)param_4 * 3 + 2;
    }
    else {
      puVar9 = (ushort *)&_hb_NullPool;
    }
    puVar9 = puVar9 + 2;
  }
  uVar2 = *puVar9;
  puVar15 = &_hb_Null_OT_LangSys;
  if (uVar2 != 0) {
    puVar15 = (undefined8 *)((long)puVar18 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  uVar2 = *(ushort *)((long)puVar15 + 4);
  uVar21 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
  hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc(param_5,uVar21);
  if (uVar2 != 0) {
    do {
      uVar20 = (int)uVar21 - 1;
      uVar21 = (ulong)uVar20;
      if ((ushort)(*(ushort *)((long)puVar15 + 4) << 8 | *(ushort *)((long)puVar15 + 4) >> 8) <=
          uVar20) {
        return;
      }
      uVar2 = *(ushort *)((long)puVar15 + (ulong)uVar20 * 2 + 6);
      uVar5 = uVar2 << 8 | uVar2 >> 8;
      if (uVar2 == 0xffff) {
        uVar19 = 0;
        hVar1 = param_5[0x10];
      }
      else {
        puVar10 = &_hb_NullPool;
        if ((*psVar6 == 0x100) && (uVar2 = psVar6[3], uVar2 != 0)) {
          puVar10 = (uint *)((ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) + (long)psVar6);
        }
        puVar12 = &_hb_NullPool;
        if (uVar5 < (ushort)((ushort)*puVar10 << 8 | (ushort)*puVar10 >> 8)) {
          puVar12 = (uint *)((long)puVar10 + (ulong)uVar5 * 6 + 2);
        }
        uVar19 = *puVar12;
        uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18
        ;
        hVar1 = param_5[0x10];
      }
      if ((hVar1 != (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) &&
         (((*(uint *)(param_5 + 0x18) >> 1) + *(uint *)(param_5 + 0x18) < *(uint *)(param_5 + 0x1c)
          || (bVar4 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc(param_5,0), bVar4)))) {
        uVar8 = 0;
        uVar13 = (ulong)(uVar19 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(param_5 + 0x20);
        lVar3 = *(long *)(param_5 + 0x28);
        uVar14 = *(uint *)(lVar3 + 4 + uVar13 * 0xc);
        if ((uVar14 & 2) == 0) {
LAB_0041d9dd:
          uVar17 = uVar13;
        }
        else {
          uVar17 = 0xffffffff;
          uVar8 = 0;
          do {
            iVar16 = (int)uVar17;
            if (*(uint *)(lVar3 + uVar13 * 0xc) == uVar19) goto joined_r0x0041da48;
            if (iVar16 == -1 && (uVar14 & 1) == 0) {
              uVar17 = uVar13;
            }
            uVar7 = uVar8 + 1;
            uVar13 = (ulong)((int)uVar13 + uVar8 + 1 & *(uint *)(param_5 + 0x1c));
            uVar14 = *(uint *)(lVar3 + 4 + uVar13 * 0xc);
            uVar8 = uVar7;
          } while ((uVar14 & 2) != 0);
          iVar16 = (int)uVar17;
joined_r0x0041da48:
          if (iVar16 == -1) goto LAB_0041d9dd;
        }
        puVar10 = (uint *)(lVar3 + uVar17 * 0xc + 4);
        if ((*(byte *)(lVar3 + 4 + uVar17 * 0xc) & 2) != 0) {
          *(int *)(param_5 + 0x18) = *(int *)(param_5 + 0x18) + -1;
          *(uint *)(param_5 + 0x14) = *(int *)(param_5 + 0x14) - (*puVar10 & 1);
        }
        *(uint *)(lVar3 + uVar17 * 0xc) = uVar19;
        *(uint *)(lVar3 + 8 + uVar17 * 0xc) = (uint)uVar5;
        *puVar10 = uVar19 * 0x78dde6c4 | 3;
        iVar16 = *(int *)(param_5 + 0x18);
        *(int *)(param_5 + 0x18) = iVar16 + 1;
        *(int *)(param_5 + 0x14) = *(int *)(param_5 + 0x14) + 1;
        if ((*(ushort *)(param_5 + 0x12) < uVar8) &&
           (*(uint *)(param_5 + 0x1c) < (uint)((iVar16 + 1) * 8))) {
          hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                    (param_5,(ulong)(*(uint *)(param_5 + 0x1c) - 8));
        }
      }
    } while (uVar20 != 0);
  }
  return;
}



// Function : decompile_points
// Namespace: OT:TupleVariationData
// Entry    : 00460500
// Prototype: undefined8 decompile_points(ulong * param_1, uint * param_2, ushort * param_3)
// Body     : 00460500 - 004607b8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::TupleVariationData::decompile_points(OT::IntType<unsigned char, 1u> const*&,
   hb_vector_t<unsigned int, false>&, OT::IntType<unsigned char, 1u> const*) */

undefined8 __cdecl
OT::TupleVariationData::decompile_points(ulong *param_1,uint *param_2,ushort *param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  void *pvVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  
  pbVar2 = (byte *)*param_1;
  puVar10 = (ushort *)(pbVar2 + 1);
  if (param_3 < puVar10) {
LAB_00460795:
    uVar3 = 0;
  }
  else {
    *param_1 = (ulong)puVar10;
    bVar1 = *pbVar2;
    uVar12 = (uint)bVar1;
    if ((bVar1 & 0x80) != 0) {
      if (param_3 < pbVar2 + 2) goto LAB_00460795;
      *param_1 = (ulong)(pbVar2 + 2);
      uVar12 = (bVar1 & 0x7f) << 8 | (uint)(byte)*puVar10;
    }
    pvVar4 = (void *)0x0;
    uVar7 = *param_2;
    if ((int)uVar7 < 0) {
      return 0;
    }
    if (uVar7 < uVar12) {
      uVar11 = uVar7;
      do {
        uVar11 = uVar11 + (uVar11 >> 1) + 8;
      } while (uVar11 < uVar12);
      if (0x3fffffff < uVar11) {
LAB_00460790:
        *param_2 = ~uVar7;
        goto LAB_00460795;
      }
      if (uVar11 == 0) {
        free(*(void **)(param_2 + 2));
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = realloc(*(void **)(param_2 + 2),(ulong)uVar11 << 2);
        if (pvVar4 == (void *)0x0) {
          uVar7 = *param_2;
          if (uVar11 <= uVar7) goto LAB_00460571;
          goto LAB_00460790;
        }
      }
      *(void **)(param_2 + 2) = pvVar4;
      *param_2 = uVar11;
    }
LAB_00460571:
    param_2[1] = uVar12;
    uVar3 = CONCAT71((int7)((ulong)pvVar4 >> 8),1);
    if (uVar12 != 0) {
      iVar6 = 0;
      puVar10 = (ushort *)*param_1;
      uVar7 = 0;
      do {
        puVar5 = (ushort *)((long)puVar10 + 1);
        if (param_3 < puVar5) goto LAB_00460795;
        *param_1 = (ulong)puVar5;
        lVar9 = (ulong)((byte)*puVar10 & 0x7f) + 1;
        uVar11 = (int)lVar9 + uVar7;
        if (uVar12 < uVar11) goto LAB_00460795;
        if (((byte)*puVar10 & 0x80) == 0) {
          if (param_3 < (ushort *)(lVar9 + (long)puVar5)) goto LAB_00460795;
          if (uVar7 < uVar11) {
            uVar8 = (ulong)uVar7;
            if ((uVar11 - uVar7 & 1) == 0) {
              lVar9 = ~uVar8 + (ulong)uVar11;
            }
            else {
              puVar5 = puVar10 + 1;
              *param_1 = (ulong)puVar5;
              iVar6 = iVar6 + (uint)*(byte *)((long)puVar10 + 1);
              *(int *)(*(long *)(param_2 + 2) + uVar8 * 4) = iVar6;
              lVar9 = ~uVar8 + (ulong)uVar11;
              uVar8 = uVar8 + 1;
            }
            if (lVar9 != 0) {
              lVar9 = 0;
              do {
                *param_1 = (ulong)((long)puVar5 + lVar9 + 1);
                iVar6 = (uint)*(byte *)((long)puVar5 + lVar9) + iVar6;
                *(int *)(*(long *)(param_2 + 2) + uVar8 * 4 + lVar9 * 4) = iVar6;
                *param_1 = (ulong)((long)puVar5 + lVar9 + 2);
                iVar6 = (uint)*(byte *)((long)puVar5 + lVar9 + 1) + iVar6;
                *(int *)(*(long *)(param_2 + 2) + uVar8 * 4 + 4 + lVar9 * 4) = iVar6;
                lVar9 = lVar9 + 2;
              } while (uVar11 - uVar8 != lVar9);
              puVar5 = (ushort *)((long)puVar5 + lVar9);
            }
          }
          else {
LAB_00460590:
            uVar11 = uVar7;
          }
        }
        else {
          if (param_3 < puVar5 + lVar9) goto LAB_00460795;
          if (uVar11 <= uVar7) goto LAB_00460590;
          uVar8 = (ulong)uVar7;
          if ((uVar11 - uVar7 & 1) == 0) {
            lVar9 = ~uVar8 + (ulong)uVar11;
          }
          else {
            iVar6 = iVar6 + (uint)(ushort)(*(ushort *)((long)puVar10 + 1) << 8 |
                                          *(ushort *)((long)puVar10 + 1) >> 8);
            *(int *)(*(long *)(param_2 + 2) + uVar8 * 4) = iVar6;
            puVar5 = (ushort *)((long)puVar10 + 3);
            *param_1 = (ulong)puVar5;
            lVar9 = ~uVar8 + (ulong)uVar11;
            uVar8 = uVar8 + 1;
          }
          if (lVar9 != 0) {
            do {
              iVar6 = (uint)(ushort)(*puVar5 << 8 | *puVar5 >> 8) + iVar6;
              *(int *)(*(long *)(param_2 + 2) + uVar8 * 4) = iVar6;
              *param_1 = (ulong)(puVar5 + 1);
              iVar6 = (uint)(ushort)(puVar5[1] << 8 | puVar5[1] >> 8) + iVar6;
              *(int *)(*(long *)(param_2 + 2) + 4 + uVar8 * 4) = iVar6;
              puVar5 = puVar5 + 2;
              *param_1 = (ulong)puVar5;
              uVar8 = uVar8 + 2;
            } while (uVar11 != uVar8);
          }
        }
        puVar10 = puVar5;
        uVar7 = uVar11;
      } while (uVar11 < uVar12);
    }
  }
  return uVar3;
}



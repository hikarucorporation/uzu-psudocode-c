// Function : decompile<int>
// Namespace: OT:TupleValues
// Entry    : 004607c0
// Prototype: undefined8 decompile<int>(ulong * param_1, long param_2, uint * param_3)
// Body     : 004607c0 - 00460af9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool OT::TupleValues::decompile<int>(OT::IntType<unsigned char, 1u> const*&, hb_vector_t<int,
   false>&, OT::IntType<unsigned char, 1u> const*, bool) */

undefined8 __cdecl OT::TupleValues::decompile<int>(ulong *param_1,long param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  
  uVar2 = *(uint *)(param_2 + 4);
  uVar3 = CONCAT71((int7)((ulong)in_RAX >> 8),1);
  if (uVar2 != 0) {
    puVar7 = (uint *)*param_1;
    uVar4 = 0;
    do {
      uVar11 = (uint)uVar4;
      puVar12 = (uint *)((long)puVar7 + 1);
      if (param_3 < puVar12) {
        return 0;
      }
      *param_1 = (ulong)puVar12;
      bVar1 = (byte)*puVar7;
      lVar5 = (ulong)(bVar1 & 0x3f) + 1;
      uVar10 = (int)lVar5 + uVar11;
      if (uVar2 < uVar10) {
        return 0;
      }
      switch(bVar1 >> 6) {
      case 0:
        if (param_3 < (uint *)(lVar5 + (long)puVar12)) {
          return 0;
        }
        if (uVar11 < uVar10) {
          uVar9 = ~uVar4;
          uVar6 = (ulong)(uVar10 - uVar11) & 3;
          puVar7 = puVar12;
          if ((uVar10 - uVar11 & 3) != 0) {
            do {
              puVar7 = (uint *)((long)puVar12 + 1);
              *param_1 = (ulong)puVar7;
              *(int *)(*(long *)(param_2 + 8) + uVar4 * 4) = (int)(char)(byte)*puVar12;
              uVar4 = uVar4 + 1;
              uVar6 = uVar6 - 1;
              puVar12 = puVar7;
            } while (uVar6 != 0);
          }
          if (2 < uVar9 + uVar10) {
            lVar5 = uVar4 * 4;
            lVar8 = 0;
            do {
              *param_1 = (ulong)((long)puVar7 + lVar8 + 1);
              *(int *)(*(long *)(param_2 + 8) + lVar5 + lVar8 * 4) =
                   (int)(char)*(byte *)((long)puVar7 + lVar8);
              *param_1 = (ulong)((long)puVar7 + lVar8 + 2);
              *(int *)(*(long *)(param_2 + 8) + lVar5 + 4 + lVar8 * 4) =
                   (int)(char)*(byte *)((long)puVar7 + lVar8 + 1);
              *param_1 = (ulong)((long)puVar7 + lVar8 + 3);
              *(int *)(*(long *)(param_2 + 8) + lVar5 + 8 + lVar8 * 4) =
                   (int)(char)*(byte *)((long)puVar7 + lVar8 + 2);
              *param_1 = (ulong)((long)puVar7 + lVar8 + 4);
              *(int *)(*(long *)(param_2 + 8) + lVar5 + 0xc + lVar8 * 4) =
                   (int)(char)*(byte *)((long)puVar7 + lVar8 + 3);
              lVar8 = lVar8 + 4;
            } while (uVar10 - uVar4 != lVar8);
            puVar7 = (uint *)((long)puVar7 + lVar8);
          }
        }
        else {
LAB_00460800:
          puVar7 = puVar12;
          uVar10 = uVar11;
        }
        break;
      case 1:
        if (param_3 < (uint *)((long)puVar12 + lVar5 * 2)) {
          return 0;
        }
        if (uVar10 <= uVar11) goto LAB_00460800;
        uVar6 = uVar4;
        if ((uVar10 - uVar11 & 1) != 0) {
          *(int *)(*(long *)(param_2 + 8) + uVar4 * 4) =
               (int)(short)(*(ushort *)((long)puVar7 + 1) << 8 | *(ushort *)((long)puVar7 + 1) >> 8)
          ;
          *param_1 = (long)puVar7 + 3U;
          uVar6 = uVar4 + 1;
          puVar12 = (uint *)((long)puVar7 + 3U);
        }
        puVar7 = puVar12;
        if (~uVar4 + (ulong)uVar10 != 0) {
          do {
            *(int *)(*(long *)(param_2 + 8) + uVar6 * 4) =
                 (int)(short)((ushort)*puVar7 << 8 | (ushort)*puVar7 >> 8);
            *param_1 = (ulong)((long)puVar7 + 2);
            *(int *)(*(long *)(param_2 + 8) + 4 + uVar6 * 4) =
                 (int)(short)(*(ushort *)((long)puVar7 + 2) << 8 |
                             *(ushort *)((long)puVar7 + 2) >> 8);
            puVar7 = puVar7 + 1;
            *param_1 = (ulong)puVar7;
            uVar6 = uVar6 + 2;
          } while (uVar10 != uVar6);
        }
        break;
      case 2:
        if (uVar10 <= uVar11) goto LAB_00460800;
        memset((void *)(uVar4 * 4 + *(long *)(param_2 + 8)),0,(ulong)(bVar1 & 0x3f) * 4 + 4);
        uVar10 = (bVar1 & 0x3f) + uVar11 + 1;
        puVar7 = puVar12;
        break;
      case 3:
        if (param_3 < puVar12 + lVar5) {
          return 0;
        }
        if (uVar10 <= uVar11) goto LAB_00460800;
        uVar6 = uVar4;
        if ((uVar10 - uVar11 & 1) != 0) {
          uVar11 = *(uint *)((long)puVar7 + 1);
          *(uint *)(*(long *)(param_2 + 8) + uVar4 * 4) =
               uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
          *param_1 = (long)puVar7 + 5U;
          uVar6 = uVar4 + 1;
          puVar12 = (uint *)((long)puVar7 + 5U);
        }
        puVar7 = puVar12;
        if (~uVar4 + (ulong)uVar10 != 0) {
          do {
            uVar11 = *puVar7;
            *(uint *)(*(long *)(param_2 + 8) + uVar6 * 4) =
                 uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
            ;
            *param_1 = (ulong)(puVar7 + 1);
            uVar11 = puVar7[1];
            *(uint *)(*(long *)(param_2 + 8) + 4 + uVar6 * 4) =
                 uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
            ;
            puVar7 = puVar7 + 2;
            *param_1 = (ulong)puVar7;
            uVar6 = uVar6 + 2;
          } while (uVar10 != uVar6);
        }
      }
      uVar4 = (ulong)uVar10;
    } while (uVar10 < uVar2);
    uVar3 = 0x5e1b01;
  }
  return uVar3;
}



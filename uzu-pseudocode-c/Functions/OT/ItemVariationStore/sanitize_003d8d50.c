// Function : sanitize
// Namespace: OT:ItemVariationStore
// Entry    : 003d8d50
// Prototype: ulong sanitize(short * param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 003d8d50 - 003d8feb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::ItemVariationStore::sanitize(hb_sanitize_context_t*) const */

ulong __cdecl
OT::ItemVariationStore::sanitize
          (short *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ushort uVar11;
  ulong uVar12;
  
  if ((((ulong)((long)param_1 + (8 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18))
      && (*param_1 == 0x100)) &&
     ((ulong)((long)param_1 + (6 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18))) {
    uVar4 = *(uint *)(param_1 + 1);
    if (uVar4 != 0) {
      uVar6 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                     uVar4 << 0x18);
      lVar10 = (long)param_1 + uVar6 + 4;
      if ((((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar10 - *(long *)(param_2 + 8))) ||
          (puVar7 = (ushort *)(uVar6 + (long)param_1), uVar2 = *puVar7, uVar3 = puVar7[1],
          lVar8 = (ulong)((uint)(ushort)(uVar3 << 8 | uVar3 >> 8) *
                         (uint)(ushort)(uVar2 << 8 | uVar2 >> 8)) * 6, uVar4 = (uint)lVar8,
          (int)((ulong)lVar8 >> 0x20) != 0)) ||
         (((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar10 - *(long *)(param_2 + 8)) ||
          (((uint)(*(int *)(param_2 + 0x10) - (int)lVar10) < uVar4 ||
           (iVar9 = *(int *)(param_2 + 0x1c) - uVar4, *(int *)(param_2 + 0x1c) = iVar9, iVar9 < 1)))
          ))) {
        if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
           (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
           *(char *)(param_2 + 0x28) == '\0')) goto LAB_003d8fe1;
        param_1[1] = 0;
        param_1[2] = 0;
      }
    }
    psVar1 = param_1 + 4;
    if (((((ulong)((long)psVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
         ((ulong)((long)psVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
        (uVar4 = (uint)(ushort)(param_1[3] << 8 | (ushort)param_1[3] >> 8),
        uVar4 * 4 <= (uint)(*(int *)(param_2 + 0x10) - (int)psVar1))) &&
       (iVar9 = *(int *)(param_2 + 0x1c) + uVar4 * -4, *(int *)(param_2 + 0x1c) = iVar9, 0 < iVar9))
    {
      uVar2 = param_1[3];
      uVar6 = CONCAT71((int7)((ulong)param_5 >> 8),1);
      if (uVar2 != 0) {
        uVar2 = uVar2 << 8 | uVar2 >> 8;
        uVar4 = 1;
        if (1 < uVar2) {
          uVar4 = (uint)uVar2;
        }
        lVar10 = 0;
        do {
          if ((ulong)*(uint *)(param_2 + 0x18) <
              (ulong)((long)param_1 + ((lVar10 + 0xc) - *(long *)(param_2 + 8)))) goto LAB_003d8fe1;
          uVar5 = *(uint *)((long)param_1 + lVar10 + 8);
          if (uVar5 != 0) {
            uVar12 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                            uVar5 << 0x18);
            lVar8 = (long)param_1 + uVar12 + 6;
            if (((ulong)(lVar8 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
               ((ulong)(lVar8 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
              puVar7 = (ushort *)(uVar12 + (long)param_1);
              uVar5 = (uint)(ushort)(puVar7[2] << 8 | puVar7[2] >> 8);
              if ((uVar5 * 2 <= (uint)(*(int *)(param_2 + 0x10) - (int)lVar8)) &&
                 (iVar9 = *(int *)(param_2 + 0x1c) + uVar5 * -2, *(int *)(param_2 + 0x1c) = iVar9,
                 0 < iVar9)) {
                uVar2 = puVar7[1];
                uVar3 = (uVar2 & 0xff7f) << 8 | uVar2 >> 8;
                uVar11 = puVar7[2] << 8 | puVar7[2] >> 8;
                if (uVar3 <= uVar11) {
                  lVar8 = (ulong)(ushort)(*puVar7 << 8 | *puVar7 >> 8) *
                          (ulong)((2 - (uint)((uVar2 & 0x80) == 0)) * ((uint)uVar3 + (uint)uVar11));
                  uVar5 = (uint)lVar8;
                  if ((((int)((ulong)lVar8 >> 0x20) == 0) &&
                      ((ulong)((long)(puVar7 + (ulong)uVar11 + 3) - *(long *)(param_2 + 8)) <=
                       (ulong)*(uint *)(param_2 + 0x18))) &&
                     ((uVar5 <= (uint)(*(int *)(param_2 + 0x10) - (int)(puVar7 + (ulong)uVar11 + 3))
                      && (iVar9 = *(int *)(param_2 + 0x1c) - uVar5, *(int *)(param_2 + 0x1c) = iVar9
                         , 0 < iVar9)))) goto LAB_003d8ec0;
                }
              }
            }
            if ((0x1f < *(uint *)(param_2 + 0x2c)) ||
               (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
               *(char *)(param_2 + 0x28) == '\0')) goto LAB_003d8fe1;
            *(undefined4 *)((long)param_1 + lVar10 + 8) = 0;
          }
LAB_003d8ec0:
          lVar10 = lVar10 + 4;
        } while ((ulong)uVar4 * 4 != lVar10);
      }
      goto LAB_003d8fe4;
    }
  }
LAB_003d8fe1:
  uVar6 = 0;
LAB_003d8fe4:
  return uVar6 & 0xffffffff;
}



// Function : sanitize
// Namespace: OT:sbix
// Entry    : 0046f110
// Prototype: ulong sanitize(short * param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 0046f110 - 0046f24f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::sbix::sanitize(hb_sanitize_context_t*) const */

ulong __cdecl
OT::sbix::sanitize(short *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  short *psVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  psVar1 = param_1 + 4;
  if ((((ulong)((long)psVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      (*param_1 != 0)) &&
     ((ulong)((long)param_1 + (8 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18))) {
    uVar3 = *(uint *)(param_1 + 2);
    lVar5 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
            * 4;
    uVar3 = (uint)lVar5;
    if ((((int)((ulong)lVar5 >> 0x20) == 0) &&
        ((ulong)((long)psVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
       ((uVar3 <= (uint)(*(int *)(param_2 + 0x10) - (int)psVar1) &&
        (iVar4 = *(int *)(param_2 + 0x1c) - uVar3, *(int *)(param_2 + 0x1c) = iVar4, 0 < iVar4)))) {
      uVar3 = *(uint *)(param_1 + 2);
      uVar7 = CONCAT71((int7)((ulong)param_5 >> 8),1);
      if (uVar3 != 0) {
        uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        uVar8 = 1;
        if (1 < uVar3) {
          uVar8 = (ulong)uVar3;
        }
        lVar5 = 0;
        do {
          if ((ulong)*(uint *)(param_2 + 0x18) <
              (ulong)((long)param_1 + ((lVar5 + 0xc) - *(long *)(param_2 + 8)))) {
            return 0;
          }
          uVar3 = *(uint *)((long)param_1 + lVar5 + 8);
          if ((uVar3 != 0) &&
             (((lVar6 = (long)param_1 +
                        (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                               uVar3 << 0x18) + 4,
               (ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar6 - *(long *)(param_2 + 8)) ||
               (lVar2 = (ulong)(*(int *)(param_2 + 0x38) + 1) * 4, uVar3 = (uint)lVar2,
               (int)((ulong)lVar2 >> 0x20) != 0)) ||
              (((uint)(*(int *)(param_2 + 0x10) - (int)lVar6) < uVar3 ||
               (iVar4 = *(int *)(param_2 + 0x1c) - uVar3, *(int *)(param_2 + 0x1c) = iVar4,
               iVar4 < 1)))))) {
            if (0x1f < *(uint *)(param_2 + 0x2c)) {
              return 0;
            }
            *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
            if (*(char *)(param_2 + 0x28) == '\0') {
              uVar7 = 0;
              break;
            }
            *(undefined4 *)((long)param_1 + lVar5 + 8) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (uVar8 * 4 != lVar5);
      }
      return uVar7 & 0xffffffff;
    }
  }
  return 0;
}



// Function : cmp_gids
// Namespace: OT:post:accelerator_t
// Entry    : 0044eaa0
// Prototype: int cmp_gids(ushort * param_1, ushort * param_2, long param_3)
// Body     : 0044eaa0 - 0044ec47


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::post::accelerator_t::cmp_gids(void const*, void const*, void*) */

int __cdecl OT::post::accelerator_t::cmp_gids(ushort *param_1,ushort *param_2,long param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  char *__s2;
  char *__s1;
  ulong uVar8;
  
  uVar3 = *param_1;
  uVar8 = (ulong)uVar3;
  uVar2 = *param_2;
  uVar6 = (ulong)uVar2;
  iVar5 = *(int *)(param_3 + 8);
  if (iVar5 == 0x20000) {
    uVar1 = **(ushort **)(param_3 + 0x10);
    if ((ushort)(uVar1 << 8 | uVar1 >> 8) <= uVar2) goto LAB_0044ebbf;
    uVar2 = (*(ushort **)(param_3 + 0x10))[uVar6 + 1];
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    uVar4 = (uint)uVar2;
    if (uVar2 < 0x102) {
      __s2 = ".notdef" + *(uint *)(format1_names_msgidx + (ulong)uVar4 * 4);
      uVar6 = (ulong)(~*(uint *)(format1_names_msgidx + (ulong)uVar4 * 4) +
                     *(int *)(format1_names_msgidx + (ulong)uVar4 * 4 + 4));
    }
    else {
      if (*(uint *)(param_3 + 0x1c) <= uVar4 - 0x102) goto LAB_0044ebbf;
      uVar7 = (ulong)*(uint *)(*(long *)(param_3 + 0x20) + (ulong)(uVar4 - 0x102) * 4);
      uVar6 = (ulong)*(byte *)(*(long *)(param_3 + 0x28) + uVar7);
      __s2 = (char *)(*(long *)(param_3 + 0x28) + uVar7 + 1);
    }
LAB_0044ebc3:
    iVar5 = *(int *)(param_3 + 8);
    if (iVar5 != 0x20000) goto LAB_0044ebd4;
LAB_0044eb43:
    uVar2 = **(ushort **)(param_3 + 0x10);
    if (uVar3 < (ushort)(uVar2 << 8 | uVar2 >> 8)) {
      uVar3 = (*(ushort **)(param_3 + 0x10))[uVar8 + 1];
      uVar3 = uVar3 << 8 | uVar3 >> 8;
      uVar4 = (uint)uVar3;
      if (uVar3 < 0x102) {
        __s1 = ".notdef" + *(uint *)(format1_names_msgidx + (ulong)uVar4 * 4);
        uVar4 = ~*(uint *)(format1_names_msgidx + (ulong)uVar4 * 4) +
                *(int *)(format1_names_msgidx + (ulong)uVar4 * 4 + 4);
        if (uVar4 == (uint)uVar6) goto LAB_0044ec38;
        goto LAB_0044ec2d;
      }
      if (uVar4 - 0x102 < *(uint *)(param_3 + 0x1c)) {
        uVar8 = (ulong)*(uint *)(*(long *)(param_3 + 0x20) + (ulong)(uVar4 - 0x102) * 4);
        uVar4 = (uint)*(byte *)(*(long *)(param_3 + 0x28) + uVar8);
        __s1 = (char *)(uVar8 + *(long *)(param_3 + 0x28) + 1);
        if (uVar4 != (uint)uVar6) goto LAB_0044ec2d;
        goto LAB_0044ec38;
      }
    }
  }
  else {
    if (iVar5 == 0x10000) {
      if (uVar2 < 0x102) {
        __s2 = ".notdef" + *(uint *)(format1_names_msgidx + uVar6 * 4);
        uVar6 = (ulong)(~*(uint *)(format1_names_msgidx + uVar6 * 4) +
                       *(int *)(format1_names_msgidx + uVar6 * 4 + 4));
        goto LAB_0044ebc3;
      }
LAB_0044ebbf:
      __s2 = (char *)0x0;
      uVar6 = 0;
      goto LAB_0044ebc3;
    }
    __s2 = (char *)0x0;
    uVar6 = 0;
    if (iVar5 == 0x20000) goto LAB_0044eb43;
LAB_0044ebd4:
    if ((iVar5 == 0x10000) && (uVar3 < 0x102)) {
      __s1 = ".notdef" + *(uint *)(format1_names_msgidx + uVar8 * 4);
      uVar4 = ~*(uint *)(format1_names_msgidx + uVar8 * 4) +
              *(int *)(format1_names_msgidx + uVar8 * 4 + 4);
      if (uVar4 != (uint)uVar6) goto LAB_0044ec2d;
      goto LAB_0044ec38;
    }
  }
  __s1 = (char *)0x0;
  uVar4 = 0;
  if ((int)uVar6 != 0) {
LAB_0044ec2d:
    return uVar4 - (int)uVar6;
  }
LAB_0044ec38:
  if (uVar6 == 0) {
    return 0;
  }
  iVar5 = memcmp(__s1,__s2,uVar6);
  return iVar5;
}



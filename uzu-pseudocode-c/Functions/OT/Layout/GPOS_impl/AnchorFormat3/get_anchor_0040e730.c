// Function : get_anchor
// Namespace: OT:Layout:GPOS_impl:AnchorFormat3
// Entry    : 0040e730
// Prototype: undefined get_anchor(long param_1, long param_2, float * param_3, float * param_4)
// Body     : 0040e730 - 0040ea12


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::Layout::GPOS_impl::AnchorFormat3::get_anchor(OT::hb_ot_apply_context_t*, unsigned int,
   float*, float*) const */

void __cdecl
OT::Layout::GPOS_impl::AnchorFormat3::get_anchor
          (long param_1,long param_2,float *param_3,float *param_4)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  ushort uVar8;
  Device *pDVar9;
  
  lVar2 = *(long *)(param_2 + 0x90);
  *param_3 = (float)(int)(short)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8) *
             *(float *)(lVar2 + 0x4c);
  *param_4 = (float)(int)(short)(*(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8) *
             *(float *)(lVar2 + 0x50);
  if (((*(int *)(lVar2 + 0x68) != 0) || (*(int *)(lVar2 + 0x78) != 0)) &&
     ((param_1 - *(long *)(param_2 + 0xb0)) + 8U <= (ulong)*(uint *)(param_2 + 0xc0))) {
    uVar1 = *(ushort *)(param_1 + 6);
    if (uVar1 != 0) {
      puVar4 = (ushort *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_1);
      uVar7 = (long)puVar4 - *(long *)(param_2 + 0xb0);
      if ((ulong)*(uint *)(param_2 + 0xc0) < uVar7 + 6) {
LAB_0040e840:
        if ((0x1f < *(uint *)(param_2 + 0xd4)) ||
           (*(uint *)(param_2 + 0xd4) = *(uint *)(param_2 + 0xd4) + 1,
           *(char *)(param_2 + 0xd0) == '\0')) goto LAB_0040e8a7;
        *(undefined2 *)(param_1 + 6) = 0;
      }
      else {
        uVar1 = puVar4[2];
        if ((ushort)((uVar1 << 8 | uVar1 >> 8) - 1) < 3) {
          uVar5 = *puVar4 << 8 | *puVar4 >> 8;
          uVar8 = puVar4[1] << 8 | puVar4[1] >> 8;
          if (uVar8 < uVar5) {
            uVar6 = 6;
          }
          else {
            uVar6 = ((uint)uVar8 - (uint)uVar5 >> (4U - (char)(uVar1 >> 8) & 0x1f)) * 2 + 8;
          }
          if (((*(uint *)(param_2 + 0xc0) < uVar7) ||
              ((uint)(*(int *)(param_2 + 0xb8) - (int)puVar4) < uVar6)) ||
             (iVar3 = *(int *)(param_2 + 0xc4) - uVar6, *(int *)(param_2 + 0xc4) = iVar3, iVar3 < 1)
             ) goto LAB_0040e840;
        }
      }
    }
    uVar1 = *(ushort *)(param_1 + 6);
    if (uVar1 == 0) {
      pDVar9 = (Device *)&_hb_NullPool;
    }
    else {
      pDVar9 = (Device *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_1);
    }
    uVar7 = Device::get_x_delta(pDVar9,lVar2,*(long *)(param_2 + 0x100),*(long *)(param_2 + 0x108));
    *param_3 = (float)(int)uVar7 + *param_3;
  }
LAB_0040e8a7:
  if ((*(int *)(lVar2 + 0x6c) == 0) && (*(int *)(lVar2 + 0x78) == 0)) {
    return;
  }
  if ((ulong)*(uint *)(param_2 + 0xc0) < (param_1 - *(long *)(param_2 + 0xb0)) + 10U) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 8);
  if (uVar1 == 0) goto LAB_0040e98f;
  puVar4 = (ushort *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_1);
  uVar7 = (long)puVar4 - *(long *)(param_2 + 0xb0);
  if (uVar7 + 6 <= (ulong)*(uint *)(param_2 + 0xc0)) {
    uVar1 = puVar4[2];
    if (2 < (ushort)((uVar1 << 8 | uVar1 >> 8) - 1)) goto LAB_0040e98f;
    uVar5 = *puVar4 << 8 | *puVar4 >> 8;
    uVar8 = puVar4[1] << 8 | puVar4[1] >> 8;
    if (uVar8 < uVar5) {
      uVar6 = 6;
    }
    else {
      uVar6 = ((uint)uVar8 - (uint)uVar5 >> (4U - (char)(uVar1 >> 8) & 0x1f)) * 2 + 8;
    }
    if (((uVar7 <= *(uint *)(param_2 + 0xc0)) &&
        (uVar6 <= (uint)(*(int *)(param_2 + 0xb8) - (int)puVar4))) &&
       (iVar3 = *(int *)(param_2 + 0xc4) - uVar6, *(int *)(param_2 + 0xc4) = iVar3, 0 < iVar3))
    goto LAB_0040e98f;
  }
  if (0x1f < *(uint *)(param_2 + 0xd4)) {
    return;
  }
  *(uint *)(param_2 + 0xd4) = *(uint *)(param_2 + 0xd4) + 1;
  if (*(char *)(param_2 + 0xd0) == '\0') {
    return;
  }
  *(undefined2 *)(param_1 + 8) = 0;
LAB_0040e98f:
  uVar1 = *(ushort *)(param_1 + 8);
  if (uVar1 == 0) {
    pDVar9 = (Device *)&_hb_NullPool;
  }
  else {
    pDVar9 = (Device *)(param_1 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
  }
  uVar7 = Device::get_y_delta(pDVar9,lVar2,*(long *)(param_2 + 0x100),*(long *)(param_2 + 0x108));
  *param_4 = (float)(int)uVar7 + *param_4;
  return;
}



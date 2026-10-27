// Function : _dispatch<OT::Layout::Common::Coverage>
// Namespace: hb_sanitize_context_t
// Entry    : 003d6010
// Prototype: ulong _dispatch<OT::Layout::Common::Coverage>(long param_1, ushort * param_2)
// Body     : 003d6010 - 003d60cd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* decltype (({parm#1}.sanitize)(this))
   hb_sanitize_context_t::_dispatch<OT::Layout::Common::Coverage>(OT::Layout::Common::Coverage
   const&, hb_priority<1u>) */

ulong __cdecl
hb_sanitize_context_t::_dispatch<OT::Layout::Common::Coverage>(long param_1,ushort *param_2)

{
  int iVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar2 = (long)param_2 + (2 - *(long *)(param_1 + 8));
  if (*(uint *)(param_1 + 0x18) < uVar2) {
    return 0;
  }
  uVar3 = *param_2 << 8 | *param_2 >> 8;
  if (uVar3 == 2) {
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)param_2 + (4 - *(long *)(param_1 + 8)))) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(param_2 + 2) - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar4 = (uint)(ushort)(param_2[1] << 8 | param_2[1] >> 8) * 6;
    if ((uint)(*(int *)(param_1 + 0x10) - (int)(param_2 + 2)) < uVar4) {
      return 0;
    }
  }
  else {
    if (uVar3 != 1) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)param_2 + (4 - *(long *)(param_1 + 8)))) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(param_2 + 2) - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar4 = (uint)(ushort)(param_2[1] << 8 | param_2[1] >> 8) * 2;
    if ((uint)(*(int *)(param_1 + 0x10) - (int)(param_2 + 2)) < uVar4) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c) - uVar4;
  *(int *)(param_1 + 0x1c) = iVar1;
  return (ulong)CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1);
}



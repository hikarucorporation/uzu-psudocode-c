// Function : reverse_cursive_minor_offset
// Namespace: OT:Layout:GPOS_impl
// Entry    : 004103f0
// Prototype: undefined reverse_cursive_minor_offset(long param_1, uint param_2, uint param_3, uint param_4)
// Body     : 004103f0 - 0041048f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::Layout::GPOS_impl::reverse_cursive_minor_offset(hb_glyph_position_t*, unsigned int,
   hb_direction_t, unsigned int) */

void __cdecl
OT::Layout::GPOS_impl::reverse_cursive_minor_offset
          (long param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = (ulong)param_2;
  sVar2 = *(short *)(param_1 + 0x10 + uVar3 * 0x14);
  if ((sVar2 != 0) && (bVar1 = *(byte *)(param_1 + 0x12 + uVar3 * 0x14), (bVar1 & 2) != 0)) {
    *(undefined2 *)(param_1 + uVar3 * 0x14 + 0x10) = 0;
    uVar4 = param_2 + (int)sVar2;
    if (uVar4 != param_4) {
      reverse_cursive_minor_offset(param_1,uVar4,param_3,param_4);
      if ((param_3 & 0xfffffffe) == 4) {
        *(int *)(param_1 + 0xc + (ulong)uVar4 * 0x14) = -*(int *)(param_1 + 0xc + uVar3 * 0x14);
      }
      else {
        *(int *)(param_1 + 8 + (ulong)uVar4 * 0x14) = -*(int *)(param_1 + 8 + uVar3 * 0x14);
      }
      *(short *)(param_1 + 0x10 + (ulong)uVar4 * 0x14) = -sVar2;
      *(byte *)(param_1 + 0x12 + (ulong)uVar4 * 0x14) = bVar1;
    }
  }
  return;
}



// Function : _hb_clear_substitution_flags
// Namespace: 
// Entry    : 004331c0
// Prototype: undefined8 _hb_clear_substitution_flags(undefined8 param_1, undefined8 param_2, long param_3)
// Body     : 004331c0 - 0043323f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _hb_clear_substitution_flags(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 __cdecl _hb_clear_substitution_flags(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  
  uVar1 = *(uint *)(param_3 + 0x60);
  if ((ulong)uVar1 != 0) {
    lVar2 = *(long *)(param_3 + 0x70);
    if ((ulong)uVar1 - 1 < 3) {
      uVar3 = 0;
    }
    else {
      pbVar5 = (byte *)(lVar2 + 0x48);
      uVar3 = 0;
      do {
        pbVar5[-0x3c] = pbVar5[-0x3c] & 0xef;
        pbVar5[-0x28] = pbVar5[-0x28] & 0xef;
        pbVar5[-0x14] = pbVar5[-0x14] & 0xef;
        *pbVar5 = *pbVar5 & 0xef;
        uVar3 = uVar3 + 4;
        pbVar5 = pbVar5 + 0x50;
      } while ((uVar1 & 0xfffffffc) != uVar3);
    }
    if ((ulong)(uVar1 & 3) != 0) {
      lVar4 = 0;
      do {
        pbVar5 = (byte *)(lVar2 + uVar3 * 0x14 + 0xc + lVar4);
        *pbVar5 = *pbVar5 & 0xef;
        lVar4 = lVar4 + 0x14;
      } while ((ulong)(uVar1 & 3) * 0x14 != lVar4);
    }
  }
  return 0;
}



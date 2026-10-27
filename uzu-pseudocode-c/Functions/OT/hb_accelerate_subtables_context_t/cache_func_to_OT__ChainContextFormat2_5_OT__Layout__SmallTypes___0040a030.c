// Function : cache_func_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 0040a030
// Prototype: undefined8 cache_func_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>(undefined8 param_1, long param_2, int param_3)
// Body     : 0040a030 - 0040a0ff


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::cache_func_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*, bool) */

undefined8 __cdecl
OT::hb_accelerate_subtables_context_t::
cache_func_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>
          (undefined8 param_1,long param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  long in_RAX;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_2 + 0x144) = 0xffffffff;
    lVar3 = *(long *)(param_2 + 0xa0);
    pbVar1 = (byte *)(lVar3 + 0xb8);
    *pbVar1 = *pbVar1 & 0xf7;
    return CONCAT71((int7)((ulong)lVar3 >> 8),1);
  }
  lVar3 = *(long *)(param_2 + 0xa0);
  if ((*(byte *)(lVar3 + 0xb8) & 8) != 0) {
    return 0;
  }
  *(byte *)(lVar3 + 0xb8) = *(byte *)(lVar3 + 0xb8) | 8;
  uVar2 = *(uint *)(lVar3 + 0x60);
  if ((ulong)uVar2 != 0) {
    uVar4 = (ulong)(uVar2 & 3);
    if ((ulong)uVar2 - 1 < 3) {
      uVar6 = 0;
    }
    else {
      lVar5 = 0;
      uVar6 = 0;
      do {
        *(undefined1 *)(*(long *)(lVar3 + 0x70) + 0xf + lVar5) = 0xff;
        *(undefined1 *)(*(long *)(lVar3 + 0x70) + 0x23 + lVar5) = 0xff;
        *(undefined1 *)(*(long *)(lVar3 + 0x70) + 0x37 + lVar5) = 0xff;
        in_RAX = *(long *)(lVar3 + 0x70);
        *(undefined1 *)(in_RAX + 0x4b + lVar5) = 0xff;
        uVar6 = uVar6 + 4;
        lVar5 = lVar5 + 0x50;
      } while ((uVar2 & 0xfffffffc) != uVar6);
    }
    if (uVar4 != 0) {
      lVar5 = uVar6 * 0x14;
      do {
        *(undefined1 *)(*(long *)(lVar3 + 0x70) + 0xf + lVar5) = 0xff;
        lVar5 = lVar5 + 0x14;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  *(undefined4 *)(param_2 + 0x144) = 0xff;
  return CONCAT71((int7)((ulong)in_RAX >> 8),1);
}



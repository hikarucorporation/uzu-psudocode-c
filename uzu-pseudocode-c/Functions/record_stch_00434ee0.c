// Function : record_stch
// Namespace: 
// Entry    : 00434ee0
// Prototype: undefined8 record_stch(long param_1, undefined8 param_2, long param_3)
// Body     : 00434ee0 - 00434f56


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* record_stch(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 __cdecl record_stch(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  
  if (((*(byte *)(*(long *)(param_1 + 0x88) + 0x28) & 2) != 0) &&
     ((ulong)*(uint *)(param_3 + 0x60) != 0)) {
    lVar2 = *(long *)(param_3 + 0x70);
    lVar3 = (ulong)*(uint *)(param_3 + 0x60) * 0x14;
    lVar4 = 0;
    do {
      while ((*(byte *)(lVar2 + 0xc + lVar4) & 0x40) != 0) {
        bVar1 = *(byte *)(lVar2 + 0xe + lVar4);
        bVar5 = bVar1 & 1 | 8;
        if ((bVar1 & 0x10) != 0) {
          bVar5 = 8;
        }
        *(byte *)(lVar2 + 0x13 + lVar4) = bVar5;
        *(byte *)(param_3 + 0xc3) = *(byte *)(param_3 + 0xc3) | 1;
        lVar4 = lVar4 + 0x14;
        if (lVar3 == lVar4) {
          return 0;
        }
      }
      lVar4 = lVar4 + 0x14;
    } while (lVar3 != lVar4);
  }
  return 0;
}



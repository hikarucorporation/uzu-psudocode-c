// Function : hb_ucd_script
// Namespace: 
// Entry    : 0043bdf0
// Prototype: undefined4 hb_ucd_script(undefined8 param_1, uint param_2)
// Body     : 0043bdf0 - 0043be5e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ucd_script(hb_unicode_funcs_t*, unsigned int, void*) */

undefined4 __cdecl hb_ucd_script(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 2;
  if (param_2 < 0xe01f0) {
    uVar1 = (ulong)(byte)(&DAT_005ff9d6)
                         [(ulong)(param_2 & 7) +
                          (ulong)*(ushort *)
                                  (_hb_ucd_u16 +
                                  ((ulong)(param_2 >> 3 & 7) +
                                  (ulong)*(ushort *)
                                          (_hb_ucd_u16 +
                                          ((ulong)(byte)(&DAT_005ff654)[param_2 >> 10] << 4 |
                                          (ulong)(param_2 >> 6 & 0xf)) * 2 + 0x1480) * 8) * 2 +
                                  0x1d40) * 8];
  }
  return *(undefined4 *)(_hb_ucd_sc_map + uVar1 * 4);
}



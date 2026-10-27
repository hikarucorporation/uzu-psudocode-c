// Function : hb_ucd_general_category
// Namespace: 
// Entry    : 0043bcf0
// Prototype: undefined1 hb_ucd_general_category(undefined8 param_1, uint param_2)
// Body     : 0043bcf0 - 0043bd66


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ucd_general_category(hb_unicode_funcs_t*, unsigned int, void*) */

undefined1 __cdecl hb_ucd_general_category(undefined8 param_1,uint param_2)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_2 < 0x10fffe) {
    uVar1 = (&DAT_005fea28)
            [(ulong)(param_2 & 1) +
             (ulong)(byte)(&DAT_005fd410)
                          [(ulong)(param_2 >> 1 & 7) +
                           (ulong)*(ushort *)
                                   (_hb_ucd_u16 +
                                   ((ulong)(byte)(&DAT_005fd1f0)
                                                 [(ulong)(byte)(&_hb_ucd_u8)[param_2 >> 0xc] << 4 |
                                                  (ulong)(param_2 >> 8 & 0xf)] << 4 |
                                   (ulong)(param_2 >> 4 & 0xf)) * 2) * 8] * 2];
  }
  return uVar1;
}



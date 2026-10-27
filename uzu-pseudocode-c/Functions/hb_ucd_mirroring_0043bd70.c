// Function : hb_ucd_mirroring
// Namespace: 
// Entry    : 0043bd70
// Prototype: int hb_ucd_mirroring(undefined8 param_1, uint param_2)
// Body     : 0043bd70 - 0043bde3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ucd_mirroring(hb_unicode_funcs_t*, unsigned int, void*) */

int __cdecl hb_ucd_mirroring(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 < 0xff64) {
    iVar1 = (int)*(short *)(_hb_ucd_i16 +
                           ((ulong)(param_2 & 3) +
                           (ulong)(byte)(&DAT_005ff504)
                                        [(ulong)(param_2 >> 2 & 7) +
                                         (ulong)(byte)(&DAT_005ff48c)
                                                      [(ulong)(param_2 >> 5 & 7) +
                                                       (ulong)((byte)(&DAT_005ff40c)[param_2 >> 9]
                                                               >> ((byte)(param_2 >> 6) & 4) & 0xf)
                                                       * 8] * 8] * 4) * 2);
  }
  return iVar1 + param_2;
}



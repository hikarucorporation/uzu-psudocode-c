// Function : hb_ucd_combining_class
// Namespace: 
// Entry    : 0043bc70
// Prototype: undefined1 hb_ucd_combining_class(undefined8 param_1, uint param_2)
// Body     : 0043bc70 - 0043bce0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ucd_combining_class(hb_unicode_funcs_t*, unsigned int, void*) */

undefined1 __cdecl hb_ucd_combining_class(undefined8 param_1,uint param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x1e94b) {
    uVar1 = (&DAT_005ff218)
            [(ulong)(param_2 & 3) +
             (ulong)(byte)(&DAT_005fefe0)
                          [(ulong)(param_2 >> 2 & 3) +
                           (ulong)(byte)(&DAT_005fee04)
                                        [(ulong)(param_2 >> 4 & 3) +
                                         (ulong)(byte)(&DAT_005fec9c)
                                                      [(ulong)(param_2 >> 6 & 7) +
                                                       (ulong)(byte)(&DAT_005feba6)[param_2 >> 9] *
                                                       8] * 4] * 4] * 4];
  }
  return uVar1;
}



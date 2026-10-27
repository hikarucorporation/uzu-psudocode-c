// Function : _hb_arabic_pua_simp_map
// Namespace: 
// Entry    : 0047d580
// Prototype: undefined2 _hb_arabic_pua_simp_map(uint param_1)
// Body     : 0047d580 - 0047d602


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _hb_arabic_pua_simp_map(unsigned int) */

undefined2 __cdecl _hb_arabic_pua_simp_map(uint param_1)

{
  if (param_1 < 0xfefd) {
    return *(undefined2 *)
            (_hb_arabic_u16 +
            ((ulong)(param_1 & 7) +
            (ulong)(byte)(&DAT_005f51b8)
                         [((ulong)((byte)(&DAT_005f5198)
                                         [(param_1 >> 7 & 0xe |
                                          ((byte)(&_hb_arabic_u8)[param_1 >> 0xd] >>
                                           ((byte)(param_1 >> 10) & 6) & 3) << 4) >> 1] >>
                                  ((byte)(param_1 >> 5) & 4)) & 0xf) << 4 |
                          (ulong)(param_1 >> 3 & 0xf)] * 8) * 2);
  }
  return 0;
}



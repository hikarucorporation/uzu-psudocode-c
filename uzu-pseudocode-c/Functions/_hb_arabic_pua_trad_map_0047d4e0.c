// Function : _hb_arabic_pua_trad_map
// Namespace: 
// Entry    : 0047d4e0
// Prototype: undefined2 _hb_arabic_pua_trad_map(uint param_1)
// Body     : 0047d4e0 - 0047d574


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _hb_arabic_pua_trad_map(unsigned int) */

undefined2 __cdecl _hb_arabic_pua_trad_map(uint param_1)

{
  if (param_1 < 0xfefd) {
    return *(undefined2 *)
            (_hb_arabic_u16 +
            ((ulong)(param_1 & 3) +
            (ulong)(byte)(&DAT_005f5260)
                         [((ulong)((byte)(&DAT_005f5238)
                                         [((ulong)(param_1 >> 6 & 0xe) |
                                          ((ulong)((byte)(&DAT_005f5218)[param_1 >> 0xb] >>
                                                  ((byte)(param_1 >> 8) & 4)) & 0xf) << 4) >> 1] >>
                                  ((byte)(param_1 >> 4) & 4)) & 0xf) << 4 |
                          (ulong)(param_1 >> 2 & 0xf)] * 4) * 2 + 0x280);
  }
  return 0;
}



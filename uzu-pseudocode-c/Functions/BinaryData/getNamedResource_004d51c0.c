// Function : getNamedResource
// Namespace: BinaryData
// Entry    : 004d51c0
// Prototype: undefined * getNamedResource(char * param_1, undefined4 * param_2)
// Body     : 004d51c0 - 004d531e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* BinaryData::getNamedResource(char const*, int&) */

undefined * __cdecl BinaryData::getNamedResource(char *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  
  if ((param_1 != (char *)0x0) && (cVar2 = *param_1, cVar2 != '\0')) {
    iVar1 = 0;
    do {
      param_1 = param_1 + 1;
      iVar1 = iVar1 * 0x1f + (int)cVar2;
      cVar2 = *param_1;
    } while (cVar2 != '\0');
    if (iVar1 < -0x2c647815) {
      if (iVar1 < -0x4f5c53cf) {
        if (iVar1 == -0x766928ef) {
          *param_2 = 0xcb4;
          return *(undefined **)PTR_LopBW_pd_00715c30;
        }
        if (iVar1 == -0x53533ff1) {
          *param_2 = 0xca7;
          return *(undefined **)PTR_HipBW_pd_00715610;
        }
      }
      else {
        if (iVar1 == -0x4f5c53cf) {
          *param_2 = 0x1b94;
          return *(undefined **)PTR_HurleybirdJr_ATSFS_ttf_00715e48;
        }
        if (iVar1 == -0x468b668b) {
          *param_2 = 0x4e04;
          return *(undefined **)PTR_CompoundMono_ttf_00715730;
        }
        if (iVar1 == -0x316cc8b2) {
          *param_2 = 0x5088;
          return *(undefined **)PTR_keepbass_png_00715700;
        }
      }
    }
    else if (iVar1 < -0x16ea76c6) {
      if (iVar1 == -0x2c647815) {
        *param_2 = 0x21f39;
        return *(undefined **)PTR_xy_png_00715b60;
      }
      if (iVar1 == -0x2c20cb3d) {
        *param_2 = 0x38c;
        return *(undefined **)PTR_hilbert_pd_00715e20;
      }
    }
    else {
      if (iVar1 == -0x16ea76c6) {
        *param_2 = 0x587;
        return *(undefined **)PTR_insert_pd_00715bc8;
      }
      if (iVar1 == 0x294fb37a) {
        *param_2 = 0x476;
        return *(undefined **)PTR_hann_pd_00715818;
      }
      if (iVar1 == 0x7d93d8ea) {
        *param_2 = 0x57d7;
        return *(undefined **)PTR_EBPhaselock_pd_00715860;
      }
    }
  }
  *param_2 = 0;
  return (undefined *)0x0;
}



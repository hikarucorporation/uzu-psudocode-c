// Function : hb_font_get_glyph_h_origin_default
// Namespace: 
// Entry    : 00412990
// Prototype: int hb_font_get_glyph_h_origin_default(long param_1, undefined8 param_2, undefined8 param_3, int * param_4, int * param_5)
// Body     : 00412990 - 00412a5e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_font_get_glyph_h_origin_default(hb_font_t*, void*, unsigned int, int*, int*, void*) */

int __cdecl
hb_font_get_glyph_h_origin_default
          (long param_1,undefined8 param_2,undefined8 param_3,int *param_4,int *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_1 + 0x18);
  *param_5 = 0;
  *param_4 = 0;
  lVar3 = *(long *)(*(long *)(lVar2 + 0x90) + 0x10);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar3 + 0x48);
  }
  iVar4 = (**(code **)(*(long *)(lVar2 + 0x90) + 0x68))
                    (lVar2,*(undefined8 *)(lVar2 + 0x98),param_3,param_4,param_5,uVar7);
  if (iVar4 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
      iVar5 = *param_5;
    }
    else {
      iVar5 = *param_4;
      uVar1 = *(uint *)(lVar2 + 0x28);
      if (uVar1 != *(uint *)(param_1 + 0x28)) {
        uVar6 = (long)(int)*(uint *)(param_1 + 0x28) * (long)iVar5;
        if ((uVar6 | (long)(int)uVar1) >> 0x20 == 0) {
          iVar5 = (int)((uVar6 & 0xffffffff) / (ulong)uVar1);
        }
        else {
          iVar5 = (int)((long)uVar6 / (long)(int)uVar1);
        }
      }
      *param_4 = iVar5;
      iVar5 = *param_5;
      uVar1 = *(uint *)(lVar2 + 0x2c);
      if (uVar1 != *(uint *)(param_1 + 0x2c)) {
        uVar6 = (long)(int)*(uint *)(param_1 + 0x2c) * (long)iVar5;
        if ((uVar6 | (long)(int)uVar1) >> 0x20 == 0) {
          iVar5 = (int)((uVar6 & 0xffffffff) / (ulong)uVar1);
        }
        else {
          iVar5 = (int)((long)uVar6 / (long)(int)uVar1);
        }
      }
    }
    *param_5 = iVar5;
  }
  return iVar4;
}



// Function : hb_font_get_font_h_extents_default
// Namespace: 
// Entry    : 00412540
// Prototype: int hb_font_get_font_h_extents_default(long param_1, undefined8 param_2, int * param_3)
// Body     : 00412540 - 0041261c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_font_get_font_h_extents_default(hb_font_t*, void*, hb_font_extents_t*, void*) */

int __cdecl hb_font_get_font_h_extents_default(long param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)(param_1 + 0x18);
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  puVar2 = *(undefined8 **)(*(long *)(lVar7 + 0x90) + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar2;
  }
  iVar3 = (**(code **)(*(long *)(lVar7 + 0x90) + 0x20))
                    (lVar7,*(undefined8 *)(lVar7 + 0x98),param_3,uVar6);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x2c);
    uVar8 = (ulong)(int)uVar1;
    lVar7 = (long)(int)*(uint *)(param_1 + 0x2c);
    if (uVar1 != *(uint *)(param_1 + 0x2c)) {
      uVar5 = *param_3 * lVar7;
      if ((uVar5 | uVar8) >> 0x20 == 0) {
        iVar4 = (int)((uVar5 & 0xffffffff) / (ulong)uVar1);
      }
      else {
        iVar4 = (int)((long)uVar5 / (long)uVar8);
      }
      *param_3 = iVar4;
      uVar5 = param_3[1] * lVar7;
      if ((uVar5 | uVar8) >> 0x20 == 0) {
        iVar4 = (int)((uVar5 & 0xffffffff) / (ulong)uVar1);
      }
      else {
        iVar4 = (int)((long)uVar5 / (long)uVar8);
      }
      param_3[1] = iVar4;
      uVar5 = lVar7 * param_3[2];
      if ((uVar5 | uVar8) >> 0x20 == 0) {
        iVar4 = (int)((uVar5 & 0xffffffff) / (ulong)uVar1);
      }
      else {
        iVar4 = (int)((long)uVar5 / (long)uVar8);
      }
      goto LAB_004125a2;
    }
  }
  iVar4 = param_3[2];
LAB_004125a2:
  param_3[2] = iVar4;
  return iVar3;
}



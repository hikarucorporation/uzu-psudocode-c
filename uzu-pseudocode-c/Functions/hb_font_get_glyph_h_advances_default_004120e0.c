// Function : hb_font_get_glyph_h_advances_default
// Namespace: 
// Entry    : 004120e0
// Prototype: undefined hb_font_get_glyph_h_advances_default(long param_1, undefined8 param_2, uint param_3, undefined4 * param_4, ulong param_5, int * param_6, uint param_7)
// Body     : 004120e0 - 004122ac


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_font_get_glyph_h_advances_default(hb_font_t*, void*, unsigned int, unsigned int const*,
   unsigned int, int*, unsigned int, void*) */

void __cdecl
hb_font_get_glyph_h_advances_default
          (long param_1,undefined8 param_2,uint param_3,undefined4 *param_4,ulong param_5,
          int *param_6,uint param_7)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  
  uVar8 = (ulong)param_7;
  pcVar4 = *(code **)(*(long *)(param_1 + 0x90) + 0x48);
  if (pcVar4 == (code *)PTR_hb_font_get_glyph_h_advance_default_00718ab8) {
    lVar6 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)(*(long *)(lVar6 + 0x90) + 0x10);
    if (lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar2 + 0x38);
    }
    (**(code **)(*(long *)(lVar6 + 0x90) + 0x58))
              (lVar6,*(undefined8 *)(lVar6 + 0x98),param_3,param_4,param_5,param_6,uVar8,uVar5);
    if ((param_3 != 0) && (lVar6 = *(long *)(param_1 + 0x18), lVar6 != 0)) {
      if (param_3 != 1) {
        uVar9 = param_3 & 0xfffffffe;
        piVar11 = param_6;
        do {
          iVar10 = *piVar11;
          uVar1 = *(uint *)(lVar6 + 0x28);
          if (uVar1 != *(uint *)(param_1 + 0x28)) {
            uVar7 = (long)(int)*(uint *)(param_1 + 0x28) * (long)iVar10;
            if ((uVar7 | (long)(int)uVar1) >> 0x20 == 0) {
              iVar10 = (int)((uVar7 & 0xffffffff) / (ulong)uVar1);
            }
            else {
              iVar10 = (int)((long)uVar7 / (long)(int)uVar1);
            }
          }
          *piVar11 = iVar10;
          param_6 = (int *)((long)piVar11 + uVar8 * 2);
          iVar10 = *(int *)((long)piVar11 + uVar8);
          uVar1 = *(uint *)(lVar6 + 0x28);
          if (uVar1 != *(uint *)(param_1 + 0x28)) {
            uVar7 = (long)(int)*(uint *)(param_1 + 0x28) * (long)iVar10;
            if ((uVar7 | (long)(int)uVar1) >> 0x20 == 0) {
              iVar10 = (int)((uVar7 & 0xffffffff) / (ulong)uVar1);
            }
            else {
              iVar10 = (int)((long)uVar7 / (long)(int)uVar1);
            }
          }
          *(int *)((long)piVar11 + uVar8) = iVar10;
          uVar9 = uVar9 - 2;
          piVar11 = param_6;
        } while (uVar9 != 0);
        if ((param_3 & 1) == 0) {
          return;
        }
      }
      iVar10 = *param_6;
      uVar9 = *(uint *)(lVar6 + 0x28);
      if (uVar9 != *(uint *)(param_1 + 0x28)) {
        uVar8 = (long)(int)*(uint *)(param_1 + 0x28) * (long)iVar10;
        if ((uVar8 | (long)(int)uVar9) >> 0x20 == 0) {
          iVar10 = (int)((uVar8 & 0xffffffff) / (ulong)uVar9);
        }
        else {
          iVar10 = (int)((long)uVar8 / (long)(int)uVar9);
        }
      }
      *param_6 = iVar10;
    }
  }
  else if (param_3 != 0) {
    iVar10 = param_3 - 1;
    lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar6 == 0) goto LAB_00412140;
    do {
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      while( true ) {
        iVar3 = (*pcVar4)(param_1,*(undefined8 *)(param_1 + 0x98),*param_4,uVar5);
        *param_6 = iVar3;
        bVar12 = iVar10 == 0;
        iVar10 = iVar10 + -1;
        if (bVar12) {
          return;
        }
        param_6 = (int *)((long)param_6 + uVar8);
        param_4 = (undefined4 *)((long)param_4 + (param_5 & 0xffffffff));
        pcVar4 = *(code **)(*(long *)(param_1 + 0x90) + 0x48);
        lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
        if (lVar6 != 0) break;
LAB_00412140:
        uVar5 = 0;
      }
    } while( true );
  }
  return;
}



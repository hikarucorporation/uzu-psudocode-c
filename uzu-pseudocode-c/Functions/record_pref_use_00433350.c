// Function : record_pref_use
// Namespace: 
// Entry    : 00433350
// Prototype: undefined8 record_pref_use(undefined8 param_1, undefined8 param_2, long param_3)
// Body     : 00433350 - 0043342e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* record_pref_use(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 __cdecl record_pref_use(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar1 = *(uint *)(param_3 + 0x60);
  if (uVar1 != 0) {
    lVar2 = *(long *)(param_3 + 0x70);
    uVar7 = 0;
    do {
      if (uVar1 - 1 == uVar7) {
        uVar7 = (ulong)uVar1;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (*(char *)(lVar2 + 0xf) == *(char *)(lVar2 + 0xf + (uVar7 & 0xffffffff) * 0x14));
    uVar9 = 0;
    lVar10 = lVar2;
    uVar11 = uVar1;
    do {
      uVar5 = (uint)uVar7;
      uVar12 = uVar7 & 0xffffffff;
      uVar8 = uVar7 & 0xffffffff;
      if ((uint)uVar9 < uVar5) {
        pbVar4 = (byte *)(lVar2 + 0xc + uVar9 * 0x14);
        do {
          if ((*pbVar4 & 0x10) != 0) {
            *(undefined1 *)(lVar2 + 0x12 + (uVar9 & 0xffffffff) * 0x14) = 0x16;
            uVar11 = *(uint *)(param_3 + 0x60);
            lVar10 = *(long *)(param_3 + 0x70);
            break;
          }
          uVar9 = uVar9 + 1;
          pbVar4 = pbVar4 + 0x14;
        } while (uVar5 != (uint)uVar9);
      }
      uVar3 = uVar5 + 1;
      if (uVar5 + 1 < uVar11) {
        uVar3 = uVar11;
      }
      uVar7 = uVar7 & 0xffffffff;
      do {
        if (uVar3 - 1 == (int)uVar7) {
          uVar7 = (ulong)uVar3;
          break;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar6;
      } while (*(char *)(lVar10 + 0xf + uVar8 * 0x14) ==
               *(char *)(lVar10 + 0xf + (ulong)uVar6 * 0x14));
      uVar9 = uVar12;
    } while (uVar5 < uVar1);
  }
  return 0;
}



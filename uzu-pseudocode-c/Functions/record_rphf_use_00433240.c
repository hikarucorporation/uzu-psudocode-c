// Function : record_rphf_use
// Namespace: 
// Entry    : 00433240
// Prototype: undefined8 record_rphf_use(long param_1, undefined8 param_2, long param_3)
// Body     : 00433240 - 00433340


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* record_rphf_use(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 __cdecl record_rphf_use(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar1 = **(uint **)(param_1 + 0x88);
  if ((uVar1 != 0) && (uVar2 = *(uint *)(param_3 + 0x60), uVar2 != 0)) {
    lVar3 = *(long *)(param_3 + 0x70);
    uVar8 = 0;
    do {
      if (uVar2 - 1 == uVar8) {
        uVar8 = (ulong)uVar2;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (*(char *)(lVar3 + 0xf) == *(char *)(lVar3 + 0xf + (uVar8 & 0xffffffff) * 0x14));
    uVar10 = 0;
    lVar11 = lVar3;
    uVar12 = uVar2;
    do {
      uVar6 = (uint)uVar8;
      uVar13 = uVar8 & 0xffffffff;
      uVar9 = uVar8 & 0xffffffff;
      if ((uint)uVar10 < uVar6) {
        pbVar5 = (byte *)(lVar3 + 0xc + uVar10 * 0x14);
        do {
          if ((*(uint *)(pbVar5 + -8) & uVar1) == 0) break;
          if ((*pbVar5 & 0x10) != 0) {
            *(undefined1 *)(lVar3 + 0x12 + (uVar10 & 0xffffffff) * 0x14) = 0x12;
            uVar12 = *(uint *)(param_3 + 0x60);
            lVar11 = *(long *)(param_3 + 0x70);
            break;
          }
          uVar10 = uVar10 + 1;
          pbVar5 = pbVar5 + 0x14;
        } while (uVar6 != (uint)uVar10);
      }
      uVar4 = uVar6 + 1;
      if (uVar6 + 1 < uVar12) {
        uVar4 = uVar12;
      }
      uVar8 = uVar8 & 0xffffffff;
      do {
        if (uVar4 - 1 == (int)uVar8) {
          uVar8 = (ulong)uVar4;
          break;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar7;
      } while (*(char *)(lVar11 + 0xf + uVar9 * 0x14) ==
               *(char *)(lVar11 + 0xf + (ulong)uVar7 * 0x14));
      uVar10 = uVar13;
    } while (uVar6 < uVar2);
  }
  return 0;
}



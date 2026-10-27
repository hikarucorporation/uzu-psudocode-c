// Function : replace_glyphs<unsigned_int>
// Namespace: hb_buffer_t
// Entry    : 00416d60
// Prototype: bool replace_glyphs<unsigned_int>(hb_buffer_t * param_1, int param_2, undefined4 * param_3)
// Body     : 00416d60 - 00416e21


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool hb_buffer_t::replace_glyphs<unsigned int>(unsigned int, unsigned int, unsigned int const*)
    */

bool __cdecl
hb_buffer_t::replace_glyphs<unsigned_int>(hb_buffer_t *param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  uVar9 = *(int *)(param_1 + 100) + 1;
  if (((uVar9 == 0) || (uVar9 < *(uint *)(param_1 + 0x68))) ||
     (lVar5 = enlarge(param_1,uVar9), (char)lVar5 != '\0')) {
    if ((*(void **)(param_1 + 0x78) == *(void **)(param_1 + 0x70)) &&
       (uVar9 = *(uint *)(param_1 + 100), (uint)(*(int *)(param_1 + 0x5c) + param_2) < uVar9 + 1)) {
      *(void **)(param_1 + 0x78) = *(void **)(param_1 + 0x80);
      if ((ulong)uVar9 != 0) {
        memcpy(*(void **)(param_1 + 0x80),*(void **)(param_1 + 0x70),(ulong)uVar9 * 0x14);
      }
    }
    merge_clusters_impl(param_1,*(uint *)(param_1 + 0x5c),*(uint *)(param_1 + 0x5c) + param_2);
    uVar9 = *(uint *)(param_1 + 0x5c);
    uVar3 = *(uint *)(param_1 + 100);
    uVar7 = (ulong)uVar3;
    uVar6 = uVar3 - 1;
    if (uVar3 == 0) {
      uVar6 = 0;
    }
    if (uVar9 < *(uint *)(param_1 + 0x60)) {
      uVar6 = uVar9;
    }
    lVar5 = *(long *)(param_1 + 0x78);
    lVar8 = *(long *)(param_1 + 0x70);
    if (uVar9 >= *(uint *)(param_1 + 0x60)) {
      lVar8 = lVar5;
    }
    *(undefined4 *)(lVar5 + 0x10 + uVar7 * 0x14) =
         *(undefined4 *)(lVar8 + 0x10 + (ulong)uVar6 * 0x14);
    puVar1 = (undefined8 *)(lVar8 + (ulong)uVar6 * 0x14);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar5 + uVar7 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    *(undefined4 *)(lVar5 + uVar7 * 0x14) = *param_3;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_2;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  return SUB81(lVar5,0);
}



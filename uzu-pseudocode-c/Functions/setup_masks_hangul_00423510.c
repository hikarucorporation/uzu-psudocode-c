// Function : setup_masks_hangul
// Namespace: 
// Entry    : 00423510
// Prototype: undefined setup_masks_hangul(long param_1, long param_2)
// Body     : 00423510 - 004235ac


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* setup_masks_hangul(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void __cdecl setup_masks_hangul(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_1 + 0x88);
  if ((lVar3 != 0) && (uVar2 = *(uint *)(param_2 + 0x60), uVar2 != 0)) {
    lVar4 = *(long *)(param_2 + 0x70);
    if (2 < uVar2 - 1) {
      uVar5 = uVar2 & 0xfffffffc;
      do {
        *(uint *)(lVar4 + 4) =
             *(uint *)(lVar4 + 4) | *(uint *)(lVar3 + (ulong)*(byte *)(lVar4 + 0x13) * 4);
        *(uint *)(lVar4 + 0x18) =
             *(uint *)(lVar4 + 0x18) | *(uint *)(lVar3 + (ulong)*(byte *)(lVar4 + 0x27) * 4);
        *(uint *)(lVar4 + 0x2c) =
             *(uint *)(lVar4 + 0x2c) | *(uint *)(lVar3 + (ulong)*(byte *)(lVar4 + 0x3b) * 4);
        *(uint *)(lVar4 + 0x40) =
             *(uint *)(lVar4 + 0x40) | *(uint *)(lVar3 + (ulong)*(byte *)(lVar4 + 0x4f) * 4);
        lVar4 = lVar4 + 0x50;
        uVar5 = uVar5 - 4;
      } while (uVar5 != 0);
    }
    if ((uVar2 & 3) != 0) {
      lVar6 = 0;
      do {
        puVar1 = (uint *)(lVar4 + 4 + lVar6);
        *puVar1 = *puVar1 | *(uint *)(lVar3 + (ulong)*(byte *)(lVar4 + 0x13 + lVar6) * 4);
        lVar6 = lVar6 + 0x14;
      } while ((uVar2 & 3) * 0x14 != (int)lVar6);
    }
  }
  *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) & 0x7f;
  return;
}



// Function : setup_masks_use
// Namespace: 
// Entry    : 0042fcb0
// Prototype: undefined setup_masks_use(long param_1, hb_buffer_t * param_2)
// Body     : 0042fcb0 - 0042fdaf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* setup_masks_use(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void __cdecl setup_masks_use(long param_1,hb_buffer_t *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x88) + 8);
  if (lVar2 != 0) {
    setup_masks_arabic_plan(lVar2,param_2,*(int *)(param_1 + 4));
  }
  param_2[0xb8] = (hb_buffer_t)((byte)param_2[0xb8] | 0x40);
  if ((ulong)*(uint *)(param_2 + 0x60) != 0) {
    lVar2 = *(long *)(param_2 + 0x70);
    lVar3 = (ulong)*(uint *)(param_2 + 0x60) * 0x14;
    lVar4 = 0;
    do {
      while (uVar1 = *(uint *)(lVar2 + lVar4), 0xe0fff < uVar1) {
        *(undefined1 *)(lVar2 + 0x12 + lVar4) = 0;
        lVar4 = lVar4 + 0x14;
        if (lVar3 == lVar4) {
          return;
        }
      }
      *(undefined *)(lVar2 + 0x12 + lVar4) =
           (&DAT_005fc449)
           [(ulong)(uVar1 & 1) +
            (ulong)(byte)(&DAT_005fbb31)
                         [(ulong)(uVar1 >> 1 & 7) +
                          (ulong)*(ushort *)
                                  (hb_use_u16 +
                                  ((ulong)(uVar1 >> 4 & 7) +
                                  (ulong)(byte)(&DAT_005fb931)
                                               [(ulong)((byte)(&hb_use_u8)[uVar1 >> 0xd] >>
                                                        ((byte)(uVar1 >> 10) & 4) & 0xf) << 5 |
                                                (ulong)(uVar1 >> 7 & 0x1f)] * 8) * 2) * 8] * 2];
      lVar4 = lVar4 + 0x14;
    } while (lVar3 != lVar4);
  }
  return;
}



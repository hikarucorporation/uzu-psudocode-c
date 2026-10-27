// Function : hb_paint_extents_paint_image
// Namespace: 
// Entry    : 0046bc40
// Prototype: undefined8 hb_paint_extents_paint_image(undefined8 param_1, long param_2)
// Body     : 0046bc40 - 0046bdb1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_paint_extents_paint_image(hb_paint_funcs_t*, void*, hb_blob_t*, unsigned int, unsigned int,
   unsigned int, float, hb_glyph_extents_t*, void*) */

undefined8 __cdecl hb_paint_extents_paint_image(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *in_stack_00000008;
  
  hb_paint_extents_context_t::push_clip
            (CONCAT44((float)in_stack_00000008[3] + (float)in_stack_00000008[1],
                      (float)*in_stack_00000008),
             CONCAT44((float)in_stack_00000008[1],
                      (float)in_stack_00000008[2] + (float)*in_stack_00000008),param_2);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 0) {
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90._0_4_ = 0;
    piVar4 = (int *)&_hb_CrapPool;
    iVar2 = *(int *)(param_2 + 0x24);
  }
  else {
    piVar4 = (int *)((ulong)(iVar1 - 1) * 0x14 + *(long *)(param_2 + 0x18));
    iVar2 = *(int *)(param_2 + 0x24);
  }
  if (iVar2 == 0) {
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90._0_4_ = 0;
    piVar5 = (int *)&_hb_CrapPool;
    iVar2 = *piVar4;
  }
  else {
    piVar5 = (int *)((ulong)(iVar2 - 1) * 0x14 + *(long *)(param_2 + 0x28));
    iVar2 = *piVar4;
  }
  if (iVar2 == 1) {
    if (*piVar5 == 1) {
      uVar6 = -(uint)((float)piVar5[1] <= (float)piVar4[1]);
      piVar5[1] = ~uVar6 & piVar4[1] | piVar5[1] & uVar6;
      uVar6 = -(uint)((float)piVar5[2] <= (float)piVar4[2]);
      piVar5[2] = ~uVar6 & piVar4[2] | piVar5[2] & uVar6;
      uVar6 = -(uint)((float)piVar4[3] <= (float)piVar5[3]);
      piVar5[3] = ~uVar6 & piVar4[3] | piVar5[3] & uVar6;
      uVar6 = -(uint)((float)piVar4[4] <= (float)piVar5[4]);
      piVar5[4] = ~uVar6 & piVar4[4] | piVar5[4] & uVar6;
    }
    else if (*piVar5 == 2) {
      piVar5[4] = piVar4[4];
      uVar3 = *(undefined8 *)(piVar4 + 2);
      *(undefined8 *)piVar5 = *(undefined8 *)piVar4;
      *(undefined8 *)(piVar5 + 2) = uVar3;
      iVar1 = *(int *)(param_2 + 0x14);
    }
  }
  else if (iVar2 == 0) {
    *piVar5 = 0;
  }
  if (iVar1 != 0) {
    *(int *)(param_2 + 0x14) = iVar1 + -1;
  }
  return 1;
}



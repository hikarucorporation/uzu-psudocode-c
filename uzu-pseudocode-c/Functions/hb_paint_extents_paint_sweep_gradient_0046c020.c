// Function : hb_paint_extents_paint_sweep_gradient
// Namespace: 
// Entry    : 0046c020
// Prototype: undefined hb_paint_extents_paint_sweep_gradient(undefined8 param_1, long param_2)
// Body     : 0046c020 - 0046c143


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_paint_extents_paint_sweep_gradient(hb_paint_funcs_t*, void*, hb_color_line_t*, float, float,
   float, float, void*) */

void __cdecl hb_paint_extents_paint_sweep_gradient(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90._0_4_ = 0;
    piVar3 = (int *)&_hb_CrapPool;
    iVar1 = *(int *)(param_2 + 0x24);
  }
  else {
    piVar3 = (int *)((ulong)(*(int *)(param_2 + 0x14) - 1) * 0x14 + *(long *)(param_2 + 0x18));
    iVar1 = *(int *)(param_2 + 0x24);
  }
  if (iVar1 == 0) {
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90._0_4_ = 0;
    piVar4 = (int *)&_hb_CrapPool;
    iVar1 = *piVar3;
  }
  else {
    piVar4 = (int *)((ulong)(iVar1 - 1) * 0x14 + *(long *)(param_2 + 0x28));
    iVar1 = *piVar3;
  }
  if (iVar1 == 1) {
    if (*piVar4 == 1) {
      uVar5 = -(uint)((float)piVar4[1] <= (float)piVar3[1]);
      piVar4[1] = ~uVar5 & piVar3[1] | piVar4[1] & uVar5;
      uVar5 = -(uint)((float)piVar4[2] <= (float)piVar3[2]);
      piVar4[2] = ~uVar5 & piVar3[2] | piVar4[2] & uVar5;
      uVar5 = -(uint)((float)piVar3[3] <= (float)piVar4[3]);
      piVar4[3] = ~uVar5 & piVar3[3] | piVar4[3] & uVar5;
      uVar5 = -(uint)((float)piVar3[4] <= (float)piVar4[4]);
      piVar4[4] = ~uVar5 & piVar3[4] | piVar4[4] & uVar5;
    }
    else if (*piVar4 == 2) {
      piVar4[4] = piVar3[4];
      uVar2 = *(undefined8 *)(piVar3 + 2);
      *(undefined8 *)piVar4 = *(undefined8 *)piVar3;
      *(undefined8 *)(piVar4 + 2) = uVar2;
      return;
    }
  }
  else if (iVar1 == 0) {
    *piVar4 = 0;
    return;
  }
  return;
}



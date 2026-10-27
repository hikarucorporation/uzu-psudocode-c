// Function : hb_draw_extents_line_to
// Namespace: 
// Entry    : 0046c750
// Prototype: undefined hb_draw_extents_line_to(float param_1, float param_2, undefined8 param_3, float * param_4)
// Body     : 0046c750 - 0046c7c9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_draw_extents_line_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, void*) */

void __cdecl hb_draw_extents_line_to(float param_1,float param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  fVar1 = *param_4;
  fVar2 = param_4[2];
  if (fVar1 <= fVar2) {
    *param_4 = (float)(~-(uint)(fVar1 <= param_1) & (uint)param_1 |
                      (uint)fVar1 & -(uint)(fVar1 <= param_1));
    uVar3 = -(uint)(param_4[1] <= param_2);
    param_4[1] = (float)(~uVar3 & (uint)param_2 | (uint)param_4[1] & uVar3);
    param_4[2] = (float)(~-(uint)(param_1 <= fVar2) & (uint)param_1 |
                        (uint)fVar2 & -(uint)(param_1 <= fVar2));
    uVar3 = -(uint)(param_2 <= param_4[3]);
    param_4[3] = (float)(~uVar3 & (uint)param_2 | (uint)param_4[3] & uVar3);
    return;
  }
  *(ulong *)param_4 = CONCAT44(param_2,param_1);
  *(ulong *)(param_4 + 2) = CONCAT44(param_2,param_1);
  return;
}



// Function : hb_draw_extents_quadratic_to
// Namespace: 
// Entry    : 0046c7d0
// Prototype: undefined hb_draw_extents_quadratic_to(float param_1, float param_2, float param_3, float param_4, undefined8 param_5_00, float * param_6)
// Body     : 0046c7d0 - 0046c8ac


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_draw_extents_quadratic_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, float,
   float, void*) */

void __cdecl
hb_draw_extents_quadratic_to
          (float param_1,float param_2,float param_3,float param_4,undefined8 param_5_00,
          float *param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *param_6;
  fVar5 = param_6[2];
  if (fVar5 < fVar3) {
    fVar3 = param_1;
    fVar5 = param_2;
  }
  else {
    fVar6 = (float)(~-(uint)(fVar3 <= param_1) & (uint)param_1 |
                   (uint)fVar3 & -(uint)(fVar3 <= param_1));
    fVar3 = (float)(~-(uint)(param_1 <= fVar5) & (uint)param_1 |
                   (uint)fVar5 & -(uint)(param_1 <= fVar5));
    if (fVar3 < fVar6) {
      *param_6 = param_3;
      param_6[1] = param_4;
      param_6[2] = param_3;
      param_6[3] = param_4;
      return;
    }
    uVar1 = -(uint)(param_6[1] <= param_2);
    uVar2 = -(uint)(param_2 <= param_6[3]);
    uVar4 = ~uVar2 & (uint)param_2;
    param_2 = (float)(~uVar1 & (uint)param_2 | (uint)param_6[1] & uVar1);
    param_1 = fVar6;
    fVar5 = (float)(uVar4 | (uint)param_6[3] & uVar2);
  }
  *param_6 = (float)(~-(uint)(param_1 <= param_3) & (uint)param_3 |
                    (uint)param_1 & -(uint)(param_1 <= param_3));
  param_6[1] = (float)(~-(uint)(param_2 <= param_4) & (uint)param_4 |
                      (uint)param_2 & -(uint)(param_2 <= param_4));
  param_6[2] = (float)(~-(uint)(param_3 <= fVar3) & (uint)param_3 |
                      (uint)fVar3 & -(uint)(param_3 <= fVar3));
  param_6[3] = (float)(~-(uint)(param_4 <= fVar5) & (uint)param_4 |
                      (uint)fVar5 & -(uint)(param_4 <= fVar5));
  return;
}



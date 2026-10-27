// Function : hb_draw_extents_cubic_to
// Namespace: 
// Entry    : 0046c8b0
// Prototype: undefined hb_draw_extents_cubic_to(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, undefined8 param_7_00, float * param_8)
// Body     : 0046c8b0 - 0046ca01


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_draw_extents_cubic_to(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, float, float,
   float, float, void*) */

void __cdecl
hb_draw_extents_cubic_to
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          undefined8 param_7_00,float *param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *param_8;
  fVar4 = param_8[2];
  if (fVar4 < fVar7) {
    fVar7 = param_1;
    fVar4 = param_2;
  }
  else {
    fVar6 = (float)(~-(uint)(fVar7 <= param_1) & (uint)param_1 |
                   (uint)fVar7 & -(uint)(fVar7 <= param_1));
    fVar7 = (float)(~-(uint)(param_1 <= fVar4) & (uint)param_1 |
                   (uint)fVar4 & -(uint)(param_1 <= fVar4));
    if (fVar7 < fVar6) {
      fVar7 = param_3;
      fVar4 = param_4;
      goto LAB_0046c988;
    }
    uVar2 = -(uint)(param_8[1] <= param_2);
    uVar5 = ~uVar2 & (uint)param_2;
    uVar3 = -(uint)(param_2 <= param_8[3]);
    param_2 = (float)(~uVar3 & (uint)param_2 | (uint)param_8[3] & uVar3);
    param_1 = fVar6;
    fVar4 = (float)(uVar5 | (uint)param_8[1] & uVar2);
  }
  fVar6 = (float)(~-(uint)(param_1 <= param_3) & (uint)param_3 |
                 (uint)param_1 & -(uint)(param_1 <= param_3));
  fVar7 = (float)(~-(uint)(param_3 <= fVar7) & (uint)param_3 |
                 (uint)fVar7 & -(uint)(param_3 <= fVar7));
  if (fVar7 < fVar6) {
    *param_8 = param_5;
    param_8[1] = param_6;
    param_8[2] = param_5;
    param_8[3] = param_6;
    return;
  }
  bVar1 = param_4 <= param_2;
  uVar2 = ~-(uint)bVar1 & (uint)param_4;
  param_4 = (float)(~-(uint)(fVar4 <= param_4) & (uint)param_4 |
                   (uint)fVar4 & -(uint)(fVar4 <= param_4));
  param_3 = fVar6;
  fVar4 = (float)(uVar2 | (uint)param_2 & -(uint)bVar1);
LAB_0046c988:
  *param_8 = (float)(~-(uint)(param_3 <= param_5) & (uint)param_5 |
                    (uint)param_3 & -(uint)(param_3 <= param_5));
  param_8[1] = (float)(~-(uint)(param_4 <= param_6) & (uint)param_6 |
                      (uint)param_4 & -(uint)(param_4 <= param_6));
  param_8[2] = (float)(~-(uint)(param_5 <= fVar7) & (uint)param_5 |
                      (uint)fVar7 & -(uint)(param_5 <= fVar7));
  param_8[3] = (float)(~-(uint)(param_6 <= fVar4) & (uint)param_6 |
                      (uint)fVar4 & -(uint)(param_6 <= fVar4));
  return;
}



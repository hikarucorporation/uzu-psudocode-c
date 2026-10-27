// Function : hb_draw_quadratic_to_default
// Namespace: 
// Entry    : 00413200
// Prototype: undefined hb_draw_quadratic_to_default(float param_1, float param_2, float param_3, float param_4, undefined8 param_5_00, long * param_6, long param_7)
// Body     : 00413200 - 00413283


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_draw_quadratic_to_default(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, float,
   float, void*) */

void __cdecl
hb_draw_quadratic_to_default
          (float param_1,float param_2,float param_3,float param_4,undefined8 param_5_00,
          long *param_6,long param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  undefined8 uVar5;
  
  fVar1 = *(float *)(param_6 + 2);
  fVar2 = *(float *)((long)param_6 + 0x14);
  fVar3 = *(float *)(param_6 + 3);
  *(float *)(param_7 + 0xc) = *(float *)(param_7 + 0xc) * fVar1 + fVar3 * *(float *)(param_7 + 0x10)
  ;
  *(float *)(param_7 + 0x10) = *(float *)(param_7 + 0x10) * fVar2;
  lVar4 = *param_6;
  if (*(long *)(lVar4 + 0x38) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00413282. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x20))
            (param_1 * fVar1 + fVar3 * param_2,fVar2 * param_2,param_3 * fVar1 + param_4 * fVar3,
             fVar2 * param_4,lVar4,param_6[1],param_7,uVar5);
  return;
}



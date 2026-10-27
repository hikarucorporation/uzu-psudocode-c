// Function : hb_draw_line_to_default
// Namespace: 
// Entry    : 00413190
// Prototype: undefined hb_draw_line_to_default(float param_1, float param_2, undefined8 param_3_00, long * param_4, long param_5)
// Body     : 00413190 - 004131f9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_draw_line_to_default(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, void*) */

void __cdecl
hb_draw_line_to_default
          (float param_1,float param_2,undefined8 param_3_00,long *param_4,long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  undefined8 uVar5;
  
  fVar1 = *(float *)(param_4 + 2);
  fVar2 = *(float *)((long)param_4 + 0x14);
  fVar3 = *(float *)(param_4 + 3);
  *(float *)(param_5 + 0xc) = *(float *)(param_5 + 0xc) * fVar1 + fVar3 * *(float *)(param_5 + 0x10)
  ;
  *(float *)(param_5 + 0x10) = *(float *)(param_5 + 0x10) * fVar2;
  lVar4 = *param_4;
  if (*(long *)(lVar4 + 0x38) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x004131f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x18))
            (fVar1 * param_1 + fVar3 * param_2,fVar2 * param_2,lVar4,param_4[1],param_5,uVar5);
  return;
}



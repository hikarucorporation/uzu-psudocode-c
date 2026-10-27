// Function : hb_draw_move_to_default
// Namespace: 
// Entry    : 00413140
// Prototype: undefined hb_draw_move_to_default(float param_1, float param_2, undefined8 param_3_00, long * param_4, undefined8 param_5)
// Body     : 00413140 - 00413181


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_draw_move_to_default(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, void*) */

void __cdecl
hb_draw_move_to_default
          (float param_1,float param_2,undefined8 param_3_00,long *param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_4;
  if (*(undefined8 **)(lVar1 + 0x38) == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(lVar1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00413180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))
            (*(float *)(param_4 + 2) * param_1 + *(float *)(param_4 + 3) * param_2,
             *(float *)((long)param_4 + 0x14) * param_2,lVar1,param_4[1],param_5,uVar2);
  return;
}



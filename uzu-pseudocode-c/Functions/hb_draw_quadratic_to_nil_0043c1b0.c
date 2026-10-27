// Function : hb_draw_quadratic_to_nil
// Namespace: 
// Entry    : 0043c1b0
// Prototype: undefined hb_draw_quadratic_to_nil(float param_1, float param_2, float param_3, float param_4, long param_5, undefined8 param_6_00, long param_7)
// Body     : 0043c1b0 - 0043c20e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_draw_quadratic_to_nil(hb_draw_funcs_t*, void*, hb_draw_state_t*, float, float, float, float,
   void*) */

void __cdecl
hb_draw_quadratic_to_nil
          (float param_1,float param_2,float param_3,float param_4,long param_5,
          undefined8 param_6_00,long param_7)

{
                    /* WARNING: Could not recover jumptable at 0x0043c20d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x28))
            ((param_1 + param_1 + *(float *)(param_7 + 0xc)) * DAT_005de5a0,
             (param_2 + param_2 + *(float *)(param_7 + 0x10)) * DAT_005de5a0,
             (param_1 + param_1 + param_3) * DAT_005de5a0,
             (param_2 + param_2 + param_4) * DAT_005de5a0);
  return;
}



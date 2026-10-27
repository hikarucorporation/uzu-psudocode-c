// Function : hb_draw_close_path_default
// Namespace: 
// Entry    : 00413340
// Prototype: undefined hb_draw_close_path_default(undefined8 param_1, long * param_2, undefined8 param_3)
// Body     : 00413340 - 0041335d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_draw_close_path_default(hb_draw_funcs_t*, void*, hb_draw_state_t*, void*) */

void __cdecl hb_draw_close_path_default(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(long *)(lVar1 + 0x38) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0041335c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x30))(lVar1,param_2[1],param_3,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00413358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x30))
            (lVar1,param_2[1],param_3,*(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x20));
  return;
}



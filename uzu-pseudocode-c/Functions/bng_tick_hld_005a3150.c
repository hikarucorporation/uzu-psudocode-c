// Function : bng_tick_hld
// Namespace: 
// Entry    : 005a3150
// Prototype: undefined bng_tick_hld(long param_1)
// Body     : 005a3150 - 005a3165


void bng_tick_hld(long param_1)

{
  *(undefined4 *)(param_1 + 0x490) = 0;
                    /* WARNING: Could not recover jumptable at 0x005a3164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,*(undefined8 *)(param_1 + 0x30),0);
  return;
}



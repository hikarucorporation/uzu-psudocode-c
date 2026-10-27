// Function : toggle_set
// Namespace: 
// Entry    : 005ad850
// Prototype: undefined toggle_set(float param_1, long param_2)
// Body     : 005ad850 - 005ad898


void toggle_set(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x490);
  *(float *)(param_2 + 0x490) = param_1;
  if ((param_1 != 0.0) && (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x2e)) {
    *(float *)(param_2 + 0x494) = param_1;
  }
  if ((param_1 == 0.0) == (fVar1 != 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x005ad897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x38))(param_2,*(undefined8 *)(param_2 + 0x30),0);
    return;
  }
  return;
}



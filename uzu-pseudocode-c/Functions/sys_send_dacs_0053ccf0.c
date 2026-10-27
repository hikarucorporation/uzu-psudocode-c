// Function : sys_send_dacs
// Namespace: 
// Entry    : 0053ccf0
// Prototype: undefined8 sys_send_dacs(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0053ccf0 - 0053cd11


undefined8
sys_send_dacs(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  if (sys_audioapiopened == 9) {
    uVar1 = dummy_send_dacs();
    return uVar1;
  }
  post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"unknown API");
  return 0;
}



// Function : netsend_free
// Namespace: 
// Entry    : 00581730
// Prototype: undefined netsend_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00581730 - 005817ad


void netsend_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  if (*(int *)(param_9 + 0x48) < 0) {
    return;
  }
  sys_rmpollfn(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(int *)(param_9 + 0x48));
  sys_closesocket(*(int *)(param_9 + 0x48));
  *(undefined4 *)(param_9 + 0x48) = 0xffffffff;
  if (*(undefined8 **)(param_9 + 0x58) != (undefined8 *)0x0) {
    socketreceiver_free(*(undefined8 **)(param_9 + 0x58));
  }
  *(undefined8 *)(param_9 + 200) = 0;
  *(undefined8 *)(param_9 + 0xd0) = 0;
  *(undefined8 *)(param_9 + 0xb8) = 0;
  *(undefined8 *)(param_9 + 0xc0) = 0;
  *(undefined8 *)(param_9 + 0xa8) = 0;
  *(undefined8 *)(param_9 + 0xb0) = 0;
  *(undefined8 *)(param_9 + 0x98) = 0;
  *(undefined8 *)(param_9 + 0xa0) = 0;
  *(undefined8 *)(param_9 + 0x88) = 0;
  *(undefined8 *)(param_9 + 0x90) = 0;
  *(undefined8 *)(param_9 + 0x78) = 0;
  *(undefined8 *)(param_9 + 0x80) = 0;
  *(undefined8 *)(param_9 + 0x68) = 0;
  *(undefined8 *)(param_9 + 0x70) = 0;
  *(undefined8 *)(param_9 + 0x58) = 0;
  *(undefined8 *)(param_9 + 0x60) = 0;
  *(undefined8 *)(param_9 + 0xd8) = 0;
  outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18))
  ;
  return;
}



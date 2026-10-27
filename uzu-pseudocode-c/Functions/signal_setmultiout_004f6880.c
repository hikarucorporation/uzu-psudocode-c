// Function : signal_setmultiout
// Namespace: 
// Entry    : 004f6880
// Prototype: undefined signal_setmultiout(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, ulong param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004f6880 - 004f68a6


void signal_setmultiout(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 *param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_9;
  iVar1 = piVar2[6];
  piVar2 = signal_new((ulong)(uint)piVar2[4],param_2,param_3,param_4,param_5,param_6,param_7,param_8
                      ,*piVar2,param_10,0,param_12,param_13,param_14);
  *param_9 = piVar2;
  piVar2[6] = iVar1;
  return;
}



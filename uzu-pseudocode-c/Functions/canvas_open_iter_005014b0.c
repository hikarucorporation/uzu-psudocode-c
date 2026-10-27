// Function : canvas_open_iter
// Namespace: 
// Entry    : 005014b0
// Prototype: undefined8 canvas_open_iter(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, undefined8 * param_10)
// Body     : 005014b0 - 005014e7


undefined8
canvas_open_iter(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                char *param_9,undefined8 *param_10)

{
  int iVar1;
  
  iVar1 = sys_trytoopenit(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          (char *)*param_10,(char *)param_10[1],(char *)param_10[2],
                          (undefined8 *)param_10[3],(ulong)*(uint *)(param_10 + 4),
                          (ulong)*(uint *)((long)param_10 + 0x24),1);
  if (iVar1 < 0) {
    return 1;
  }
  *(int *)(param_10 + 5) = iVar1;
  return 0;
}



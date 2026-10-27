// Function : clone_match
// Namespace: 
// Entry    : 00502990
// Prototype: bool clone_match(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00502990 - 005029bf


bool clone_match(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long param_10,long param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  long lVar1;
  
  if (*(int *)(param_9 + 0x38) != 0) {
    lVar1 = **(long **)(param_9 + 0x40);
    if (*(long *)(lVar1 + 200) == param_10) {
      lVar1 = canvas_getdir(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,
                            param_10,param_11,*(long **)(param_9 + 0x40),param_13,param_14);
      return lVar1 == param_11;
    }
  }
  return false;
}



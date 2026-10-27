// Function : file_set_creationmode
// Namespace: 
// Entry    : 0057d3c0
// Prototype: undefined file_set_creationmode(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0057d3c0 - 0057d3ea


void file_set_creationmode
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,int param_11,int *param_12,char *param_13,
               undefined8 param_14)

{
  uint uVar1;
  
  if (param_11 == 1) {
    uVar1 = do_parse_creationmode(param_12);
    *(uint *)(param_9 + 0x48) = uVar1;
    return;
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "usage: \'%s <mode>\'",*param_10,param_12,param_13,param_14);
  return;
}



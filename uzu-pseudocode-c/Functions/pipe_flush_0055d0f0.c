// Function : pipe_flush
// Namespace: 
// Entry    : 0055d0f0
// Prototype: undefined pipe_flush(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055d0f0 - 0055d10f


void pipe_flush(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,char *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 extraout_RDX;
  
  puVar1 = *(undefined8 **)(param_9 + 0x50);
  while (puVar1 != (undefined8 *)0x0) {
    param_1 = hang_tick(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1,
                        param_10,param_11,param_12,param_13,param_14);
    param_11 = extraout_RDX;
    puVar1 = *(undefined8 **)(param_9 + 0x50);
  }
  return;
}



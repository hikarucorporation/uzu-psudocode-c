// Function : block_new
// Namespace: 
// Entry    : 004f5de0
// Prototype: long * block_new(ulong param_1, ulong param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, char * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004f5de0 - 004f5e46


long * block_new(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                char *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  long *plVar1;
  undefined8 extraout_RDX;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_block_class_00715ae0,param_10,param_11,param_12,param_13,param_14);
  plVar1[7] = 0x100000000;
  *(undefined4 *)(plVar1 + 8) = 1;
  *(undefined2 *)((long)plVar1 + 0x54) = 0x100;
  block_set(param_1 & 0xffffffff,param_2 & 0xffffffff,param_3 & 0xffffffff,param_4,param_5,param_6,
            param_7,param_8,(long)plVar1,param_10,extraout_RDX,param_12,param_13,param_14);
  return plVar1;
}



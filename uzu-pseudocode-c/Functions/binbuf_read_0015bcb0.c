// Function : binbuf_read
// Namespace: 
// Entry    : 0015bcb0
// Prototype: undefined8 binbuf_read(undefined8 param_1, undefined8 param_2, long param_3, long param_4, long param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint * param_9, char * param_10, char * param_11, int param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0015bcb0 - 0015bcb5


undefined8
binbuf_read(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
           undefined8 param_6,undefined8 param_7,undefined8 param_8,uint *param_9,char *param_10,
           char *param_11,int param_12,undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_binbuf_read_00716658)();
  return uVar1;
}



// Function : obj_saveformat
// Namespace: 
// Entry    : 00539960
// Prototype: undefined obj_saveformat(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, double param_15)
// Body     : 00539960 - 005399c3


void obj_saveformat(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,int *param_10,undefined8 param_11,undefined8 param_12,char *param_13
                   ,undefined8 param_14,double param_15)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (*(short *)(param_9 + 0x2c) == 0) {
    return;
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *plVar2;
  puVar3 = gensym("f");
  binbuf_addv((double)(int)*(short *)(param_9 + 0x2c),param_2,param_3,param_4,param_5,param_6,
              param_7,param_8,param_10,0x6559ce,lVar1 + 0x120,puVar3,param_13,param_14,param_15);
  return;
}



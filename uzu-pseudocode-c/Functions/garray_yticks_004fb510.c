// Function : garray_yticks
// Namespace: 
// Entry    : 004fb510
// Prototype: undefined garray_yticks(float param_1, float param_2, float param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, double param_15)
// Body     : 004fb510 - 004fb56d


void garray_yticks(float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,double param_15)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_9 + 0x18);
  puVar2 = gensym("yticks");
  pd_vmess((double)param_1,(double)param_2,(double)param_3,param_4,param_5,param_6,param_7,param_8,
           lVar1,puVar2,0x655b7a,param_12,param_13,param_14,param_15);
  return;
}



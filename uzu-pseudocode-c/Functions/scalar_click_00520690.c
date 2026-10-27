// Function : scalar_click
// Namespace: 
// Entry    : 00520690
// Prototype: undefined scalar_click(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, uint * param_10, uint param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, int param_16)
// Body     : 00520690 - 005206f5


void scalar_click(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                 uint *param_10,uint param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,int param_16)

{
  long lVar1;
  
  lVar1 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(param_9 + 0x10));
  scalar_doclick(0,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9 + 0x18,lVar1,param_9,0,
                 param_10,(ulong)param_11,param_12,param_13,param_14,param_15,param_16);
  return;
}



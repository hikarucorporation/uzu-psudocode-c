// Function : bng_newclick
// Namespace: 
// Entry    : 005a2910
// Prototype: undefined8 bng_newclick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int param_12, int param_13, int param_14, undefined8 param_15, int param_16)
// Body     : 005a2910 - 005a2938


undefined8
bng_newclick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 param_10,int param_11,int param_12,int param_13,int param_14,
            undefined8 param_15,int param_16)

{
  if (param_16 != 0) {
    bng_click(CONCAT44((int)((ulong)param_1 >> 0x20),(float)param_11),
              CONCAT44((int)((ulong)param_2 >> 0x20),(float)param_12),
              CONCAT44((int)((ulong)param_3 >> 0x20),(float)param_13),0,
              CONCAT44((int)((ulong)param_5 >> 0x20),(float)param_14),param_6,param_7,param_8,
              param_9);
  }
  return 1;
}



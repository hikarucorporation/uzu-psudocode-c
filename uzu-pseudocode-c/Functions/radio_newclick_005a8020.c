// Function : radio_newclick
// Namespace: 
// Entry    : 005a8020
// Prototype: undefined8 radio_newclick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15, int param_16)
// Body     : 005a8020 - 005a8048


undefined8
radio_newclick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,undefined8 param_14,undefined8 param_15,int param_16)

{
  if (param_16 != 0) {
    radio_click(CONCAT44((int)((ulong)param_1 >> 0x20),(float)(int)param_11),
                CONCAT44((int)((ulong)param_2 >> 0x20),(float)(int)param_12),
                CONCAT44((int)((ulong)param_3 >> 0x20),(float)(int)param_13),0,
                CONCAT44((int)((ulong)param_5 >> 0x20),(float)(int)param_14),param_6,param_7,param_8
                ,param_9,param_10,param_11,param_12,param_13,param_14);
  }
  return 1;
}



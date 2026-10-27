// Function : garray_arrayviewlist_close
// Namespace: 
// Entry    : 004fa4f0
// Prototype: undefined garray_arrayviewlist_close(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 004fa4f0 - 004fa50f


void garray_arrayviewlist_close
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  *(byte *)(param_9 + 0x30) = *(byte *)(param_9 + 0x30) & 0xf7;
  pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x653c2c,"s",
              **(undefined8 **)(param_9 + 0x28),param_12,param_13,param_14,param_15);
  return;
}



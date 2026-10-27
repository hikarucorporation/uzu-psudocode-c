// Function : iemgui_free
// Namespace: 
// Entry    : 00576300
// Prototype: undefined iemgui_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 00576300 - 0057632c


void iemgui_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9,undefined8 *param_10,undefined8 param_11,undefined8 *param_12,
                char *param_13,undefined8 param_14)

{
  undefined8 extraout_RDX;
  
  if ((*(byte *)(param_9 + 0x88) & 0x40) != 0) {
    param_10 = (undefined8 *)param_9[0x8c];
    param_1 = pd_unbind(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11,param_12,param_13,param_14);
    param_11 = extraout_RDX;
  }
  pdgui_stub_deleteforkey
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,param_10,
             param_11,param_12,param_13,param_14);
  sys_unqueuegui((long)param_9);
  return;
}



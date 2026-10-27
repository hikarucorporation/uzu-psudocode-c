// Function : libpd_free_instance
// Namespace: 
// Entry    : 004d7aa0
// Prototype: undefined libpd_free_instance(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined1 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004d7aa0 - 004d7ac4


void libpd_free_instance(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,undefined1 *param_9,undefined8 param_10,undefined8 param_11,
                        undefined8 param_12,char *param_13,undefined8 param_14)

{
  undefined8 extraout_RDX;
  undefined8 uVar1;
  
  if (param_9 == PTR_pd_maininstance_00715748) {
    return;
  }
  uVar1 = libpdimp_free(*(undefined8 **)(*(long *)(param_9 + 0x50) + 0x60));
  pdinstance_free(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                  param_10,extraout_RDX,param_12,param_13,param_14);
  return;
}



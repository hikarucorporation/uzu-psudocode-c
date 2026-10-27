// Function : garray_getfloatarray
// Namespace: 
// Entry    : 004fab60
// Prototype: undefined garray_getfloatarray(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined4 * param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004fab60 - 004fabc0


void garray_getfloatarray
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined4 *param_10,undefined8 *param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  long lVar1;
  int *piVar2;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_9 + 0x18) + 0x48);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_9 + 0x18);
  }
  piVar2 = (int *)**(undefined8 **)(lVar1 + 200);
  uVar3 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                   "an operation on the array \'%s\' in the patch \'%s\'",
                   **(undefined8 **)(param_9 + 0x20),piVar2,param_13,param_14);
  uVar3 = pd_error(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                   "failed since it uses garray_getfloatarray while running 64-bit",extraout_RDX,
                   piVar2,param_13,param_14);
  garray_getfloatwords
            (uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11
             ,piVar2,param_13,param_14);
  return;
}



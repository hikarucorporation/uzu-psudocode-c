// Function : binbuf_print
// Namespace: 
// Entry    : 00530390
// Prototype: undefined binbuf_print(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, undefined8 param_10, undefined8 param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00530390 - 00530425


void binbuf_print(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 int *param_9,undefined8 param_10,undefined8 param_11,long param_12,char *param_13,
                 undefined8 param_14)

{
  bool bVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (0 < *param_9) {
    bVar4 = true;
    lVar2 = 0;
    lVar3 = 0;
    bVar1 = false;
    do {
      if (bVar4) {
        if (bVar1) {
          param_1 = endpost(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        }
        param_1 = startpost(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"");
        bVar1 = true;
        param_11 = extraout_RDX;
      }
      param_1 = postatom(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,1,
                         (int *)(*(long *)(param_9 + 2) + lVar2),param_11,param_12,param_13,param_14
                        );
      bVar4 = *(int *)(*(long *)(param_9 + 2) + lVar2) == 4;
      lVar3 = lVar3 + 1;
      param_12 = (long)*param_9;
      lVar2 = lVar2 + 0x10;
      param_11 = extraout_RDX_00;
    } while (lVar3 < param_12);
    if (bVar1) {
      endpost(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
  }
  return;
}



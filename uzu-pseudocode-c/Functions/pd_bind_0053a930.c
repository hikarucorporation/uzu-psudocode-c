// Function : pd_bind
// Namespace: 
// Entry    : 0053a930
// Prototype: undefined pd_bind(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0053a930 - 0053a9ef


void pd_bind(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
            undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 unaff_BL;
  
  lVar1 = bindlist_class;
  plVar2 = *(long **)(param_10 + 8);
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_10 + 8) = param_9;
  }
  else if (*plVar2 == bindlist_class) {
    puVar3 = getbytes(0x10);
    puVar3[1] = plVar2[1];
    *puVar3 = param_9;
    plVar2[1] = (long)puVar3;
  }
  else {
    if (bindlist_class == 0) {
      plVar2 = (long *)0x0;
      bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
          "pd_new: apparently called before setup routine",param_10,param_11,param_12,param_13,
          param_14,unaff_BL);
    }
    else {
      plVar2 = getbytes(*(size_t *)(bindlist_class + 0x18));
      *plVar2 = lVar1;
      if ((*(byte *)(lVar1 + 0x94) & 2) != 0) {
        plVar2[3] = 0;
        plVar2[4] = 0;
      }
    }
    puVar3 = getbytes(0x10);
    puVar4 = getbytes(0x10);
    plVar2[1] = (long)puVar3;
    *puVar3 = param_9;
    puVar3[1] = puVar4;
    *puVar4 = *(undefined8 *)(param_10 + 8);
    puVar4[1] = 0;
    *(long **)(param_10 + 8) = plVar2;
  }
  return;
}



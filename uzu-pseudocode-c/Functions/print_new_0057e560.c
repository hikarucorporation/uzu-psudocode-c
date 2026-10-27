// Function : print_new
// Namespace: 
// Entry    : 0057e560
// Prototype: long * print_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057e560 - 0057e66c


long * print_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  long *plVar5;
  uint uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar7;
  int local_2c;
  char *local_28;
  
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,print_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar6 = (uint)param_10;
  if (uVar6 == 1) {
    if (*param_11 == 2) {
      puVar3 = (undefined8 *)atom_getsymbolarg(0,1,(long)param_11);
      iVar1 = strcmp((char *)*puVar3,"-n");
      if (iVar1 == 0) {
        plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
        plVar2[6] = *plVar5 + 0x168;
        return plVar2;
      }
      plVar2[6] = (long)puVar3;
      return plVar2;
    }
  }
  else if (uVar6 == 0) {
    puVar3 = gensym("print");
    plVar2[6] = (long)puVar3;
    return plVar2;
  }
  piVar4 = binbuf_new();
  uVar7 = binbuf_add(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar4
                     ,uVar6,(undefined8 *)param_11,param_12,param_13,param_14);
  uVar7 = binbuf_gettext(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar4,
                         &local_28,&local_2c,param_12,param_13,param_14);
  local_28 = resizebytes(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_28,
                         (long)local_2c,(long)local_2c + 1);
  local_28[local_2c] = '\0';
  puVar3 = gensym(local_28);
  plVar2[6] = (long)puVar3;
  freebytes(local_28);
  binbuf_free(piVar4);
  return plVar2;
}



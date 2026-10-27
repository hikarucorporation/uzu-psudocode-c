// Function : canvas_error_couldntcreate
// Namespace: 
// Entry    : 0052d9d0
// Prototype: undefined canvas_error_couldntcreate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052d9d0 - 0052da75


void canvas_error_couldntcreate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,int *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  int iVar1;
  void *pvVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 in_stack_ffffffffffffffd8;
  int local_24;
  void *local_20;
  
  local_20 = (void *)0x0;
  local_24 = 0;
  iVar1 = binbuf_getnatom(param_10);
  if (iVar1 != 0) {
    uVar3 = binbuf_gettext(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           param_10,&local_20,&local_24,param_12,param_13,param_14);
    pvVar2 = resizebytes(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_20,
                         (long)local_24,(long)local_24 + 1);
    *(undefined1 *)((long)pvVar2 + (long)local_24) = 0;
    local_20 = pvVar2;
    uVar3 = logpost(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,0,"%s",pvVar2,param_13,param_14,in_stack_ffffffffffffffd8);
    pd_error(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,"%s",param_11,
             pvVar2,param_13,param_14);
    freebytes(local_20);
  }
  return;
}



// Function : garray_write
// Namespace: 
// Entry    : 004fbd90
// Prototype: undefined garray_write(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004fbd90 - 004fbec0


void garray_write(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 *param_10,undefined8 param_11,int *param_12,char *param_13,
                 undefined8 param_14)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  FILE *__stream;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  int local_420;
  int local_41c;
  char local_418 [1000];
  
  piVar2 = (int *)garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  param_9,param_10,param_11,param_12,param_13,param_14);
  lVar3 = template_findbyname(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,*(long *)(piVar2 + 4));
  puVar4 = gensym("y");
  piVar6 = &local_420;
  pcVar9 = local_418;
  uVar5 = template_find_field(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,lVar3,(long)puVar4,&local_41c,piVar6,pcVar9,param_14);
  if (((int)uVar5 == 0) || (local_420 != 0)) {
    pcVar7 = (char *)**(long **)(param_9 + 0x28);
    pcVar8 = "%s: needs floating-point \'y\' field";
    uVar5 = extraout_XMM0_Qa_01;
  }
  else {
    lVar3 = glist_getcanvas(*(long *)(param_9 + 0x18));
    piVar6 = (int *)0x3e8;
    canvas_makefilename(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        lVar3,(char *)*param_10,local_418,1000,pcVar9,param_14);
    __stream = (FILE *)sys_fopen(local_418,"w");
    if (__stream != (FILE *)0x0) {
      if (0 < *piVar2) {
        lVar3 = 0;
        do {
          iVar1 = fprintf(__stream,"%g\n",
                          (double)*(float *)(*(long *)(piVar2 + 2) + (long)local_41c + lVar3 * 8));
          if (iVar1 < 1) {
            post(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "%s: write error");
            break;
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < *piVar2);
      }
      fclose(__stream);
      return;
    }
    pcVar8 = "%s: can\'t create";
    pcVar7 = local_418;
    uVar5 = extraout_XMM0_Qa_03;
  }
  pd_error(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar8,pcVar7,piVar6,
           pcVar9,param_14);
  return;
}



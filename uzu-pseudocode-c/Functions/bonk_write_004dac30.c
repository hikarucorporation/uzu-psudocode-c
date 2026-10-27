// Function : bonk_write
// Namespace: 
// Entry    : 004dac30
// Prototype: undefined bonk_write(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004dac30 - 004dad48


void bonk_write(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  int iVar1;
  undefined8 uVar2;
  FILE *param0;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char local_418 [1000];
  
  iVar4 = *(int *)(param_9 + 0x2634);
  lVar3 = *(long *)(param_9 + 0x2620);
  canvas_makefilename(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(long *)(param_9 + 0x40),(char *)*param_10,local_418,1000,param_13,param_14);
  sys_bashfilename(local_418,local_418);
  param0 = fopen(local_418,"w");
  uVar2 = extraout_XMM0_Qa;
  if (param0 == (FILE *)0x0) {
    post(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "%s: couldn\'t create");
  }
  else {
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      iVar1 = *(int *)(param_9 + 0x50);
      if (iVar1 != 0) {
        lVar5 = 0;
        do {
          fprintf(param0,"%6.2f ",(double)*(float *)(lVar3 + lVar5 * 4));
          lVar5 = lVar5 + 1;
        } while (iVar1 != (int)lVar5);
      }
      fputc(10,param0);
      lVar3 = lVar3 + 800;
      uVar2 = extraout_XMM0_Qa_00;
    }
    post(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"bonk: wrote %d templates\n")
    ;
    fclose(param0);
  }
  return;
}



// Function : pd_tilde_anything
// Namespace: 
// Entry    : 004e3c20
// Prototype: undefined pd_tilde_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004e3c20 - 004e3dd9


void pd_tilde_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 *param_10,int param_11,int *param_12,char *param_13,
                      undefined8 param_14)

{
  char cVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  char acStack_498 [128];
  undefined4 in_stack_fffffffffffffbe8;
  
  pFVar2 = *(FILE **)(param_9 + 0x50);
  if (pFVar2 != (FILE *)0x0) {
    pcVar6 = (char *)*param_10;
    if (*(int *)(param_9 + 0x70) != 0) {
      putc(2,pFVar2);
      do {
        putc((int)*pcVar6,pFVar2);
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      while (param_11 != 0) {
        param_11 = param_11 + -1;
        if (*param_12 == 2) {
          pFVar2 = *(FILE **)(param_9 + 0x50);
          pcVar6 = (char *)**(undefined8 **)(param_12 + 2);
          putc(2,pFVar2);
          do {
            putc((int)*pcVar6,pFVar2);
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
        }
        else if (*param_12 == 1) {
          pFVar2 = *(FILE **)(param_9 + 0x50);
          putc(1,pFVar2);
          fwrite(acStack_498 + 0x80,4,1,pFVar2);
        }
        param_12 = param_12 + 4;
      }
      putc(4,*(FILE **)(param_9 + 0x50));
      return;
    }
    piVar5 = param_12;
    fprintf(pFVar2,"%s ",pcVar6);
    uVar3 = extraout_XMM0_Da;
    uVar4 = extraout_XMM0_Db;
    for (; param_11 != 0; param_11 = param_11 + -1) {
      atom_string(CONCAT44(uVar4,uVar3),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_12,acStack_498 + 0x80,(uint *)0x3e8,piVar5,param_13,param_14,
                  (char)in_stack_fffffffffffffbe8);
      fprintf(*(FILE **)(param_9 + 0x50),"%s ",acStack_498 + 0x80);
      param_12 = param_12 + 4;
      uVar3 = extraout_XMM0_Da_00;
      uVar4 = extraout_XMM0_Db_00;
    }
    fwrite(&DAT_00652b71,2,1,*(FILE **)(param_9 + 0x50));
  }
  return;
}



// Function : binbuf_write
// Namespace: 
// Entry    : 00531120
// Prototype: undefined8 binbuf_write(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, uint * param_9, char * param_10, char * param_11, int param_12, char * param_13, undefined8 * param_14)
// Body     : 00531120 - 005313ba


undefined8
binbuf_write(undefined8 param_1,undefined8 param_2,double param_3,double param_4,double param_5,
            double param_6,double param_7,undefined8 param_8,uint *param_9,char *param_10,
            char *param_11,int param_12,char *param_13,undefined8 *param_14)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  uint *puVar5;
  FILE *__s;
  FILE *pFVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int *piVar7;
  undefined8 uVar8;
  char *__s_00;
  uint uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined1 in_stack_ffffffffffffebb8;
  char local_1428 [999];
  undefined1 local_1041;
  char local_1038 [4096];
  undefined1 local_38 [8];
  
  if (*param_11 == '\0') {
    param_11 = param_10;
    pd_snprintf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_1428,999,"%s",
                param_10,param_13,param_14,in_stack_ffffffffffffebb8);
  }
  else {
    param_13 = param_10;
    pd_snprintf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_1428,999,
                "%s/%s",param_11,param_10,param_14,in_stack_ffffffffffffebb8);
  }
  local_1041 = 0;
  sVar4 = strlen(param_10);
  iVar2 = strcmp(param_10 + (sVar4 - 4),".pat");
  uVar8 = extraout_RDX;
  uVar10 = extraout_XMM0_Qa;
  if ((iVar2 == 0) ||
     (iVar2 = strcmp(param_10 + (sVar4 - 4),".mxt"), uVar8 = extraout_RDX_00,
     uVar10 = extraout_XMM0_Qa_00, iVar2 == 0)) {
    puVar5 = (uint *)binbuf_convert(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    param_9,0,uVar8,param_11,param_13,param_14);
    param_9 = puVar5;
  }
  else {
    puVar5 = (uint *)0x0;
  }
  __s = (FILE *)sys_fopen(local_1428,"w");
  if (__s != (FILE *)0x0) {
    uVar9 = *param_9;
    if (uVar9 == 0) {
      __s_00 = local_1038;
    }
    else {
      piVar7 = *(int **)(param_9 + 2);
      __s_00 = local_1038;
      uVar8 = extraout_XMM0_Qa_01;
      do {
        iVar2 = *piVar7;
        if ((iVar2 == 9) || (iVar3 = 0x28, iVar2 == 2)) {
          sVar4 = strlen((char *)**(undefined8 **)(piVar7 + 2));
          iVar3 = (int)sVar4 + 0x50;
          uVar8 = extraout_XMM0_Qa_02;
        }
        pFVar6 = (FILE *)(local_38 + -(long)__s_00);
        if ((long)pFVar6 < (long)iVar3) {
          pFVar6 = __s;
          sVar4 = fwrite(local_1038,(long)__s_00 - (long)local_1038,1,__s);
          if (sVar4 == 0) goto LAB_00531343;
          iVar2 = *piVar7;
          __s_00 = local_1038;
          uVar8 = extraout_XMM0_Qa_03;
        }
        uVar9 = uVar9 - 1;
        if (iVar2 == 4) {
          if ((local_1038 < __s_00) && (__s_00[-1] == ' ')) {
            __s_00 = __s_00 + -1;
          }
          if (param_12 == 0) goto LAB_005312d7;
LAB_0053122b:
          cVar1 = '\n';
        }
        else {
          if (((iVar2 == 5) && (local_1038 < __s_00)) && (__s_00[-1] == ' ')) {
            __s_00 = __s_00 + -1;
          }
LAB_005312d7:
          atom_string(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar7,__s_00,
                      (uint *)(ulong)(((int)local_38 - (int)__s_00) - 2),pFVar6,param_13,param_14,
                      in_stack_ffffffffffffebb8);
          sVar4 = strlen(__s_00);
          __s_00 = __s_00 + (int)sVar4;
          cVar1 = ' ';
          uVar8 = extraout_XMM0_Qa_04;
          if (*piVar7 == 4) goto LAB_0053122b;
        }
        *__s_00 = cVar1;
        __s_00 = __s_00 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar9 != 0);
    }
    sVar4 = fwrite(local_1038,(long)__s_00 - (long)local_1038,1,__s);
    if ((sVar4 != 0) && (iVar2 = fflush(__s), iVar2 == 0)) {
      uVar8 = 0;
      if (puVar5 != (uint *)0x0) {
        freebytes(*(void **)(puVar5 + 2));
        freebytes(puVar5);
      }
      goto LAB_00531374;
    }
  }
LAB_00531343:
  if (puVar5 != (uint *)0x0) {
    freebytes(*(void **)(puVar5 + 2));
    freebytes(puVar5);
  }
  uVar8 = 1;
  if (__s == (FILE *)0x0) {
    return 1;
  }
LAB_00531374:
  fclose(__s);
  return uVar8;
}



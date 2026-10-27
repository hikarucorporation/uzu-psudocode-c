// Function : stdout_anything
// Namespace: 
// Entry    : 004eb0e0
// Prototype: undefined stdout_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, uint param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004eb0e0 - 004eb44a


void stdout_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 *param_10,uint param_11,int *param_12,char *param_13,
                    undefined8 param_14)

{
  char cVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  FILE *pFVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar13;
  float fVar14;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar15;
  undefined1 in_stack_fffffffffffefbc8;
  char acStack_10428 [999];
  char cStack_10041;
  undefined1 auStack_10040 [8];
  undefined1 auStack_10038 [65544];
  
  if ((*(char **)PTR_pd_extraflags_00715c80 != (char *)0x0) &&
     (**(char **)PTR_pd_extraflags_00715c80 == 'b')) {
    pFVar9 = *(FILE **)PTR_stdout_00715898;
    pcVar7 = (char *)*param_10;
    putc(2,pFVar9);
    do {
      putc((int)*pcVar7,pFVar9);
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (param_11 != 0) {
      do {
        param_11 = param_11 - 1;
        if (*param_12 == 2) {
          pFVar9 = *(FILE **)PTR_stdout_00715898;
          pcVar7 = (char *)**(undefined8 **)(param_12 + 2);
          putc(2,pFVar9);
          do {
            putc((int)*pcVar7,pFVar9);
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
        }
        else if (*param_12 == 1) {
          pFVar9 = *(FILE **)PTR_stdout_00715898;
          putc(1,pFVar9);
          fwrite(auStack_10038,4,1,pFVar9);
        }
        param_12 = param_12 + 4;
      } while (param_11 != 0);
    }
    puVar2 = PTR_stdout_00715898;
    putc(4,*(FILE **)PTR_stdout_00715898);
    if (*(int *)(param_9 + 0x34) == 0) {
      return;
    }
    fflush(*(FILE **)puVar2);
    return;
  }
  iVar6 = *(int *)(param_9 + 0x30);
  if (iVar6 != 2) {
    piVar5 = param_12;
    strncpy(acStack_10428,(char *)*param_10,1000);
    cStack_10041 = '\0';
    if (param_11 != 0) {
      sVar4 = strlen(acStack_10428);
      pcVar7 = acStack_10428 + sVar4;
      uVar13 = extraout_XMM0_Da_00;
      uVar15 = extraout_XMM0_Db_00;
      do {
        param_11 = param_11 - 1;
        if (pcVar7 < &cStack_10041) {
          pcVar7[0] = ' ';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 1;
        }
        atom_string(CONCAT44(uVar15,uVar13),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_12,pcVar7,(uint *)(ulong)(uint)((int)auStack_10040 - (int)pcVar7),piVar5,
                    param_13,param_14,in_stack_fffffffffffefbc8);
        sVar4 = strlen(pcVar7);
        pcVar7 = pcVar7 + sVar4;
        param_12 = param_12 + 4;
        uVar13 = extraout_XMM0_Da_01;
        uVar15 = extraout_XMM0_Db_01;
      } while (param_11 != 0);
      iVar6 = *(int *)(param_9 + 0x30);
    }
    if (iVar6 == 1) {
      puts(acStack_10428);
      iVar6 = *(int *)(param_9 + 0x34);
    }
    else {
      printf("%s;\n",acStack_10428);
      iVar6 = *(int *)(param_9 + 0x34);
    }
    if (iVar6 == 0) {
      return;
    }
    pFVar9 = *(FILE **)PTR_stdout_00715898;
    goto LAB_004eb434;
  }
  piVar5 = param_12;
  puVar3 = gensym("list");
  if (((puVar3 != param_10) && (puVar3 = gensym("float"), puVar3 != param_10)) &&
     (puVar3 = gensym("bang"), puVar3 != param_10)) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,
             "stdout: only \'list\' messages allowed in binary mode (got \'%s\')",*param_10,piVar5,
             param_13,param_14);
    return;
  }
  uVar12 = 0xffff;
  if ((int)param_11 < 0xffff) {
    uVar12 = param_11;
  }
  if ((int)param_11 < 1) {
    uVar11 = 0;
LAB_004eb3f8:
    uVar10 = (uint)uVar11;
  }
  else {
    uVar11 = 1;
    if (1 < (int)uVar12) {
      uVar11 = (ulong)uVar12;
    }
    uVar8 = 0;
    do {
      fVar14 = (float)atom_getfloatarg((int)uVar8,uVar12,(long)param_12);
      auStack_10038[uVar8] = (char)(int)fVar14;
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar8);
    uVar10 = 0xfffe;
    if ((uint)uVar11 < 0xfffe) goto LAB_004eb3f8;
  }
  puVar2 = PTR_stdout_00715898;
  auStack_10038[uVar10] = 0;
  fwrite(auStack_10038,1,(long)(int)uVar12,*(FILE **)PTR_stdout_00715898);
  if ((uVar12 != 0) && (*(int *)(param_9 + 0x34) == 0)) {
    return;
  }
  pFVar9 = *(FILE **)puVar2;
LAB_004eb434:
  fflush(pFVar9);
  return;
}



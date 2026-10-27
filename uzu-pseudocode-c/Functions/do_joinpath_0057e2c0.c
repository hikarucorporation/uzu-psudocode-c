// Function : do_joinpath
// Namespace: 
// Entry    : 0057e2c0
// Prototype: undefined do_joinpath(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint param_9, int * param_10, undefined8 * param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 0057e2c0 - 0057e46a


void do_joinpath(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                uint param_9,int *param_10,undefined8 *param_11,ulong param_12,char *param_13,
                undefined8 param_14)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  size_t sVar4;
  char *__s;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 in_stack_fffffffffffff7e8;
  char local_808 [1008];
  char local_418 [1000];
  
  uVar9 = (ulong)param_9;
  __s = local_808;
  memset(__s,0,1000);
  if ((int)param_9 < 1) {
    lVar5 = 0;
  }
  else {
    lVar8 = 0;
    lVar5 = 0;
    uVar10 = extraout_XMM0_Qa;
    do {
      if (*param_10 != 0) {
        if (*param_10 == 2) {
          puVar3 = (undefined8 *)atom_getsymbol(param_10);
          pcVar6 = (char *)*puVar3;
          uVar10 = extraout_XMM0_Qa_01;
          if (pcVar6 == (char *)0x0) goto LAB_0057e326;
          sVar4 = strlen(pcVar6);
          uVar10 = extraout_XMM0_Qa_02;
        }
        else {
          pcVar6 = local_418;
          atom_string(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,pcVar6
                      ,(uint *)0x3e8,param_12,param_13,param_14,in_stack_fffffffffffff7e8);
          sVar4 = strlen(pcVar6);
          uVar10 = extraout_XMM0_Qa_03;
        }
        if (sVar4 != 0) {
          if (pcVar6[sVar4 - 1] == '/') {
            lVar8 = 0;
          }
          lVar7 = lVar5 + sVar4;
          param_12 = lVar8 + lVar7;
          if (999 < param_12) break;
          if ((int)lVar8 != 0) {
            local_808[lVar5] = '/';
            lVar7 = lVar5 + sVar4 + 1;
            lVar5 = lVar5 + 1;
          }
          strcpy(local_808 + lVar5,pcVar6);
          lVar8 = 1;
          lVar5 = lVar7;
          uVar10 = extraout_XMM0_Qa_00;
        }
      }
LAB_0057e326:
      param_10 = param_10 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (param_11 != (undefined8 *)0x0) {
    pcVar6 = (char *)*param_11;
    sVar4 = strlen(pcVar6);
    if ((sVar4 != 0) && (sVar4 + lVar5 < 1000)) {
      strcpy(local_808 + lVar5,pcVar6);
    }
  }
  sys_unbashfilename(__s,__s);
  pcVar6 = __s;
  do {
    while( true ) {
      cVar2 = *__s;
      *pcVar6 = cVar2;
      pcVar6 = pcVar6 + 1;
      if (cVar2 != '/') break;
      do {
        pcVar1 = __s + 1;
        __s = __s + 1;
      } while (*pcVar1 == '/');
    }
    __s = __s + 1;
  } while (cVar2 != '\0');
  gensym(local_808);
  return;
}



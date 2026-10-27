// Function : sys_trytoopenit
// Namespace: 
// Entry    : 00546ac0
// Prototype: int sys_trytoopenit(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, char * param_10, char * param_11, char * param_12, undefined8 * param_13, ulong param_14, undefined8 param_15, int param_16)
// Body     : 00546ac0 - 00546cb0


int sys_trytoopenit(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   char *param_9,char *param_10,char *param_11,char *param_12,undefined8 *param_13,
                   ulong param_14,undefined8 param_15,int param_16)

{
  char cVar1;
  int __fd;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  stat *psVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  ulong uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 *puVar11;
  stat local_808 [7];
  char local_418 [1000];
  
  uVar10 = param_14 & 0xffffffff;
  puVar11 = param_13;
  sVar3 = strlen(param_9);
  sVar4 = strlen(param_10);
  sVar5 = strlen(param_11);
  iVar9 = -1;
  if (sVar5 + sVar4 + sVar3 + 4 <= uVar10) {
    sys_expandpath(param_9,local_418,1000);
    strcpy(param_12,local_418);
    if (*param_12 != '\0') {
      sVar3 = strlen(param_12);
      if (param_12[sVar3 - 1] != '/') {
        sVar3 = strlen(param_12);
        (param_12 + sVar3)[0] = '/';
        (param_12 + sVar3)[1] = '\0';
      }
    }
    strcat(param_12,param_10);
    strcat(param_12,param_11);
    cVar1 = *param_12;
    psVar6 = local_808;
    if (cVar1 != '\0') {
      pcVar7 = param_12;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)&psVar6->st_dev = cVar1;
        psVar6 = (stat *)((long)&psVar6->st_dev + 1);
        cVar1 = *pcVar7;
      } while (cVar1 != '\0');
    }
    *(undefined1 *)&psVar6->st_dev = 0;
    __fd = open((char *)local_808,0);
    if (__fd < 0) {
      if (param_16 != 0) {
        logpost(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,4,
                "tried %s and failed",param_12,param_13,param_14,(char)puVar11);
      }
    }
    else {
      iVar2 = fstat(__fd,local_808);
      if ((iVar2 < 0) || ((local_808[0].st_mode & 0xf000) == 0x4000)) {
        if (param_16 != 0) {
          logpost(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,4,
                  "tried %s; stat failed or directory",param_12,param_13,param_14,(char)puVar11);
        }
        close(__fd);
      }
      else {
        if (param_16 != 0) {
          logpost(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,4,
                  "tried %s and succeeded",param_12,param_13,param_14,(char)puVar11);
        }
        cVar1 = *param_12;
        pcVar7 = param_12;
        if (cVar1 != '\0') {
          pcVar8 = param_12;
          do {
            pcVar7 = pcVar8 + 1;
            *pcVar8 = cVar1;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar7;
          } while (cVar1 != '\0');
        }
        *pcVar7 = '\0';
        pcVar7 = strrchr(param_12,0x2f);
        if (pcVar7 != (char *)0x0) {
          *pcVar7 = '\0';
          param_12 = pcVar7 + 1;
        }
        *puVar11 = param_12;
        iVar9 = __fd;
      }
    }
  }
  return iVar9;
}



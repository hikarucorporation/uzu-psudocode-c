// Function : sys_do_load_lib
// Namespace: 
// Entry    : 00541d30
// Prototype: undefined8 sys_do_load_lib(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, char * param_10, char * param_11)
// Body     : 00541d30 - 00541fdf


undefined8
sys_do_load_lib(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,char *param_10,char *param_11)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  long *plVar6;
  int iVar7;
  char **ppcVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  char *local_c08;
  char *local_c00;
  undefined1 local_bf8 [4];
  undefined2 local_bf4;
  undefined1 local_bf2 [1002];
  char local_808 [998];
  undefined1 local_422;
  undefined1 local_421;
  char local_418 [1000];
  
  if (param_11 != (char *)0x0) {
    pcVar4 = strrchr(param_10,0x2f);
    local_c00 = pcVar4 + 1;
    if (pcVar4 == (char *)0x0) {
      local_c00 = param_10;
    }
    bVar2 = false;
    iVar7 = 0;
    pcVar4 = local_c00;
    do {
      cVar1 = *pcVar4;
      if ((int)cVar1 == 0) break;
      if (((((byte)(cVar1 - 0x30U) < 10) || ((byte)(cVar1 + 0xbfU) < 0x1a)) || (cVar1 == '_')) ||
         ((byte)(cVar1 + 0x9fU) < 0x1a)) {
        local_bf8[iVar7] = cVar1;
        iVar3 = 1;
      }
      else if ((cVar1 == '~') && (pcVar4[1] == '\0')) {
        *(undefined4 *)(local_bf8 + (long)iVar7 + 3) = 0x65646c;
        *(undefined4 *)(local_bf8 + iVar7) = 0x6c69745f;
        sVar5 = strlen(local_bf8 + iVar7);
        iVar3 = (int)sVar5;
      }
      else {
        sprintf(local_bf8 + iVar7,"0x%02x",(int)cVar1);
        sVar5 = strlen(local_bf8 + iVar7);
        iVar3 = (int)sVar5;
        bVar2 = true;
      }
      iVar7 = iVar7 + iVar3;
      pcVar4 = pcVar4 + 1;
    } while (iVar7 < 0x3e1);
    local_bf8[iVar7] = 0;
    if (bVar2) {
      sVar5 = strlen(local_bf8);
      memmove(local_bf2,local_bf8,sVar5 + 1);
      local_bf8 = (undefined1  [4])0x75746573;
      local_bf4 = 0x5f70;
      plVar6 = sys_get_dllextensions
                         (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      pcVar4 = (char *)*plVar6;
      uVar10 = extraout_XMM0_Qa_00;
    }
    else {
      sVar5 = strlen(local_bf8);
      *(undefined4 *)(local_bf8 + sVar5) = 0x7465735f;
      *(undefined4 *)(local_bf8 + sVar5 + 3) = 0x707574;
      plVar6 = sys_get_dllextensions
                         (extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8);
      pcVar4 = (char *)*plVar6;
      uVar10 = extraout_XMM0_Qa_02;
    }
    if (pcVar4 != (char *)0x0) {
      do {
        plVar6 = plVar6 + 1;
        uVar9 = 1000;
        ppcVar8 = &local_c08;
        iVar7 = sys_trytoopenit(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_11,param_10,pcVar4,local_418,&local_c08,1000,1,1);
        uVar10 = extraout_XMM0_Qa_03;
        if ((-1 < iVar7) &&
           (uVar9 = sys_do_load_lib_from_file
                              (extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,iVar7,local_418,local_c08,local_bf8,(char *)ppcVar8,uVar9),
           uVar10 = extraout_XMM0_Qa_04, (int)uVar9 != 0)) {
          return 1;
        }
        pcVar4 = (char *)*plVar6;
      } while (pcVar4 != (char *)0x0);
    }
    strncpy(local_808,param_10,1000);
    local_422 = 0;
    sVar5 = strlen(local_808);
    (local_808 + sVar5)[0] = '/';
    (local_808 + sVar5)[1] = '\0';
    sVar5 = strlen(local_808);
    strncat(local_808,local_c00,1000 - sVar5);
    local_421 = 0;
    plVar6 = sys_get_dllextensions
                       (extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    pcVar4 = (char *)*plVar6;
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
    uVar10 = extraout_XMM0_Qa_06;
    do {
      plVar6 = plVar6 + 1;
      uVar9 = 1000;
      ppcVar8 = &local_c08;
      iVar7 = sys_trytoopenit(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_11,local_808,pcVar4,local_418,&local_c08,1000,1,1);
      uVar10 = extraout_XMM0_Qa_07;
      if ((-1 < iVar7) &&
         (uVar9 = sys_do_load_lib_from_file
                            (extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,iVar7,local_418,local_c08,local_bf8,(char *)ppcVar8,uVar9),
         uVar10 = extraout_XMM0_Qa_08, (int)uVar9 != 0)) {
        return 1;
      }
      pcVar4 = (char *)*plVar6;
    } while (pcVar4 != (char *)0x0);
  }
  return 0;
}


